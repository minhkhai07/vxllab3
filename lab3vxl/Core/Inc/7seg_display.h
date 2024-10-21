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
extern int led_Tg;


void display7SEG_NB(int num);
void display7SEG_DT(int num);
void display7SEG_Tg(int num);

#endif /* INC_7SEG_DISPLAY_H_ */
