/*
 * led.c
 *
 *  Created on: Nov 18, 2024
 *      Author: tangu
 */

#include "led.h"

void red1_on(){
	HAL_GPIO_WritePin(RED1_GPIO_Port, RED1_Pin, GPIO_PIN_RESET);
}
void red1_off(){
	HAL_GPIO_WritePin(RED1_GPIO_Port, RED1_Pin, GPIO_PIN_SET);
}
void red2_on(){
	HAL_GPIO_WritePin(RED2_GPIO_Port, RED2_Pin, GPIO_PIN_RESET);
}
void red2_off(){
	HAL_GPIO_WritePin(RED2_GPIO_Port, RED2_Pin, GPIO_PIN_SET);
}

void yellow1_on(){
	HAL_GPIO_WritePin(YELLOW1_GPIO_Port, YELLOW1_Pin, GPIO_PIN_RESET);
}
void yellow1_off(){
	HAL_GPIO_WritePin(YELLOW1_GPIO_Port, YELLOW1_Pin, GPIO_PIN_SET);
}
void yellow2_on(){
	HAL_GPIO_WritePin(YELLOW2_GPIO_Port, YELLOW2_Pin, GPIO_PIN_RESET);
}
void yellow2_off(){
	HAL_GPIO_WritePin(YELLOW2_GPIO_Port, YELLOW2_Pin, GPIO_PIN_SET);
}

void green1_on(){
	HAL_GPIO_WritePin(GREEN1_GPIO_Port, GREEN1_Pin, GPIO_PIN_RESET);
}
void green1_off(){
	HAL_GPIO_WritePin(GREEN1_GPIO_Port, GREEN1_Pin, GPIO_PIN_SET);
}
void green2_on(){
	HAL_GPIO_WritePin(GREEN2_GPIO_Port, GREEN2_Pin, GPIO_PIN_RESET);
}
void green2_off(){
	HAL_GPIO_WritePin(GREEN2_GPIO_Port, GREEN2_Pin, GPIO_PIN_SET);
}

