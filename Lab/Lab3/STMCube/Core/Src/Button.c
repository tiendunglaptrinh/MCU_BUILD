/*
 * Button.c
 *
 *  Created on: Nov 1, 2024
 *      Author: tangu
 */

#include "Button.h"

int button_flag1 = 0;


// Chống rung 3 lần
int KeyReg0 = NORMAL_STATE;
int KeyReg1 = NORMAL_STATE;
int KeyReg2 = NORMAL_STATE;

int KeyReg3 = NORMAL_STATE;
int TimerForKeyPress = 200;

void subKeyProcess(){
//	TODO
	button_flag1 = 1;
}

void getKeyInput(){
	KeyReg0 = KeyReg1;
	KeyReg1 = KeyReg2;
	KeyReg2 = HAL_GPIO_ReadPin(BUTTON1_GPIO_Port, BUTTON1_Pin);
	if ((KeyReg0 == KeyReg1) && (KeyReg1 == KeyReg2)){
		if (KeyReg3 != KeyReg2){
			KeyReg3 = KeyReg2;
			if (KeyReg2 == PRESSED_STATE){
				subKeyProcess();
				TimerForKeyPress = 200;
			}
		}
		else{
			TimerForKeyPress--;
			if (TimerForKeyPress == 0){
				if (KeyReg2 == PRESSED_STATE){subKeyProcess();}
				TimerForKeyPress = 200;
			}
		}
	}
}
