/*
 * led.h
 *
 * Created: 9/10/2022 5:57:46 PM
 *  Author: mahmo
 */ 


#ifndef LED_H_
#define LED_H_
#include "../../MCAL/DIO Driver/dio.h"

// all driver function prototypes

//LED initialize
void LED_init(uint8_t ledPort, uint8_t ledPin);

//LED ON
void LED_on(uint8_t ledPort, uint8_t ledPin);

//LED OFF
void LED_off(uint8_t ledPort, uint8_t ledPin);

//LED TOGGLE
void LED_toggle(uint8_t ledPort, uint8_t ledPin);


#endif /* LED_H_ */