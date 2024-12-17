/*
 * Button.c
 *
 *  Created on: Nov 1, 2024
 *      Author: tangu
 */

#include "Button.h"

int button_flag1 = 0;
int button_flag2 = 0;
int button_flag3 = 0;


// Chống rung 3 lần
int KeyReg0_1 = NORMAL_STATE;
int KeyReg1_1 = NORMAL_STATE;
int KeyReg2_1 = NORMAL_STATE;

int KeyReg0_2 = NORMAL_STATE;
int KeyReg1_2 = NORMAL_STATE;
int KeyReg2_2 = NORMAL_STATE;

int KeyReg0_3 = NORMAL_STATE;
int KeyReg1_3 = NORMAL_STATE;
int KeyReg2_3 = NORMAL_STATE;

int KeyReg3_1 = NORMAL_STATE;
int KeyReg3_2 = NORMAL_STATE;
int KeyReg3_3 = NORMAL_STATE;

int TimerForKeyPress1 = 200;
int TimerForKeyPress2 = 200;
int TimerForKeyPress3 = 200;

int isButton1Pressed(){
	if (button_flag1 == 1){
		button_flag1 = 0;
		return 1;
	}
	else {
		return 0;
	}
}

int isButton2Pressed(){
	if (button_flag2 == 1){
		button_flag2 = 0;
		return 1;
	}
	else{
		return 0;
	}
}

int isButton3Pressed(){
	if (button_flag3 == 1){
		button_flag3 = 0;
		return 1;
	}
	else{
		return 0;
	}
}
void subKeyProcess1(){
//	TODO
	button_flag1 = 1;
}

void subKeyProcess2(){
	button_flag2 = 1;
}

void subKeyProcess3(){
	button_flag3 = 1;
}

void getKeyInput1(){
	KeyReg0_1 = KeyReg1_1;
	KeyReg1_1 = KeyReg2_1;
	KeyReg2_1 = HAL_GPIO_ReadPin(BUTTON1_GPIO_Port, BUTTON1_Pin);
	if ((KeyReg0_1 == KeyReg1_1) && (KeyReg1_1 == KeyReg2_1)){
		if (KeyReg3_1 != KeyReg2_1){
			KeyReg3_1 = KeyReg2_1;
			if (KeyReg2_1 == PRESSED_STATE){
				subKeyProcess1();
			}
		}
	}
}

void getKeyInput2(){
	KeyReg0_2 = KeyReg1_2;
	KeyReg1_2 = KeyReg2_2;
	KeyReg2_2 = HAL_GPIO_ReadPin(BUTTON2_GPIO_Port, BUTTON2_Pin);
	if ((KeyReg0_2 == KeyReg1_2) && (KeyReg1_2 == KeyReg2_2)){
		if (KeyReg3_2 != KeyReg2_2){
			KeyReg3_2 = KeyReg2_2;
			if (KeyReg2_2 == PRESSED_STATE){
				subKeyProcess2();
			}
		}
	}
}

void getKeyInput3(){
	KeyReg0_3 = KeyReg1_3;
	KeyReg1_3 = KeyReg2_3;
	KeyReg2_3 = HAL_GPIO_ReadPin(BUTTON3_GPIO_Port, BUTTON3_Pin);
	if ((KeyReg0_3 == KeyReg1_3) && (KeyReg1_3 == KeyReg2_3)){
		if (KeyReg3_3 != KeyReg2_3){
			KeyReg3_3 = KeyReg2_3;
			if (KeyReg2_3 == PRESSED_STATE){
				subKeyProcess3();
			}
		}
	}
}
