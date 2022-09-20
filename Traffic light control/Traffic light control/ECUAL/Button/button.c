/*
 * button.c
 *
 * Created: 9/10/2022 3:33:32 PM
 *  Author: mahmo
 */ 
#include "button.h"

void BUTTON_init(uint8_t buttonPort, uint8_t buttonPin) //Button is an input device
{
	DIO_init(buttonPin,buttonPort,IN);
}

void BUTTON_read(uint8_t buttonPort, uint8_t buttonPin, uint8_t *value)
{
	DIO_read(buttonPin, buttonPort, value);
}