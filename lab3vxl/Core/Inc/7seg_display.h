/*
 * 7seg_display.h
 *
 *  Created on: Oct 21, 2024
 *      Author: Admin
 */

#ifndef INC_7SEG_DISPLAY_H_
#define INC_7SEG_DISPLAY_H_
#include "main.h"
extern int led_NB;
extern int led_DT;


void display7SEG_NB(int num);
void display7SEG_DT(int num);
void display7SEG_Tg(int num);
void displayNB_showTime(int time);
void displayDT_showTime(int time);
void display_showMode(int mode);
#endif /* INC_7SEG_DISPLAY_H_ */
