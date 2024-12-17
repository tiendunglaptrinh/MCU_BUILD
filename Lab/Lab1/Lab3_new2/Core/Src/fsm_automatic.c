/*
 * fsm_automatic.c
 *
 *  Created on: Nov 18, 2024
 *      Author: tangu
 */

#include "fsm_automatic.h"
#include "led.h"
#include "global.h"
#include "blinky_4led.h"

void fsm_automatic_run() {
	switch (status) {
	case INIT:
		red1_off();
		yellow1_off();
		green1_off();
		red2_off();
		yellow2_off();
		green2_off();

		status = AUTO_RED_GREEN;
		clock_status = CLOCK_DISPLAY;
		setTimer1(duration_green);
		break;
	case AUTO_RED_GREEN:
		red1_on();
		yellow1_off();
		green1_off();

		red2_off();
		yellow2_off();
		green2_on();

		if (isButton1Pressed() == 1) {
			duration_add = 0;
			status = MAN_RED;
			timer1_flag = 1;
			duration_current = duration_red;
			updateManualClock(duration_current);
			reset7Led();
			clock_status = CLOCK_MAN;
			setTimer1(TIME_MAN_MODE);
		}

		if (timer1_flag == 1) {
			duration_road1 = 200;
			duration_road2 = 200;
			status = AUTO_RED_YELLOW;
			clock_status = CLOCK_DISPLAY;
			setTimer1(duration_yellow);
		}
		break;
	case AUTO_RED_YELLOW:
		red1_on();
		yellow1_off();
		green1_off();

		red2_off();
		yellow2_on();
		green2_off();

		if (isButton1Pressed() == 1) {
			status = MAN_RED;
			timer1_flag = 1;
			duration_current = duration_red;
			updateManualClock(duration_current);
			reset7Led();
			clock_status = CLOCK_MAN;
			setTimer1(TIME_MAN_MODE);
		}

		if (timer1_flag == 1) {
			duration_road1 = 300;
			duration_road2 = 500;
			status = AUTO_GREEN_RED;
			clock_status = CLOCK_DISPLAY;
			setTimer1(duration_green);
		}
		break;
	case AUTO_GREEN_RED:
		red1_off();
		yellow1_off();
		green1_on();

		red2_on();
		yellow2_off();
		green2_off();

		if (isButton1Pressed() == 1) {
			status = MAN_RED;
			timer1_flag = 1;
			duration_current = duration_red;
			updateManualClock(duration_current);
			reset7Led();
			clock_status = CLOCK_MAN;
			setTimer1(TIME_MAN_MODE);
		}

		if (timer1_flag == 1) {
			duration_road1 = 200;
			duration_road2 = 200;
			status = AUTO_YELLOW_RED;
			clock_status = CLOCK_DISPLAY;
			setTimer1(duration_yellow);
		}
		break;
	case AUTO_YELLOW_RED:
		red1_off();
		yellow1_on();
		green1_off();

		red2_on();
		yellow2_off();
		green2_off();

		if (isButton1Pressed() == 1) {
			timer1_flag = 1;
			status = MAN_RED;
			clock_status = CLOCK_MAN;
			reset7Led();
			setTimer1(TIME_MAN_MODE);
		}

		if (timer1_flag == 1) {
			duration_road1 = 500;
			duration_road2 = 300;
			status = AUTO_RED_GREEN;
			clock_status = CLOCK_DISPLAY;
			setTimer1(duration_green);
		}
		break;
	default:
		break;
	}
}
