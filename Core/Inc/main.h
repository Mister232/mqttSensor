/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
*/


/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H


/* Includes ------------------------------------------------------------------*/
#include "stm32f0xx_hal.h"


// Exported functions prototypes
void Error_Handler(void);


// Defines
#define Button_Pin GPIO_PIN_13
#define Button_GPIO_Port GPIOC
#define Button_EXTI_IRQn EXTI4_15_IRQn
#define USART_TX_Pin GPIO_PIN_2
#define USART_TX_GPIO_Port GPIOA
#define USART_RX_Pin GPIO_PIN_3
#define USART_RX_GPIO_Port GPIOA
#define LED_Pin GPIO_PIN_5
#define LED_GPIO_Port GPIOA
#define WIFI_RST_Pin GPIO_PIN_8
#define WIFI_RST_GPIO_Port GPIOC
#define TMS_Pin GPIO_PIN_13
#define TMS_GPIO_Port GPIOA
#define TCK_Pin GPIO_PIN_14
#define TCK_GPIO_Port GPIOA

#define LED_On() HAL_GPIO_WritePin(LED_GPIO_Port, LED_Pin, GPIO_PIN_SET)
#define LED_Off() HAL_GPIO_WritePin(LED_GPIO_Port, LED_Pin, GPIO_PIN_RESET)

#define WIFI_RST_Enable()    HAL_GPIO_WritePin(WIFI_RST_GPIO_Port,WIFI_RST_Pin,RESET)
#define WIFI_RST_Disable() 	HAL_GPIO_WritePin(WIFI_RST_GPIO_Port, WIFI_RST_Pin, SET)

#define CONNECTION_RETRYS 10
#define DEBUG_MODE 1

#define AP_SSID     (const char*)"SSID"
#define AP_PSWD     (const char*)"PSWD"

#define IpServer       "IP"
#define ServerPort     "PORT"

// Exported variables
extern UART_HandleTypeDef huart1;
extern UART_HandleTypeDef huart2;


#endif /* __MAIN_H */
