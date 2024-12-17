/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */
//	void exercise1(){
//		int count = 0;
//		int count2 = 0;
//		int led_status_red = 1;
//		int led_status_yellow = 0;
//		while(1){
//			if (count < 2){
//				count++;
//				HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, led_status_red);
//			}
//			else{
//				count = 0;
//				led_status_red = 1 - led_status_red;
//			}
//			if (count2 < 2){
//				count2++;
//				HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, led_status_yellow);
//			}
//			else{
//				count2 = 0;
//				led_status_yellow = 1 - led_status_yellow;
//			}
//			HAL_Delay(1000);
//		}
//	}
//	void exercise2(){
//		int count = 0;
//		int led_on = 0;
//		int led_off = 1;
//		while(1){
//			if (count < 5){
//				HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, led_on);
//				HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, led_off);
//				HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, led_off);
//				count++;
//			}
//			else if (count >= 5 && count < 7){
//				HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, led_off);
//				HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, led_on);
//				HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, led_off);
//				count++;
//			}
//			else if (count >= 7 && count < 10){
//				HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, led_off);
//				HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, led_off);
//				HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, led_on);
//				count ++;
//			}
//			else{
//				count = 0;
//				HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, led_on);
//				HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, led_off);
//				HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, led_off);
//			}
//			HAL_Delay(1000);
//		}
//	}
//	void exercise3(){
//		int led_on = 0;
//		int led_off = 1;
//		int count1 = 0;
//		while (1){
//			if (count1 < 5){
//				count1++;
//				HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, led_on);
//				HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, led_off);
//				HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, led_off);
//
//				HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, led_off);
//				HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin, led_off);
//				HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, led_on);
//			}
//			else if (count1 >= 5 && count1 < 7){
//				count1++;
//				HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, led_on);
//
//				HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, led_off);
//				HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin, led_on);
//			}
//			else if (count1 >= 7 && count1 < 12){
//				count1++;
//				HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, led_off);
//				HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, led_on);
//
//				HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin, led_off);
//				HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, led_on);
//			}
//			else if (count1 >= 12 && count1 < 14){
//				count1++;
//				HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, led_off);
//				HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, led_on);
//
//				HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, led_off);
//				HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, led_on);
//			}
//
//			else if (count1 >= 14) {
//				count1 = 0;
//				HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, led_off);
//				HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, led_on);
//
//				HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, led_off);
//				HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, led_on);
//			}
//			HAL_Delay(1000);
//		}
//	}
//void display7SEG(int counter) {
//    const int led_on = 0;
//    const int led_off = 1;
//    // Tắt tất cả các LED trước khi hiển thị
//    HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, led_off);
//    HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, led_off);
//    HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, led_off);
//    HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, led_off);
//    HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, led_off);
//    HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, led_off);
//    HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, led_off);
//
//    // Bật các LED theo giá trị của counter
//    switch (counter) {
//        case 0:
//            HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, led_on);
//            HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, led_on);
//            HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, led_on);
//            HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, led_on);
//            HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, led_on);
//            HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, led_on);
//            HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, led_off);
//            break;
//        case 1:
//            HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, led_on);
//            HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, led_on);
//            break;
//        case 2:
//            HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, led_on);
//            HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, led_on);
//            HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, led_on);
//            HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, led_on);
//            HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, led_on);
//            break;
//        case 3:
//            HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, led_on);
//            HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, led_on);
//            HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, led_on);
//            HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, led_on);
//            HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, led_on);
//            break;
//        case 4:
//            HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, led_on);
//            HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, led_on);
//            HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, led_on);
//            HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, led_on);
//            break;
//        case 5:
//            HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, led_on);
//            HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, led_on);
//            HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, led_on);
//            HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, led_on);
//            HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, led_on);
//            break;
//        case 6:
//            HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, led_on);
//            HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, led_on);
//            HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, led_on);
//            HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, led_on);
//            HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, led_on);
//            HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, led_on);
//            break;
//        case 7:
//            HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, led_on);
//            HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, led_on);
//            HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, led_on);
//            break;
//        case 8:
//            HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, led_on);
//            HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, led_on);
//            HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, led_on);
//            HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, led_on);
//            HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, led_on);
//            HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, led_on);
//            HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, led_on);
//            break;
//        case 9:
//            HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, led_on);
//            HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, led_on);
//            HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, led_on);
//            HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, led_on);
//            HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, led_on);
//            HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, led_on);
//            break;
//        default:
//            break;
//    }
//}

