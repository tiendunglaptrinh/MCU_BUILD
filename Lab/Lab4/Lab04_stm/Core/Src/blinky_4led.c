/*
 * blinky_4led.c
 *
 *  Created on: Nov 25, 2024
 *      Author: tangu
 */

#include "blinky_4led.h"
#include "seven_segment.h"

int clockBuffer[4] = {1, 0, 0, 3};

void reset7Led(){
	SEG1_status = 0;
	SEG2_status = 1;
	SEG3_status = 1;
	SEG4_status = 1;
}

void blinky4led() {
    if (timer2_flag == 1) {
    	setTimer2(duration_blinky);

        HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SEG1_status);
        HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SEG2_status);
        HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SEG3_status);
        HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SEG4_status);

        if (SEG1_status == 0) {
            display7SEG(clockBuffer[0]);
            SEG1_status = 1;
            SEG2_status = 0;
        } else if (SEG2_status == 0) {
            display7SEG(clockBuffer[1]);
            SEG2_status = 1;
            SEG3_status = 0;
        } else if (SEG3_status == 0) {
            display7SEG(clockBuffer[2]);
            SEG3_status = 1;
            SEG4_status = 0;
        } else if (SEG4_status == 0) {
            display7SEG(clockBuffer[3]);
            SEG4_status = 1;
            SEG1_status = 0;
        }
    }
}

void updateDisplayClock(int duration1, int duration2){
	clockBuffer[0] = (duration1 / 100) / 10;
	clockBuffer[1] = (duration1 / 100) % 10;
	clockBuffer[2] = (duration2 / 100) / 10;
	clockBuffer[3] = (duration2 / 100) % 10;
}

void updateManualClock(int duration){
	clockBuffer[0] = 0;
	clockBuffer[1] = 0;
	clockBuffer[2] = (duration / 100) / 10;
	clockBuffer[3] = (duration / 100) % 10;
}

void realTimeClock(){
	if (clock_status == CLOCK_DISPLAY){
		if (timer3_flag == 1){
			setTimer3(100);
			duration_road1 -= 100;
			duration_road2 -= 100;
			updateDisplayClock(duration_road1, duration_road2);
		}
		if (duration_road1 < 0) duration_road1 = 0;
		if (duration_road2 < 0) duration_road2 = 0;
	}
}

void displayClock(){
	switch (clock_status) {
		case CLOCK_INIT:
			clock_status = CLOCK_DISPLAY;
			break;
		case CLOCK_DISPLAY:
			// TOTO
			updateDisplayClock(duration_road1, duration_road2);
			break;
		case CLOCK_MAN:
			// TODO
			updateManualClock(duration_current);
			break;
		default:
			break;
	}
	blinky4led();
}
