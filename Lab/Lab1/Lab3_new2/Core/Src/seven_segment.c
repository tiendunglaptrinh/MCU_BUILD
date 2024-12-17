/*
 * seven_segment.c
 *
 *  Created on: Nov 18, 2024
 *      Author: tangu
 */

#include "seven_segment.h"

void display7SEG(int num){
	const int led_on = 0;
	const int led_off = 1;
	HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, led_off);
	HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, led_off);
	HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, led_off);
	HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, led_off);
	HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, led_off);
	HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, led_off);
	HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, led_off);
	switch (num) {
		case 0:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, led_on);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, led_on);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, led_on);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, led_on);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, led_on);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, led_on);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, led_off);
			break;
		case 1:
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, led_on);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, led_on);
			break;
		case 2:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, led_on);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, led_on);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, led_on);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, led_on);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, led_on);
			break;
		case 3:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, led_on);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, led_on);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, led_on);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, led_on);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, led_on);
			break;
		case 4:
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, led_on);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, led_on);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, led_on);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, led_on);
			break;
		case 5:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, led_on);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, led_on);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, led_on);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, led_on);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, led_on);
			break;
		case 6:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, led_on);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, led_on);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, led_on);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, led_on);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, led_on);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, led_on);
			break;
		case 7:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, led_on);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, led_on);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, led_on);
			break;
		case 8:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, led_on);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, led_on);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, led_on);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, led_on);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, led_on);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, led_on);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, led_on);
			break;
		case 9:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, led_on);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, led_on);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, led_on);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, led_on);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, led_on);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, led_on);
			break;
		default:
			break;
	}
}
