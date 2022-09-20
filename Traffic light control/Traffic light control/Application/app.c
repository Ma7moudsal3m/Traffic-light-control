/*
 * app.c
 *
 * Created: 9/13/2022 9:11:24 PM
 *  Author: mahmo
 */ 

#include "app.h"

int Car_Led = 0; //GREEN --> 1 , yellow --> 2 ,RED--> 3

void app_init(void)
{
	//Car LED initialization
	LED_init(PORT_A,PIN0);
	LED_init(PORT_A,PIN1);
	LED_init(PORT_A,PIN2);
	
	//Pedestrian LED initialization
	LED_init(PORT_B,PIN0);
	LED_init(PORT_B,PIN1);
	LED_init(PORT_B,PIN2);
	
	//Button initialization
	BUTTON_init(BUTTON_1_PORT,BUTTON_1_PIN);
	//Timer initialization
	Timer_init();
	
	//Enable Global interrupts & setup rising edge detection for button
	sei();
	Rising_Edge_Setup();
	Setup_INT0();
};

void app_start(void){
		BUTTON_read(BUTTON_1_PORT,BUTTON_1_PIN,&buttonstate);
		
		//Green
		LED_on(PORT_A,PIN0);
		Car_Led = 1;
		_delay_ms(5000);
		LED_off(PORT_A,PIN0);
		
		//Yellow blink
		LED_toggle(PORT_A,PIN1);
		Car_Led = 2;
		_delay_ms(500);
		LED_toggle(PORT_A,PIN1);
		_delay_ms(500);
		LED_toggle(PORT_A,PIN1);
		_delay_ms(500);
		LED_toggle(PORT_A,PIN1);
		_delay_ms(500);
		LED_toggle(PORT_A,PIN1);
		_delay_ms(500);
		LED_toggle(PORT_A,PIN1);
		_delay_ms(500);
		LED_toggle(PORT_A,PIN1);
		_delay_ms(500);
		LED_toggle(PORT_A,PIN1);
		_delay_ms(500);
		LED_toggle(PORT_A,PIN1);
		_delay_ms(500);
		LED_toggle(PORT_A,PIN1);
		_delay_ms(500);
		LED_off(PORT_A,PIN1);
	
		//Red led
		LED_on(PORT_A,PIN2);
		Car_Led = 3;
		_delay_ms(5000);
		LED_off(PORT_A,PIN2);
		
		//Yellow blink
		LED_toggle(PORT_A,PIN1);
		Car_Led = 2;
		_delay_ms(500);
		LED_toggle(PORT_A,PIN1);
		_delay_ms(500);
		LED_toggle(PORT_A,PIN1);
		_delay_ms(500);
		LED_toggle(PORT_A,PIN1);
		_delay_ms(500);
		LED_toggle(PORT_A,PIN1);
		_delay_ms(500);
		LED_toggle(PORT_A,PIN1);
		_delay_ms(500);
		LED_toggle(PORT_A,PIN1);
		_delay_ms(500);
		LED_toggle(PORT_A,PIN1);
		_delay_ms(500);
		LED_toggle(PORT_A,PIN1);
		_delay_ms(500);
		LED_toggle(PORT_A,PIN1);
		_delay_ms(500);
		LED_off(PORT_A,PIN1);
}