//void exercise4() {
//    int counter = 0;
//    while (1) {
//        if (counter >= 10) counter = 0;
//        display7SEG(counter++);
//        HAL_Delay(1000);
//    }
//}
//void display7SEG(int counter) {
//    const int led_on = 0;
//    const int led_off = 1;
//    // Tắt tất cả các LED trước khi hiển thị
//    HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, led_off);
//    HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, led_off);
//    HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, led_off);
//    HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, led_off);
//    HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, led_off);
//    HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, led_off);
//    HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, led_off);
//
//    // Bật các LED theo giá trị của counter
//    switch (counter) {
//        case 0:
//            HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, led_on);
//            HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, led_on);
//            HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, led_on);
//            HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, led_on);
//            HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, led_on);
//            HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, led_on);
//            HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, led_off);
//            break;
//        case 1:
//            HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, led_on);
//            HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, led_on);
//            break;
//        case 2:
//            HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, led_on);
//            HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, led_on);
//            HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, led_on);
//            HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, led_on);
//            HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, led_on);
//            break;
//        case 3:
//            HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, led_on);
//            HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, led_on);
//            HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, led_on);
//            HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, led_on);
//            HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, led_on);
//            break;
//        case 4:
//            HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, led_on);
//            HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, led_on);
//            HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, led_on);
//            HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, led_on);
//            break;
//        case 5:
//            HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, led_on);
//            HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, led_on);
//            HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, led_on);
//            HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, led_on);
//            HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, led_on);
//            break;
//        case 6:
//            HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, led_on);
//            HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, led_on);
//            HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, led_on);
//            HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, led_on);
//            HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, led_on);
//            HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, led_on);
//            break;
//        case 7:
//            HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, led_on);
//            HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, led_on);
//            HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, led_on);
//            break;
//        case 8:
//            HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, led_on);
//            HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, led_on);
//            HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, led_on);
//            HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, led_on);
//            HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, led_on);
//            HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, led_on);
//            HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, led_on);
//            break;
//        case 9:
//            HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, led_on);
//            HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, led_on);
//            HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, led_on);
//            HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, led_on);
//            HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, led_on);
//            HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, led_on);
//            break;
//        default:
//            break;
//    }
//}

