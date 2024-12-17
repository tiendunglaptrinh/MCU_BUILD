/*
 * blinky_4led.h
 *
 *  Created on: Nov 25, 2024
 *      Author: tangu
 */

#ifndef INC_BLINKY_4LED_H_
#define INC_BLINKY_4LED_H_

#include "main.h"
#include "global.h"
#include "blinky_4led.h"

void blinky4led();
void displayClock();
void reset7Led();
void updateDisplayClock(int duration1, int duration2);
void updateManualClock(int duration);
void realTimeClock();


#endif /* INC_BLINKY_4LED_H_ */
