/*
 * fsm_setting.c
 *
 *  Created on: Nov 2, 2024
 *      Author: Admin
 */
#include "fsm_setting.h"
void fsm_set()
{
	switch(status)
	{
	case mode1:
	        redgreen_state();

	    if(Timer_Flag[4]){
	    	updateLedBuffer(9);
	    	quet_7SEG();
	    	a--;
	    	c--;
	        setTimer(4, 1000);
	    }
	    if(Timer_Flag[5]){
	        setTimer(5,b*1000);
	        status = mode2;
	    }
	    if (isButton1Pressed(0)){
	        status = MODE_2;
	    }
	    break;

	case mode2:
		c=t_yellow;
	    redyellow_state();

	    if(Timer_Flag[4]){
	    	updateLedBuffer(10);
	    	quet_7SEG();
	    	a--;
	    	c--;
	        setTimer(4,1000);
	    }
	    if(Timer_Flag[5]){
	    	a=t_green;
	    	c=t_red;
	    	setTimer(5, a*1000);
	        status = mode3;
	    }
	    if (isButton1Pressed(0)) {
	        status = MODE_2;
	    }
	    break;

	case mode3:
	    greenred_state();

	    if (Timer_Flag[4]){
	    	updateLedBuffer(11);
	    	quet_7SEG();
	    	a--;
	    	c--;
	        setTimer(4, 1000);
	    }
	    if(Timer_Flag[5]){
	    	a=t_yellow;
	    	setTimer(5,b*1000);
	        status = mode4;
	    }
	    if (isButton1Pressed(0)) {
	        status = MODE_2;
	    }
	    break;

	case mode4:
	    yellowred_state();

	    if (Timer_Flag[4]){
	    	updateLedBuffer(12);
	    	quet_7SEG();
	    	a--;
	    	c--;
	        setTimer(4, 1000);
	    }
	    if(Timer_Flag[5]){
	    	a=t_red;
	    	c=t_green;
	        setTimer(5, a*1000);
	        status = mode1;
	    }
	    if (isButton1Pressed(0)) {
	        status = MODE_2;
	    }
	    break;

	default:
	    break;
	}
}
