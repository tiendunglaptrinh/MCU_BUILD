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
#include "software_timer.h"
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
TIM_HandleTypeDef htim2;

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
static void MX_TIM2_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */


/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{

  /* USER CODE BEGIN 1 */
	void display7SEG(int num) {
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
  MX_TIM2_Init();
  /* USER CODE BEGIN 2 */
  HAL_TIM_Base_Start_IT(&htim2);
  /* USER CODE END 2 */
  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  const int MAX_LED = 4;
  int index_led = 0;
  int led_buffer[4] = {1, 2, 3, 4};
  int hour = 15, minute = 8, second = 55;
  int clock_buffer[4] = {1, 5, 0, 8};
  int SEG1_status = 0;
  int SEG2_status = 1;
  int SEG3_status = 1;
  int SEG4_status = 1;
  int DOT_status = 0;
  void update7SEG(int index){
  	switch(index){
  		case 0:
  			display7SEG(led_buffer[0]);
  			break;
  		case 1:
  			display7SEG(led_buffer[1]);
  			break;
  		case 2:
  			display7SEG(led_buffer[2]);
  			break;
  		case 3:
  			display7SEG(led_buffer[3]);
  			break;
  		default:
  			break;
  	}
  }
  void updateClockBuffer(int index){
    	switch(index){
    		case 0:
    			display7SEG(clock_buffer[0]);
    			break;
    		case 1:
    			display7SEG(clock_buffer[1]);
    			break;
    		case 2:
    			display7SEG(clock_buffer[2]);
    			break;
    		case 3:
    			display7SEG(clock_buffer[3]);
    			break;
    		default:
    			break;
    	}
    }
  void exercise12(){
	HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SEG1_status);
	HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SEG2_status);
	HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SEG3_status);
	HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SEG4_status);

	if (SEG1_status == 0){
		display7SEG(1);
		SEG1_status = 1 - SEG1_status;
		SEG2_status = 1 - SEG2_status;
	}
	else if (SEG2_status == 0){
		display7SEG(2);
		SEG2_status = 1 - SEG2_status;
		SEG3_status = 1 - SEG3_status;
	}
	else if (SEG3_status == 0){
		display7SEG(3);
		SEG3_status = 1 - SEG3_status;
		SEG4_status = 1 - SEG4_status;
	}
	else if (SEG4_status == 0){
		display7SEG(0);
		SEG1_status = 1 - SEG1_status;
		SEG4_status = 1 - SEG4_status;
	}

	updateClockBuffer(index_led);
  index_led = (index_led + 1)%MAX_LED;
}
  void exercise3(){
	  update7SEG(index_led);
	  index_led = (index_led + 1)%MAX_LED;
  }
  void Blinky_DOT(){
	  HAL_GPIO_TogglePin(DOT_GPIO_Port, DOT_Pin);
  }
  void HelpUpdateClockBuffer(){
	  clock_buffer[0] = hour/10;
	  clock_buffer[1] = hour%10;
	  clock_buffer[2] = minute/10;
	  clock_buffer[3] = minute%10;
  }
  void exercise5(){
	  second++;
	  if (second >= 60){
		  second = 0;
		  minute++;
	  }
	  if (minute >= 60){
		  minute = 0;
		  hour++;
	  }
	  if (hour >= 24){
		  hour = 0;
	  }
	  HelpUpdateClockBuffer();
  }
  setTimer1(25);
  setTimer2(100);
  setTimer3(100);
  while (1)
  {
	  if (timer1_flag == 1){
		  setTimer1(25);
//		  TODO
		  exercise12();

	  }
	  if (timer2_flag == 1){
		  setTimer2(100);
//		  TODO
		  Blinky_DOT();
	  }

	  if (timer3_flag == 1){
		  setTimer3(100);
//		  TODO
		  exercise5();
	  }
    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
  }
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
  * @brief TIM2 Initialization Function
  * @param None
  * @retval None
  */
static void MX_TIM2_Init(void)
{

  /* USER CODE BEGIN TIM2_Init 0 */

  /* USER CODE END TIM2_Init 0 */

  TIM_ClockConfigTypeDef sClockSourceConfig = {0};
  TIM_MasterConfigTypeDef sMasterConfig = {0};

  /* USER CODE BEGIN TIM2_Init 1 */

  /* USER CODE END TIM2_Init 1 */
  htim2.Instance = TIM2;
  htim2.Init.Prescaler = 7999;
  htim2.Init.CounterMode = TIM_COUNTERMODE_UP;
  htim2.Init.Period = 9;
  htim2.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
  htim2.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_DISABLE;
  if (HAL_TIM_Base_Init(&htim2) != HAL_OK)
  {
    Error_Handler();
  }
  sClockSourceConfig.ClockSource = TIM_CLOCKSOURCE_INTERNAL;
  if (HAL_TIM_ConfigClockSource(&htim2, &sClockSourceConfig) != HAL_OK)
  {
    Error_Handler();
  }
  sMasterConfig.MasterOutputTrigger = TIM_TRGO_RESET;
  sMasterConfig.MasterSlaveMode = TIM_MASTERSLAVEMODE_DISABLE;
  if (HAL_TIMEx_MasterConfigSynchronization(&htim2, &sMasterConfig) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN TIM2_Init 2 */

  /* USER CODE END TIM2_Init 2 */

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
  HAL_GPIO_WritePin(GPIOA, DOT_Pin|LED_RED_Pin|EN0_Pin|EN1_Pin
                          |EN2_Pin|EN3_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, SEG0_Pin|SEG1_Pin|SEG2_Pin|SEG3_Pin
                          |SEG4_Pin|SEG5_Pin|SEG6_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : DOT_Pin LED_RED_Pin EN0_Pin EN1_Pin
                           EN2_Pin EN3_Pin */
  GPIO_InitStruct.Pin = DOT_Pin|LED_RED_Pin|EN0_Pin|EN1_Pin
                          |EN2_Pin|EN3_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : SEG0_Pin SEG1_Pin SEG2_Pin SEG3_Pin
                           SEG4_Pin SEG5_Pin SEG6_Pin */
  GPIO_InitStruct.Pin = SEG0_Pin|SEG1_Pin|SEG2_Pin|SEG3_Pin
                          |SEG4_Pin|SEG5_Pin|SEG6_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

  /*Configure GPIO pin : PB9 */
  GPIO_InitStruct.Pin = GPIO_PIN_9;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

/* USER CODE BEGIN MX_GPIO_Init_2 */
/* USER CODE END MX_GPIO_Init_2 */
}

/* USER CODE BEGIN 4 */


void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim){
//	exercise12();
//	update7SEG(index_led++);'
	timerRun();
}

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