ISR(EXT_INT_0){
	BUTTON_read(BUTTON_1_PORT,BUTTON_1_PIN,&buttonstate);
	if( buttonstate == HIGH )
	{
		_delay_ms(1000);
		BUTTON_read(BUTTON_1_PORT,BUTTON_1_PIN,&buttonstate);
		if( buttonstate != HIGH )
		{
			switch(Car_Led)
			{
				/******if the led is green the pedestrian led will be red for 5sec and there both yellow will blink for 5 sec*******/
				/*************then the car led will be red and the pedestrian led will be green for 5 sec ********************/
				/***************************************/
				/********** OR ************/
				/***************************************/
				/******if the car led is yellow the pedestrian led will be yellow and there both yellow will blink for 5 sec**/
				/*****************then the car led will be red and the pedestrian led will be green for 5 sec ****************/
				case 1 :
				LED_on(PORT_B,PIN2);
				_delay_ms(5000);
				LED_off(PORT_A,PIN0);
				LED_off(PORT_B,PIN2);
				LED_toggle(PORT_A,PIN1);
				LED_toggle(PORT_B,PIN1);
				_delay_ms(500);
				LED_toggle(PORT_A,PIN1);
				LED_toggle(PORT_B,PIN1);
				_delay_ms(500);
				LED_toggle(PORT_A,PIN1);
				LED_toggle(PORT_B,PIN1);
				_delay_ms(500);
				LED_toggle(PORT_A,PIN1);
				LED_toggle(PORT_B,PIN1);
				_delay_ms(500);
				LED_toggle(PORT_A,PIN1);
				LED_toggle(PORT_B,PIN1);
				_delay_ms(500);
				LED_toggle(PORT_A,PIN1);
				LED_toggle(PORT_B,PIN1);
				_delay_ms(500);
				LED_toggle(PORT_A,PIN1);
				LED_toggle(PORT_B,PIN1);
				_delay_ms(500);
				LED_toggle(PORT_A,PIN1);
				LED_toggle(PORT_B,PIN1);
				_delay_ms(500);
				LED_toggle(PORT_A,PIN1);
				LED_toggle(PORT_B,PIN1);
				_delay_ms(500);
				LED_toggle(PORT_A,PIN1);
				LED_toggle(PORT_B,PIN1);
				_delay_ms(500);
				LED_off(PORT_A,PIN1);
				LED_off(PORT_B,PIN1);
				LED_on(PORT_B,PIN0);
				LED_on(PORT_A,PIN2);
				_delay_ms(5000);
				LED_off(PORT_A,PIN2);
				LED_off(PORT_B,PIN0);
				break;								case 2:				LED_on(PORT_B,PIN2);				LED_off(PORT_A,PIN0);
				LED_off(PORT_B,PIN2);
				LED_toggle(PORT_A,PIN1);
				LED_toggle(PORT_B,PIN1);
				_delay_ms(500);
				LED_toggle(PORT_A,PIN1);
				LED_toggle(PORT_B,PIN1);
				_delay_ms(500);
				LED_toggle(PORT_A,PIN1);
				LED_toggle(PORT_B,PIN1);
				_delay_ms(500);
				LED_toggle(PORT_A,PIN1);
				LED_toggle(PORT_B,PIN1);
				_delay_ms(500);
				LED_toggle(PORT_A,PIN1);
				LED_toggle(PORT_B,PIN1);
				_delay_ms(500);
				LED_toggle(PORT_A,PIN1);
				LED_toggle(PORT_B,PIN1);
				_delay_ms(500);
				LED_toggle(PORT_A,PIN1);
				LED_toggle(PORT_B,PIN1);
				_delay_ms(500);
				LED_toggle(PORT_A,PIN1);
				LED_toggle(PORT_B,PIN1);
				_delay_ms(500);
				LED_toggle(PORT_A,PIN1);
				LED_toggle(PORT_B,PIN1);
				_delay_ms(500);
				LED_toggle(PORT_A,PIN1);
				LED_toggle(PORT_B,PIN1);
				_delay_ms(500);
				LED_off(PORT_A,PIN1);
				LED_off(PORT_B,PIN1);
				LED_on(PORT_B,PIN0);
				LED_on(PORT_A,PIN2);
				_delay_ms(5000);
				LED_off(PORT_A,PIN2);
				LED_off(PORT_B,PIN0);
				/*********************************************************************************/
				/*******if the car led is red the pedestrian led  will be green  for 5 sec *******/
				/*********************************************************************************/
				case  3 :
				LED_on(PORT_A,PIN2);
				LED_on(PORT_B,PIN0);
				_delay_ms(5000);
				LED_off(PORT_A,PIN2);
				LED_off(PORT_B,PIN0);
				LED_on(PORT_A,PIN2);
				break;
			}
		}
	}
}