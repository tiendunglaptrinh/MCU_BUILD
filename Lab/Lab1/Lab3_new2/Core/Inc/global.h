/*
 * global.h
 *
 *  Created on: Nov 18, 2024
 *      Author: tangu
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "software_timer.h"
#include "Button.h"
#include "main.h"

#define INIT				1
#define AUTO_RED_GREEN		2
#define AUTO_RED_YELLOW		3
#define AUTO_GREEN_RED	 	4
#define AUTO_YELLOW_RED		5

#define MAN_RED			12
#define MAN_GREEN		13
#define MAN_YELLOW		14
#define TIME_MAN_MODE	500

#define CLOCK_INIT		20
#define CLOCK_DISPLAY	21
#define CLOCK_MAN		22

extern int status;
extern int clock_status;
extern int duration_red;
extern int duration_yellow;
extern int duration_green;
extern int duration_add;

extern int duration_current;
extern int duration_road1;
extern int duration_road2;
extern int clock_status;

extern int duration_blinky;
extern int duration_realtime;

extern int SEG1_status;
extern int SEG2_status;
extern int SEG3_status;
extern int SEG4_status;
extern int clockBuffer[4];

#endif /* INC_GLOBAL_H_ */
