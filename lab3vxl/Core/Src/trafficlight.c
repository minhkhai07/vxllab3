/*
 * trafficlight.c
 *
 *  Created on: Oct 21, 2024
 *      Author: Admin
 */
#include "trafficlight.h"
// 0(Đ)-1(V)-2(X) NB
// 3(Đ)-4(V)-6(X) ĐT

void redgreen_state(void){
	HAL_GPIO_WritePin (GPIOA, GPIO_PIN_0, GPIO_PIN_RESET);
	HAL_GPIO_WritePin (GPIOA, GPIO_PIN_1, GPIO_PIN_SET);
	HAL_GPIO_WritePin (GPIOA, GPIO_PIN_2, GPIO_PIN_SET);
	HAL_GPIO_WritePin (GPIOA, GPIO_PIN_3, GPIO_PIN_SET);
	HAL_GPIO_WritePin (GPIOA, GPIO_PIN_4, GPIO_PIN_SET);
	HAL_GPIO_WritePin (GPIOA, GPIO_PIN_6, GPIO_PIN_RESET);
}
void redyellow_state(void){
	HAL_GPIO_WritePin (GPIOA, GPIO_PIN_0, GPIO_PIN_RESET);
	HAL_GPIO_WritePin (GPIOA, GPIO_PIN_1, GPIO_PIN_SET);
	HAL_GPIO_WritePin (GPIOA, GPIO_PIN_2, GPIO_PIN_SET);
	HAL_GPIO_WritePin (GPIOA, GPIO_PIN_3, GPIO_PIN_SET);
	HAL_GPIO_WritePin (GPIOA, GPIO_PIN_4, GPIO_PIN_RESET);
	HAL_GPIO_WritePin (GPIOA, GPIO_PIN_6, GPIO_PIN_SET);
}
void greenred_state(void){
	HAL_GPIO_WritePin (GPIOA, GPIO_PIN_0, GPIO_PIN_SET);
	HAL_GPIO_WritePin (GPIOA, GPIO_PIN_1, GPIO_PIN_SET);
	HAL_GPIO_WritePin (GPIOA, GPIO_PIN_2, GPIO_PIN_RESET);
	HAL_GPIO_WritePin (GPIOA, GPIO_PIN_3, GPIO_PIN_RESET);
	HAL_GPIO_WritePin (GPIOA, GPIO_PIN_4, GPIO_PIN_SET);
	HAL_GPIO_WritePin (GPIOA, GPIO_PIN_6, GPIO_PIN_SET);
}
void yellowred_state(void){
	HAL_GPIO_WritePin (GPIOA, GPIO_PIN_0, GPIO_PIN_SET);
	HAL_GPIO_WritePin (GPIOA, GPIO_PIN_1, GPIO_PIN_RESET);
	HAL_GPIO_WritePin (GPIOA, GPIO_PIN_2, GPIO_PIN_SET);
	HAL_GPIO_WritePin (GPIOA, GPIO_PIN_3, GPIO_PIN_RESET);
	HAL_GPIO_WritePin (GPIOA, GPIO_PIN_4, GPIO_PIN_SET);
	HAL_GPIO_WritePin (GPIOA, GPIO_PIN_6, GPIO_PIN_SET);
}