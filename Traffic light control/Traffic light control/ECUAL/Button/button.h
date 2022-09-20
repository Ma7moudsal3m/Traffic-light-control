/*
 * button.h
 *
 * Created: 9/10/2022 3:33:53 PM
 *  Author: mahmo
 */ 


#ifndef BUTTON_H_
#define BUTTON_H_
#include "../../MCAL/DIO Driver/dio.h"
// all driver function prototypes

//button state
#define LOW 0
#define HIGH 1

//Button port and pin
#define BUTTON_1_PORT  PORT_D
#define BUTTON_1_PIN   PIN2

//button initialize
void BUTTON_init(uint8_t buttonPort, uint8_t buttonPin);

//button read
void BUTTON_read(uint8_t buttonPort, uint8_t buttonPin, uint8_t *value);

uint8_t buttonstate;

#endif /* BUTTON_H_ */
