/*
 * fsm_auto.c
 *
 *  Created on: Oct 28, 2024
 *      Author: Admin
 */
#include "fsm_auto.h"
int status;
void fsm_auto_run(){
	switch(status)
	{
	case cd1:
				if(Timer_Flag[0])
				{
					redgreen_state();
					displayNB_showTime(led_NB--);
					displayDT_showTime(led_DT--);
					setTimer(0,100);
				}
				if(Timer_Flag[1]){
					led_DT=2;
					setTimer(1,200);
					status=cd2;
				}
				if(isButton1Pressed(0))
				{
					status=MODE_2;
					display_showMode(MODE_2);
				}
				break;
	case cd2:
				redyellow_state();
				if(Timer_Flag[0])
				{
					displayDT_showTime(led_DT--);
					displayNB_showTime(led_NB--);
					setTimer(0,100);
				}
				if(Timer_Flag[1]){
					led_NB=3;
					led_DT=5;
					setTimer(1,300);
					status=cd3;
				}
				if(isButton1Pressed(0))
				{
					status=MODE_2;
					display_showMode(MODE_2);
				}
				break;
	case cd3:
				greenred_state();
				if(Timer_Flag[0])
				{
					displayNB_showTime(led_NB--);
					displayDT_showTime(led_DT--);
					setTimer(0,100);
				}
				if(Timer_Flag[1]){
					led_NB=2;
					setTimer(1,200);
					status=cd4;
				}
				if(isButton1Pressed(0))
					{
						status=MODE_2;
						display_showMode(MODE_2);
					}
				break;
	case cd4:
				yellowred_state();
				if(Timer_Flag[0])
				{
					displayNB_showTime(led_NB--);
					displayDT_showTime(led_DT--);
					setTimer(0,100);
				}
				if(Timer_Flag[1]){
					led_NB=5;
					led_DT=3;
					setTimer(1,300);
					status=cd1;
				}
				if(isButton1Pressed(0))
				{
					status=MODE_2;
					display_showMode(MODE_2);
				}
				break;

	case MODE_2:
		if(isButton1Pressed(1))
		{
			t_red++;

			if(t_red>99)
			{
				t_red=0;
			}
			displayNB_showTime(t_red);
		}
		if(isButton1Pressed(0))
		{
			status=MODE_3;
			display_showMode(MODE_3);
		}
		if(isButton1Pressed(2))
		{
			t_red=0;
			displayNB_showTime(t_red);
		}
		break;

	case MODE_3:

		if(isButton1Pressed(1))

		{
			t_yellow++;
			if(t_yellow>99)
			{
				t_yellow=0;
			}
			displayNB_showTime(t_yellow);
		}
		if(isButton1Pressed(0))
		{
			status=MODE_4;
			display_showMode(MODE_4);
		}
		if(isButton1Pressed(2))
		{
			t_yellow=0;
			displayNB_showTime(t_yellow);
		}
		break;
	case MODE_4:
		if(isButton1Pressed(1))
		{
			t_green++;
			if(t_green>99)
			{
				t_green=0;
			}
			displayNB_showTime(t_green);
		}
		if(isButton1Pressed(0))
		{
			status=cd1;
		}
		if(isButton1Pressed(2))
		{
			t_yellow=0;
			displayNB_showTime(t_green);
		}
		break;
	default:
		break;
	}
}


