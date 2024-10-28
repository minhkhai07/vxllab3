/*
 * ledblink.h
 *
 *  Created on: Oct 28, 2024
 *      Author: Admin
 */

#ifndef INC_LEDBLINK_H_
#define INC_LEDBLINK_H_
#include "Timer.h"
#include "fsm_auto.h"


#define t_min_duration	1
#define t_max_duration	99
extern int t_red;
extern int t_yellow;
extern int t_green;

void run_ledblink(void);


#endif /* INC_LEDBLINK_H_ */
