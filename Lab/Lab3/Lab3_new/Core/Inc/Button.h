/*
 * Button.h
 *
 *  Created on: Nov 1, 2024
 *      Author: tangu
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "main.h"

#define NORMAL_STATE GPIO_PIN_SET
#define PRESSED_STATE GPIO_PIN_RESET

int isButton1Pressed();
int isButton2Pressed();
int isButton3Pressed();

//extern int button_flag1;

void getKeyInput1();
void getKeyInput2();
void getKeyInput3();
#endif /* INC_BUTTON_H_ */
