/*
 * fsm_auto.c
 *
 *  Created on: Oct 28, 2024
 *      Author: Admin
 */
#include "fsm_auto.h"

void fsm_auto_run(){
	switch(status){
	case INIT:
		normal_traffic();
	case MODE_2:
		if(isButton1Pressed(1))
		{
			t_red++;
			if(t_red>99)
			{
				t_red=1;
			}
		}
//		display7SEG_Tg(t_red);
		if(isButton1Pressed(0))
		{
			status=MODE_3;
		}
		break;
	case MODE_3:
				if(isButton1Pressed(1))
				{
					t_yellow++;
					if(t_yellow>99)
					{
						t_yellow=1;
					}
				}
//				display7SEG_Tg(t_red);
				if(isButton1Pressed(0))
				{
					status=MODE_4;
				}
		break;
	case MODE_4:
		if(isButton1Pressed(1))
		{
			t_green++;
			if(t_green>99)
			{
				t_green=1;
			}
		}
//		display7SEG_Tg(t_red);
		if(isButton1Pressed(0))
		{
			status=INIT;
		}
		break;
	default:
		break;

	}

}
void normal_traffic(void){
	switch(status){
	case cd1:
	{
		redgreen_state();
		if(Timer_Flag[0])
		{
			display7SEG_NB(led_NB);
			display7SEG_DT(led_DT);
			led_NB--;
			led_DT--;
			setTimer(0,100);
		}
		if(isButton1Pressed(0))
		{
			status=MODE_2;
		}
	}
	case cd2:
	{
		redyellow_state();
		if(Timer_Flag[0])
		{
			display7SEG_DT(led_DT);
			led_DT--;
			setTimer(0,100);
		}
		if(isButton1Pressed(0))
		{
			status=MODE_2;
		}
	}
	case cd3:
	{
		greenred_state();
		if(Timer_Flag[0])
		{
			display7SEG_NB(led_NB);
			display7SEG_DT(led_DT);
			led_NB--;
			led_DT--;
			setTimer(0,100);
		}
		if(isButton1Pressed(0))
			{
				status=MODE_2;
			}
	}
	case cd4:
	{
		yellowred_state();
		if(Timer_Flag[0])
		{
			display7SEG_NB(led_NB);
			led_NB--;
			setTimer(0,100);
		}
		if(isButton1Pressed(0))
		{
			status=MODE_2;
		}
	}
}
}
