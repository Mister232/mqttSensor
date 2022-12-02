/**
  *******************************************************************************
  * @file           : utils.c
  * @brief          : This file contains common functions to be used in other files
  ********************************************************************************
*/

#include "main.h"
#include "uart_com.h"
#include "esp8266.h"
#include <mqttclient.h>
#include <net_conf.h>

// Function to switch off nRF24L01+ module and set system to sleep
void goToSleep(void)
{
//	GPIO_InitTypeDef GPIO_InitStruct = {0};

	// Switch off nRF24L01+ module
	//RFoff();

	// Turn all GPIO to analog inputs, except window contact and voltage monitoring
//	GPIO_InitStruct.Pin = GPIO_PIN_2|GPIO_PIN_3|GPIO_PIN_4|GPIO_PIN_9|GPIO_PIN_10;
//	GPIO_InitStruct.Mode = GPIO_MODE_ANALOG;
//	GPIO_InitStruct.Pull = GPIO_NOPULL;
//	HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);
//
//	GPIO_InitStruct.Pin = GPIO_PIN_1;
//	GPIO_InitStruct.Mode = GPIO_MODE_ANALOG;
//	GPIO_InitStruct.Pull = GPIO_NOPULL;
//	HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

	// Disable system tick
	HAL_SuspendTick();

	// Send system to sleep
	HAL_PWR_EnterSTOPMode(PWR_LOWPOWERREGULATOR_ON, PWR_STOPENTRY_WFI);
}


// Function which is executed after wakeup from sleep. Starts nRF24L01+ module again and initializes it
void wakeUp(void)
{



//	RFon();
//
//	// Wait some time for nRF24 module to start up
//	wait();
//
//	// Set chip-select high -> not selected
//	nRF24_CSN_H();
//
//	// Set CE low -> RX/TX disabled
//	nRF24_CE_L();
//
//	// Initialize the nRF24L01+ module and configure it as receiver
//	nRF24_Init();
//
//	wait();

}