void display7SEG1(int counter) {
    const int led_on = 0;
    const int led_off = 1;
    // Tắt tất cả các LED trước khi hiển thị
    HAL_GPIO_WritePin(LED1_1_GPIO_Port, LED1_1_Pin, led_off);
    HAL_GPIO_WritePin(LED1_2_GPIO_Port, LED1_2_Pin, led_off);
    HAL_GPIO_WritePin(LED1_3_GPIO_Port, LED1_3_Pin, led_off);
    HAL_GPIO_WritePin(LED1_4_GPIO_Port, LED1_4_Pin, led_off);
    HAL_GPIO_WritePin(LED1_5_GPIO_Port, LED1_5_Pin, led_off);
    HAL_GPIO_WritePin(LED1_6_GPIO_Port, LED1_6_Pin, led_off);
    HAL_GPIO_WritePin(LED1_7_GPIO_Port, LED1_7_Pin, led_off);

    // Bật các LED theo giá trị của counter
    switch (counter) {
        case 0:
            HAL_GPIO_WritePin(LED1_1_GPIO_Port, LED1_1_Pin, led_on);
            HAL_GPIO_WritePin(LED1_2_GPIO_Port, LED1_2_Pin, led_on);
            HAL_GPIO_WritePin(LED1_3_GPIO_Port, LED1_3_Pin, led_on);
            HAL_GPIO_WritePin(LED1_4_GPIO_Port, LED1_4_Pin, led_on);
            HAL_GPIO_WritePin(LED1_5_GPIO_Port, LED1_5_Pin, led_on);
            HAL_GPIO_WritePin(LED1_6_GPIO_Port, LED1_6_Pin, led_on);
            HAL_GPIO_WritePin(LED1_7_GPIO_Port, LED1_7_Pin, led_off);
            break;
        case 1:
            HAL_GPIO_WritePin(LED1_2_GPIO_Port, LED1_2_Pin, led_on);
            HAL_GPIO_WritePin(LED1_3_GPIO_Port, LED1_3_Pin, led_on);
            break;
        case 2:
            HAL_GPIO_WritePin(LED1_1_GPIO_Port, LED1_1_Pin, led_on);
            HAL_GPIO_WritePin(LED1_2_GPIO_Port, LED1_2_Pin, led_on);
            HAL_GPIO_WritePin(LED1_4_GPIO_Port, LED1_4_Pin, led_on);
            HAL_GPIO_WritePin(LED1_5_GPIO_Port, LED1_5_Pin, led_on);
            HAL_GPIO_WritePin(LED1_7_GPIO_Port, LED1_7_Pin, led_on);
            break;
        case 3:
            HAL_GPIO_WritePin(LED1_1_GPIO_Port, LED1_1_Pin, led_on);
            HAL_GPIO_WritePin(LED1_2_GPIO_Port, LED1_2_Pin, led_on);
            HAL_GPIO_WritePin(LED1_3_GPIO_Port, LED1_3_Pin, led_on);
            HAL_GPIO_WritePin(LED1_4_GPIO_Port, LED1_4_Pin, led_on);
            HAL_GPIO_WritePin(LED1_7_GPIO_Port, LED1_7_Pin, led_on);
            break;
        case 4:
            HAL_GPIO_WritePin(LED1_2_GPIO_Port, LED1_2_Pin, led_on);
            HAL_GPIO_WritePin(LED1_3_GPIO_Port, LED1_3_Pin, led_on);
            HAL_GPIO_WritePin(LED1_6_GPIO_Port, LED1_6_Pin, led_on);
            HAL_GPIO_WritePin(LED1_7_GPIO_Port, LED1_7_Pin, led_on);
            break;
        case 5:
            HAL_GPIO_WritePin(LED1_1_GPIO_Port, LED1_1_Pin, led_on);
            HAL_GPIO_WritePin(LED1_3_GPIO_Port, LED1_3_Pin, led_on);
            HAL_GPIO_WritePin(LED1_4_GPIO_Port, LED1_4_Pin, led_on);
            HAL_GPIO_WritePin(LED1_6_GPIO_Port, LED1_6_Pin, led_on);
            HAL_GPIO_WritePin(LED1_7_GPIO_Port, LED1_7_Pin, led_on);
            break;
        case 6:
            HAL_GPIO_WritePin(LED1_1_GPIO_Port, LED1_1_Pin, led_on);
            HAL_GPIO_WritePin(LED1_3_GPIO_Port, LED1_3_Pin, led_on);
            HAL_GPIO_WritePin(LED1_4_GPIO_Port, LED1_4_Pin, led_on);
            HAL_GPIO_WritePin(LED1_5_GPIO_Port, LED1_5_Pin, led_on);
            HAL_GPIO_WritePin(LED1_6_GPIO_Port, LED1_6_Pin, led_on);
            HAL_GPIO_WritePin(LED1_7_GPIO_Port, LED1_7_Pin, led_on);
            break;
        case 7:
            HAL_GPIO_WritePin(LED1_1_GPIO_Port, LED1_1_Pin, led_on);
            HAL_GPIO_WritePin(LED1_2_GPIO_Port, LED1_2_Pin, led_on);
            HAL_GPIO_WritePin(LED1_3_GPIO_Port, LED1_3_Pin, led_on);
            break;
        case 8:
            HAL_GPIO_WritePin(LED1_1_GPIO_Port, LED1_1_Pin, led_on);
            HAL_GPIO_WritePin(LED1_2_GPIO_Port, LED1_2_Pin, led_on);
            HAL_GPIO_WritePin(LED1_3_GPIO_Port, LED1_3_Pin, led_on);
            HAL_GPIO_WritePin(LED1_4_GPIO_Port, LED1_4_Pin, led_on);
            HAL_GPIO_WritePin(LED1_5_GPIO_Port, LED1_5_Pin, led_on);
            HAL_GPIO_WritePin(LED1_6_GPIO_Port, LED1_6_Pin, led_on);
            HAL_GPIO_WritePin(LED1_7_GPIO_Port, LED1_7_Pin, led_on);
            break;
        case 9:
            HAL_GPIO_WritePin(LED1_1_GPIO_Port, LED1_1_Pin, led_on);
            HAL_GPIO_WritePin(LED1_2_GPIO_Port, LED1_2_Pin, led_on);
            HAL_GPIO_WritePin(LED1_3_GPIO_Port, LED1_3_Pin, led_on);
            HAL_GPIO_WritePin(LED1_4_GPIO_Port, LED1_4_Pin, led_on);
            HAL_GPIO_WritePin(LED1_6_GPIO_Port, LED1_6_Pin, led_on);
            HAL_GPIO_WritePin(LED1_7_GPIO_Port, LED1_7_Pin, led_on);
            break;
        default:
            break;
    }
}
void display7SEG2(int counter) {
    const int led_on = 0;
    const int led_off = 1;
    // Tắt tất cả các LED trước khi hiển thị
    HAL_GPIO_WritePin(LED2_1_GPIO_Port, LED2_1_Pin, led_off);
    HAL_GPIO_WritePin(LED2_2_GPIO_Port, LED2_2_Pin, led_off);
    HAL_GPIO_WritePin(LED2_3_GPIO_Port, LED2_3_Pin, led_off);
    HAL_GPIO_WritePin(LED2_4_GPIO_Port, LED2_4_Pin, led_off);
    HAL_GPIO_WritePin(LED2_5_GPIO_Port, LED2_5_Pin, led_off);
    HAL_GPIO_WritePin(LED2_6_GPIO_Port, LED2_6_Pin, led_off);
    HAL_GPIO_WritePin(LED2_7_GPIO_Port, LED2_7_Pin, led_off);

    // Bật các LED theo giá trị của counter
    switch (counter) {
        case 0:
            HAL_GPIO_WritePin(LED2_1_GPIO_Port, LED2_1_Pin, led_on);
            HAL_GPIO_WritePin(LED2_2_GPIO_Port, LED2_2_Pin, led_on);
            HAL_GPIO_WritePin(LED2_3_GPIO_Port, LED2_3_Pin, led_on);
            HAL_GPIO_WritePin(LED2_4_GPIO_Port, LED2_4_Pin, led_on);
            HAL_GPIO_WritePin(LED2_5_GPIO_Port, LED2_5_Pin, led_on);
            HAL_GPIO_WritePin(LED2_6_GPIO_Port, LED2_6_Pin, led_on);
            HAL_GPIO_WritePin(LED2_7_GPIO_Port, LED2_7_Pin, led_off);
            break;
        case 1:
            HAL_GPIO_WritePin(LED2_2_GPIO_Port, LED2_2_Pin, led_on);
            HAL_GPIO_WritePin(LED2_3_GPIO_Port, LED2_3_Pin, led_on);
            break;
        case 2:
            HAL_GPIO_WritePin(LED2_1_GPIO_Port, LED2_1_Pin, led_on);
            HAL_GPIO_WritePin(LED2_2_GPIO_Port, LED2_2_Pin, led_on);
            HAL_GPIO_WritePin(LED2_4_GPIO_Port, LED2_4_Pin, led_on);
            HAL_GPIO_WritePin(LED2_5_GPIO_Port, LED2_5_Pin, led_on);
            HAL_GPIO_WritePin(LED2_7_GPIO_Port, LED2_7_Pin, led_on);
            break;
        case 3:
            HAL_GPIO_WritePin(LED2_1_GPIO_Port, LED2_1_Pin, led_on);
            HAL_GPIO_WritePin(LED2_2_GPIO_Port, LED2_2_Pin, led_on);
            HAL_GPIO_WritePin(LED2_3_GPIO_Port, LED2_3_Pin, led_on);
            HAL_GPIO_WritePin(LED2_4_GPIO_Port, LED2_4_Pin, led_on);
            HAL_GPIO_WritePin(LED2_7_GPIO_Port, LED2_7_Pin, led_on);
            break;
        case 4:
            HAL_GPIO_WritePin(LED2_2_GPIO_Port, LED2_2_Pin, led_on);
            HAL_GPIO_WritePin(LED2_3_GPIO_Port, LED2_3_Pin, led_on);
            HAL_GPIO_WritePin(LED2_6_GPIO_Port, LED2_6_Pin, led_on);
            HAL_GPIO_WritePin(LED2_7_GPIO_Port, LED2_7_Pin, led_on);
            break;
        case 5:
            HAL_GPIO_WritePin(LED2_1_GPIO_Port, LED2_1_Pin, led_on);
            HAL_GPIO_WritePin(LED2_3_GPIO_Port, LED2_3_Pin, led_on);
            HAL_GPIO_WritePin(LED2_4_GPIO_Port, LED2_4_Pin, led_on);
            HAL_GPIO_WritePin(LED2_6_GPIO_Port, LED2_6_Pin, led_on);
            HAL_GPIO_WritePin(LED2_7_GPIO_Port, LED2_7_Pin, led_on);
            break;
        case 6:
            HAL_GPIO_WritePin(LED2_1_GPIO_Port, LED2_1_Pin, led_on);
            HAL_GPIO_WritePin(LED2_3_GPIO_Port, LED2_3_Pin, led_on);
            HAL_GPIO_WritePin(LED2_4_GPIO_Port, LED2_4_Pin, led_on);
            HAL_GPIO_WritePin(LED2_5_GPIO_Port, LED2_5_Pin, led_on);
            HAL_GPIO_WritePin(LED2_6_GPIO_Port, LED2_6_Pin, led_on);
            HAL_GPIO_WritePin(LED2_7_GPIO_Port, LED2_7_Pin, led_on);
            break;
        case 7:
            HAL_GPIO_WritePin(LED2_1_GPIO_Port, LED2_1_Pin, led_on);
            HAL_GPIO_WritePin(LED2_2_GPIO_Port, LED2_2_Pin, led_on);
            HAL_GPIO_WritePin(LED2_3_GPIO_Port, LED2_3_Pin, led_on);
            break;
        case 8:
            HAL_GPIO_WritePin(LED2_1_GPIO_Port, LED2_1_Pin, led_on);
            HAL_GPIO_WritePin(LED2_2_GPIO_Port, LED2_2_Pin, led_on);
            HAL_GPIO_WritePin(LED2_3_GPIO_Port, LED2_3_Pin, led_on);
            HAL_GPIO_WritePin(LED2_4_GPIO_Port, LED2_4_Pin, led_on);
            HAL_GPIO_WritePin(LED2_5_GPIO_Port, LED2_5_Pin, led_on);
            HAL_GPIO_WritePin(LED2_6_GPIO_Port, LED2_6_Pin, led_on);
            HAL_GPIO_WritePin(LED2_7_GPIO_Port, LED2_7_Pin, led_on);
            break;
        case 9:
            HAL_GPIO_WritePin(LED2_1_GPIO_Port, LED2_1_Pin, led_on);
            HAL_GPIO_WritePin(LED2_2_GPIO_Port, LED2_2_Pin, led_on);
            HAL_GPIO_WritePin(LED2_3_GPIO_Port, LED2_3_Pin, led_on);
            HAL_GPIO_WritePin(LED2_4_GPIO_Port, LED2_4_Pin, led_on);
            HAL_GPIO_WritePin(LED2_6_GPIO_Port, LED2_6_Pin, led_on);
            HAL_GPIO_WritePin(LED2_7_GPIO_Port, LED2_7_Pin, led_on);
            break;
        default:
            break;
    }
}

