/*
 * registers.h
 *
 * Created: 9/9/2022 6:17:16 PM
 *  Author: mahmo
 */ 

/****************************************************/
/********** All microconrtoller register ************/
/****************************************************/
#ifndef REGISTERS_H_
#define REGISTERS_H_
#include "types.h"
#include "bit_manipulation.h"

/*************************************/
/********** DIO Registers ************/
/*************************************/

//PORTA registers

#define PORTA *((volatile uint8_t*)0X3B)
#define DDRA *((volatile uint8_t*)0X3A)
#define PINA *((volatile uint8_t*)0X39)

//PORTB registers

#define PORTB *((volatile uint8_t*)0X38)
#define DDRB *((volatile uint8_t*)0X37)
#define PINB *((volatile uint8_t*)0X36)

//PORTC registers

#define PORTC *((volatile uint8_t*)0X35)
#define DDRC *((volatile uint8_t*)0X34)
#define PINC *((volatile uint8_t*)0X33)

//PORTD registers

#define PORTD *((volatile uint8_t*)0X32)
#define DDRD *((volatile uint8_t*)0X31)
#define PIND *((volatile uint8_t*)0X30)

/***************************************/
/********** Timer Registers ************/
/***************************************/

#define TCCR0 *((volatile uint8_t*)0X53)
#define TCNT0 *((volatile uint8_t*)0X52)
#define TIFR *((volatile uint8_t*)0X58)
#define TIMSK *((volatile uint8_t*)(0x59)

/***************************************/
/********** Interrupt Registers ************/
/***************************************/

#define SREG *((volatile uint8_t*)0X5F)
#define GICR *((volatile uint8_t*)0X5B)
#define MCUCR *((volatile uint8_t*)0X55)

#endif /* REGISTERS_H_ */