/*
 * 7seg_display.c
 *
 *  Created on: Oct 21, 2024
 *      Author: Admin
 */
#include "7seg_display.h"
int led_NB;
int led_DT;
int led_Tg;
void display7SEG_NB(int num) {
  uint8_t segmentPattern[] = {
    0b00111111,
    0b00000110,
    0b01011011,
    0b01001111,
    0b01100110,
    0b01101101,
    0b01111101,
    0b00000111,
    0b01111111,
    0b01101111 };
  if (num < 0 || num > 9) {
    num = 0;
  }
  uint8_t pattern = segmentPattern[num];
  	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, (pattern & 0x01) ? GPIO_PIN_RESET : GPIO_PIN_SET); //A
    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, (pattern & 0x02) ? GPIO_PIN_RESET : GPIO_PIN_SET); //B
    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, (pattern & 0x04) ? GPIO_PIN_RESET : GPIO_PIN_SET); //C
    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, (pattern & 0x08) ? GPIO_PIN_RESET : GPIO_PIN_SET); // D
    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, (pattern & 0x10) ? GPIO_PIN_RESET : GPIO_PIN_SET); // E
    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, (pattern & 0x20) ? GPIO_PIN_RESET : GPIO_PIN_SET); // F
    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, (pattern & 0x40) ? GPIO_PIN_RESET : GPIO_PIN_SET); //G
  }
void display7SEG_DT(int num) {
  uint8_t segmentPattern[] = {
    0b00111111,
    0b00000110,
    0b01011011,
    0b01001111,
    0b01100110,
    0b01101101,
    0b01111101,
    0b00000111,
    0b01111111,
    0b01101111 };
  if (num < 0 || num > 9) {
    num = 0;
  }
  uint8_t pattern = segmentPattern[num];
  	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, (pattern & 0x01) ? GPIO_PIN_RESET : GPIO_PIN_SET); //A
    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, (pattern & 0x02) ? GPIO_PIN_RESET : GPIO_PIN_SET); //B
    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, (pattern & 0x04) ? GPIO_PIN_RESET : GPIO_PIN_SET); //C
    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, (pattern & 0x08) ? GPIO_PIN_RESET : GPIO_PIN_SET); // D
    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, (pattern & 0x10) ? GPIO_PIN_RESET : GPIO_PIN_SET); // E
    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, (pattern & 0x20) ? GPIO_PIN_RESET : GPIO_PIN_SET); // F
    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, (pattern & 0x40) ? GPIO_PIN_RESET : GPIO_PIN_SET); //G
  }
void display7SEG_Tg(int num) {
  uint8_t segmentPattern[] = {
    0b00111111,
    0b00000110,
    0b01011011,
    0b01001111,
    0b01100110,
    0b01101101,
    0b01111101,
    0b00000111,
    0b01111111,
    0b01101111 };
  if (num < 0 || num > 9) {
    num = 0;
  }
  uint8_t pattern = segmentPattern[num];
  	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, (pattern & 0x01) ? GPIO_PIN_RESET : GPIO_PIN_SET); //A
    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, (pattern & 0x02) ? GPIO_PIN_RESET : GPIO_PIN_SET); //B
    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, (pattern & 0x04) ? GPIO_PIN_RESET : GPIO_PIN_SET); //C
    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, (pattern & 0x08) ? GPIO_PIN_RESET : GPIO_PIN_SET); // D
    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_13, (pattern & 0x10) ? GPIO_PIN_RESET : GPIO_PIN_SET); // E
    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_14, (pattern & 0x20) ? GPIO_PIN_RESET : GPIO_PIN_SET); // F
    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_15, (pattern & 0x40) ? GPIO_PIN_RESET : GPIO_PIN_SET); //G
  }
void displayNB_showTime(int time) {
    display7SEG_Tg(time/10);
    display7SEG_NB(time%10);
}
void displayDT_showTime(int time) {
    display7SEG_Tg(time/10);
    display7SEG_DT(time%10);
}
void display_showMode(int mode) {
    display7SEG_Tg(mode/10);
    display7SEG_DT(mode%10);
}

