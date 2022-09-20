/*
 * led.c
 *
 * Created: 9/10/2022 5:57:26 PM
 *  Author: mahmo
 */ 
#include "led.h"

void LED_init(uint8_t ledPort, uint8_t ledPin)
{
	DIO_init(ledPin,ledPort,OUT);
};
void LED_on(uint8_t ledPort, uint8_t ledPin)
{
	DIO_write(ledPin,ledPort,HIGH);
};
void LED_off(uint8_t ledPort, uint8_t ledPin)
{
	DIO_write(ledPin,ledPort,LOW);
}
void LED_toggle(uint8_t ledPort, uint8_t ledPin)
{
	DIO_toggle(ledPin,ledPort);
};
