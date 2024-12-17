/*
 * fsm_manual.c
 *
 *  Created on: Nov 18, 2024
 *      Author: tangu
 */

#include "fsm_manual.h"
#include "global.h"
#include "led.h"
#include "button.h"
#include "blinky_4led.h"

void fsm_manual_run() {

	switch (status) {
		case MAN_RED:
			red1_on();
			red2_on();
			yellow1_off();
			yellow2_off();
			green1_off();
			green2_off();

			if (isButton1Pressed() == 1) {
				duration_add = 0;
				timer1_flag = 1;
				status = MAN_GREEN;
				clock_status = CLOCK_MAN;
				duration_current = duration_green;
				updateManualClock(duration_current);
				setTimer1(TIME_MAN_MODE);  // Thiết lập lại thời gian
			}

			if (isButton2Pressed() == 1) {
				duration_add += 100;  // Cộng thêm 100 vào thời gian
				duration_red += 100;

				duration_current = duration_red;
				updateManualClock(duration_current);

				timer1_flag = 1;
				setTimer1(TIME_MAN_MODE);  // Thiết lập lại thời gian
			}

			if (isButton3Pressed() == 1) {
				duration_red = ((duration_red / 100) % 99) * 100;
				if (duration_red < 1000){
					duration_yellow = (duration_red / 200) * 100;
					duration_green = duration_red - duration_yellow;
				}
				else {
					duration_yellow = (duration_red / 400) * 100;
					duration_green = duration_red - duration_yellow;
				}
				status = AUTO_RED_GREEN;
				timer1_flag = 1;
				duration_road1 = duration_red;
				duration_road2 = duration_green;
				clock_status = CLOCK_DISPLAY;
				updateDisplayClock(duration_road1, duration_road2);
				reset7Led();
				setTimer1(duration_green);  // Thiết lập lại thời gian
			}

			// Kiểm tra và chuyển trạng thái sau khi hết thời gian
			if (timer1_flag == 1) {
				duration_red -= duration_add;
				status = AUTO_RED_GREEN;
				duration_road1 = duration_red;
				duration_road2 = duration_green;
				clock_status = CLOCK_DISPLAY;
				updateDisplayClock(duration_road1, duration_road2);
				setTimer1(duration_green);  // Thiết lập lại bộ đếm thời gian
			}
			break;

		case MAN_GREEN:
			// Bật đèn xanh
			red1_off();
			red2_off();
			yellow1_off();
			yellow2_off();
			green1_on();
			green2_on();

			if (isButton1Pressed() == 1) {
				duration_add = 0;
				status = MAN_YELLOW;
				clock_status = CLOCK_MAN;
				timer1_flag = 1;
				duration_current = duration_yellow;
				updateManualClock(duration_current);
				setTimer1(TIME_MAN_MODE);  // Thiết lập lại thời gian
			}

			if (isButton2Pressed() == 1){
				duration_add += 100;
				duration_green += 100;
				duration_current = duration_green;
				updateManualClock(duration_current);

				timer1_flag = 1;
				setTimer1(TIME_MAN_MODE);
			}

			if (isButton3Pressed() == 1){
				duration_green = ((duration_green / 100) % 75) * 100;
				if (duration_green <= 500){
					duration_yellow = duration_green;
					duration_red = duration_green + duration_yellow;
				}
				else {
					duration_red = (duration_green * 4 / 3);
					duration_yellow = duration_red - duration_green;
				}
				status = AUTO_RED_GREEN;
				timer1_flag = 1;
				duration_road1 = duration_red;
				duration_road2 = duration_green;
				updateDisplayClock(duration_road1, duration_road2);
				clock_status = CLOCK_DISPLAY;
				reset7Led();
				setTimer1(duration_green);  // Thiết lập lại thời gian
			}
			// Kiểm tra và chuyển trạng thái sau khi hết thời gian
			if (timer1_flag == 1) {
				duration_green -= duration_add;
				status = AUTO_RED_GREEN;
				timer1_flag = 1;
				duration_road1 = duration_red;
				duration_road2 = duration_green;
				updateDisplayClock(duration_road1, duration_road2);
				clock_status = CLOCK_DISPLAY;
				setTimer1(duration_green);  // Thiết lập lại bộ đếm thời gian cho việc không làm gì sau khi nhấn nút 1
			}
			break;

		case MAN_YELLOW:
			// Bật đèn vàng
			red1_off();
			red2_off();
			yellow1_on();
			yellow2_on();
			green1_off();
			green2_off();

			if (isButton1Pressed() == 1) {
				status = MAN_RED;
				duration_add = 0;
				clock_status = CLOCK_MAN;
				duration_current = duration_red;
				updateManualClock(duration_current);
				reset7Led();
				timer1_flag = 1;
				setTimer1(TIME_MAN_MODE);  // Thiết lập lại thời gian
			}

			if (isButton2Pressed() == 1){
				clock_status = CLOCK_MAN;
				duration_add += 100;
				duration_yellow += 100;
				duration_current = duration_yellow;
				updateManualClock(duration_current);
				timer1_flag = 1;
				setTimer1(TIME_MAN_MODE);
			}

			if (isButton3Pressed() == 1){
				duration_yellow = ((duration_yellow % 100) % 24) * 100;
				if (duration_yellow <= 400){
					duration_green = duration_yellow;
					duration_red = duration_green + duration_yellow;
				}
				else {
					duration_red = (duration_yellow * 4 / 1);
					duration_green = duration_red - duration_yellow;
				}
				status = AUTO_RED_GREEN;
				timer1_flag = 1;
				setTimer1(duration_green);  // Thiết lập lại thời gian
				duration_road1 = duration_red;
				duration_road2 = duration_green;
			}
			// Kiểm tra và chuyển trạng thái sau khi hết thời gian
			if (timer1_flag == 1) {
				duration_yellow -= duration_add;
				status = AUTO_RED_GREEN;
				timer1_flag = 1;
				duration_road1 = duration_red;
				duration_road2 = duration_green;
				clock_status = CLOCK_DISPLAY;
				setTimer1(duration_green);  // Thiết lập lại bộ đếm thời gian
			}
			break;

		default:
			break;
	}
}
