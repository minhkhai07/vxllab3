/*
 * Button.c
 *
 *  Created on: Oct 21, 2024
 *      Author: Admin
 */
#include "Button.h"
int KeyReg0 = NORMAL_STATE;
int KeyReg1 = NORMAL_STATE;
int KeyReg2 = NORMAL_STATE;
int KeyReg3 = NORMAL_STATE;

int TimeOutForKeyPress =  500;
int button1_pressed = 0;
int button1_long_pressed = 0;

int isButton1Pressed(){
	if(button1_pressed == 1){
		button1_pressed = 0;
		return 1;
	}
	return 0;
}

int isButton1LongPressed(){
	if(button1_long_pressed == 1){
		button1_long_pressed = 0;
		return 1;
	}
	return 0;
}

void subKeyProcess(){
	//TODO
	button1_pressed = 1;
}

void getKeyInput(){
  KeyReg0 = KeyReg1;
  KeyReg1 = KeyReg2;
  // Add your key
  KeyReg2 = HAL_GPIO_ReadPin(BUTTON_GPIO_Port, BUTTON_Pin);
  if ((KeyReg0 == KeyReg1) && (KeyReg1 == KeyReg2)){
    if (KeyReg3 != KeyReg2){
       KeyReg3 = KeyReg2;

      if (KeyReg2 == PRESSED_STATE){
        TimeOutForKeyPress = 500;
        subKeyProcess();
      }

    }else{
        TimeOutForKeyPress --;
        if (TimeOutForKeyPress == 0){
        	TimeOutForKeyPress = 500;
        	if (KeyReg2 == PRESSED_STATE){
        		subKeyProcess();
        	}
        }
    }
  }
}



