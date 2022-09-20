/*
 * dio.c
 *
 * Created: 9/9/2022 6:16:28 PM
 *  Author: mahmo
 */ 
//Include.h
#include "dio.h"

// global variables
// function definitions
void DIO_init(uint8_t pinNumber, uint8_t portNumber, uint8_t direction)
{
	switch(portNumber)
	{
		case PORT_A :
		if(direction == IN)  //Input
		{
			DDRA &= ~(1<<pinNumber);
		}
		else if(direction == OUT)
		{
			DDRA |=(1<<pinNumber); //Output
		}
		else
		{
			//Error handling
		}
		break;
		case PORT_B :
		if(direction == IN) //Input
		{
			DDRB &= ~(1<<pinNumber);
		}
		else if(direction == OUT)
		{
			DDRB |=(1<<pinNumber); //Output
		}
		else
		{
			//Error handling
		}
		break;
		case PORT_C :
		if(direction == IN) //Input
		{
			DDRC &= ~(1<<pinNumber);
		}
		else if(direction == OUT)
		{
			DDRC |=(1<<pinNumber); //Output
		}
		else
		{
			//Error handling
		}
		break;
		case PORT_D :
		if(direction == IN) //Input
		{
			DDRD &= ~(1<<pinNumber);
		}
		else if(direction == OUT)
		{
			DDRD |=(1<<pinNumber); //Output
		}
		else
		{
			//Error handling
		}
		break;
	}
};

void DIO_write(uint8_t pinNumber, uint8_t portNumber, uint8_t value)
{   
	  switch(portNumber)
	   {
		case PORT_A :
		if(value == LOW) // Write 0 
		{
			PORTA &= ~(1<<pinNumber);
		}
		else if(value == HIGH)
		{
			PORTA |=(1<<pinNumber); // Write 1 
		}
		else
		{
			//Error handling
		}
		break;
		case PORT_B :
		if(value == LOW) // Write 0 
		{
			PORTB &= ~(1<<pinNumber);
		}
		else if(value == HIGH)
		{
			PORTB |= (1<<pinNumber); // Write 1 
		}
		else
		{
			//Error handling
		}
		break;
		case PORT_C :
		if(value == LOW) // Write 0 
		{
			PORTC &= ~(1<<pinNumber);
		}
		else if(value == HIGH)
		{
			PORTC |= (1<<pinNumber); // Write 1 
		}
		else
		{
			//Error handling
		}
		break;
		case PORT_D :
		if(value == LOW) // Write 0 
		{
			PORTD &= ~(1<<pinNumber);
		}
		else if(value == HIGH)
		{
			PORTD |= (1<<pinNumber); // Write 1 
		}
		else
		{
			//Error handling
		}
		break;
	}
};
void DIO_toggle(uint8_t pinNumber, uint8_t portNumber)
{
	switch(portNumber)
	{
		case PORT_A:
		PORTA ^=(1<<pinNumber); // change state -> toggle bit
		break;
		case PORT_B:
		PORTB ^=(1<<pinNumber); // change state -> toggle bit
		break;
		case PORT_C:
		PORTC ^=(1<<pinNumber); // change state -> toggle bit
		break;
		case PORT_D:
		PORTD ^=(1<<pinNumber); // change state -> toggle bit
		break;
		default:
		//Error handling
		break;
	}
};

void DIO_read(uint8_t pinNumber, uint8_t portNumber, uint8_t *value)
{
	switch(portNumber)
	{
		case PORT_A:
		*value = (PINA & (1<<pinNumber))>>pinNumber; // get state -> read bit 0 or 1
		break;
		case PORT_B:
		*value = (PINB & (1<<pinNumber))>>pinNumber; // get state -> read bit 0 or 1
		break;
		case PORT_C:
		*value = (PINC & (1<<pinNumber))>>pinNumber; // get state -> read bit 0 or 1
		break;
		case PORT_D:
		*value = (PIND & (1<<pinNumber))>>pinNumber; // get state -> read bit 0 or 1
		break;
	}
}
