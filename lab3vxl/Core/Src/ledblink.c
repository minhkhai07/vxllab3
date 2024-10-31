/*
 * ledblink.c
 *
 *  Created on: Oct 28, 2024
 *      Author: Admin
 */

#include "ledblink.h"
int t_red=1;
int t_yellow=1;
int t_green=1;
void run_ledblink(void){
	setTimer(0,50);
	setTimer(1,50);
	setTimer(2,50);
	setTimer(3,100);
	if(Timer_Flag[3])
	{
		HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_5);
		setTimer(3,100);
	}
	if(Timer_Flag[0] && status==MODE_2)
	{
		HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_0);
		HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_3);
		setTimer(0,50);
	}
	if(Timer_Flag[1] && status==MODE_3)
	{
		HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_1);
		HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_4);
		setTimer(1,50);
	}
	if(Timer_Flag[2] && status==MODE_4)
	{
		HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_3);
		HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_6);
		setTimer(2,50);
	}
}