void exercise5() {
	int led_on = 0;
	int led_off = 1;
	int count1 = 0;
	int count2 = 7;
	int count3 = 5;
	while (1){
		if (count1 < 5){
			display7SEG1(count2);
			count2--;
			count1++;
			HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, led_on);
			HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, led_off);
			HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, led_off);

			display7SEG2(count3);
			count3--;
			HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, led_off);
			HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin, led_off);
			HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, led_on);
		}
		else if (count1 >= 5 && count1 < 7){
			if (count1 == 5){
				count3 = 2;
			}
			display7SEG1(count2);
			count2--;
			count1++;
			HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, led_on);

			display7SEG2(count3);
			count3--;
			HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, led_off);
			HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin, led_on);
		}
		else if (count1 >= 7 && count1 < 12){
			if (count1 == 7){
				count2 = 5;
				count3 = 7;
			}
			display7SEG1(count2);
			count2--;
			count1++;
			HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, led_off);
			HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, led_on);

			display7SEG2(count3);
			count3--;
			HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin, led_off);
			HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, led_on);
		}
		else if (count1 >= 12 && count1 < 14){
			if (count1 == 12){
				count2 = 2;
			}
			display7SEG1(count2);
			count2--;
			count1++;
			HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, led_off);
			HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, led_on);

			display7SEG2(count3);
			count3--;
			HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, led_off);
			HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, led_on);
		}

		else if (count1 >= 14) {
			if (count1 == 14){
				count2 = 7;
				count3 = 5;
			}
			display7SEG1(count2);
			count2--;
			count1 = 0;
			HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, led_off);
			HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, led_on);

			display7SEG2(count3);
			count3--;
			HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, led_off);
			HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, led_on);
		}
		HAL_Delay(1000);
	}
}
void exercise6() {
    for (int i = 0; i < 12; i++) {
        HAL_GPIO_WritePin(GPIOA, (1 << i), GPIO_PIN_SET);
    }

    while (1) {
        for (int i = 0; i < 12; i++) {
            HAL_GPIO_WritePin(GPIOA, (1 << i), GPIO_PIN_RESET);
            HAL_Delay(500);
        }
    }
}

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{

  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  /* USER CODE BEGIN 2 */

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */

//  exercise1();
//  exercise2();
//  exercise3();
//  exercise4();
  exercise5();
//  exercise6();
//  while (1)
//  {
//
    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
//  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }

  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};
