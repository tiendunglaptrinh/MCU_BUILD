/*
 * Button.h
 *
 *  Created on: Nov 1, 2024
 *      Author: tangu
 */
#include "main.h"

extern int button_flag1;

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#define NORMAL_STATE GPIO_PIN_SET
#define PRESSED_STATE GPIO_PIN_RESET

void getKeyInput();
#endif /* INC_BUTTON_H_ */
