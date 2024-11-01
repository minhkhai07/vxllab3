/*
 * global.h
 *
 *  Created on: Oct 28, 2024
 *      Author: Admin
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_
#include "Timer.h"
#include "Button.h"
#include "main.h"
#include "trafficlight.h"
#include "7seg_display.h"
#define cd1				5
#define cd2				6
#define cd3				7
#define cd4				8
#define INIT			1
#define MODE_2			2
#define MODE_3			3
#define MODE_4			4

extern int t_red;
extern int t_yellow;
extern int t_green;
extern int status;
#endif /* INC_GLOBAL_H_ */