/* USER CODE BEGIN MX_GPIO_Init_1 */
/* USER CODE END MX_GPIO_Init_1 */

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, LED_RED_1_Pin|LED_YELLOW_1_Pin|LED_GREEN_1_Pin|LED_RED_2_Pin
                          |LED_YELLOW_2_Pin|LED_GREEN_2_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, LED1_1_Pin|LED1_2_Pin|LED2_3_Pin|LED2_4_Pin
                          |LED2_5_Pin|LED2_6_Pin|LED2_7_Pin|LED1_3_Pin
                          |LED1_4_Pin|LED1_5_Pin|LED1_6_Pin|LED1_7_Pin
                          |LED2_1_Pin|LED2_2_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : LED_RED_1_Pin LED_YELLOW_1_Pin LED_GREEN_1_Pin LED_RED_2_Pin
                           LED_YELLOW_2_Pin LED_GREEN_2_Pin */
  GPIO_InitStruct.Pin = LED_RED_1_Pin|LED_YELLOW_1_Pin|LED_GREEN_1_Pin|LED_RED_2_Pin
                          |LED_YELLOW_2_Pin|LED_GREEN_2_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : LED1_1_Pin LED1_2_Pin LED2_3_Pin LED2_4_Pin
                           LED2_5_Pin LED2_6_Pin LED2_7_Pin LED1_3_Pin
                           LED1_4_Pin LED1_5_Pin LED1_6_Pin LED1_7_Pin
                           LED2_1_Pin LED2_2_Pin */
  GPIO_InitStruct.Pin = LED1_1_Pin|LED1_2_Pin|LED2_3_Pin|LED2_4_Pin
                          |LED2_5_Pin|LED2_6_Pin|LED2_7_Pin|LED1_3_Pin
                          |LED1_4_Pin|LED1_5_Pin|LED1_6_Pin|LED1_7_Pin
                          |LED2_1_Pin|LED2_2_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

/* USER CODE BEGIN MX_GPIO_Init_2 */
/* USER CODE END MX_GPIO_Init_2 */
}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */
