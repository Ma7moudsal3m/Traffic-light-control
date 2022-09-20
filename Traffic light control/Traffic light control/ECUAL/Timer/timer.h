/*
 * timer.h
 *
 * Created: 9/10/2022 7:34:26 PM
 *  Author: mahmo
 */ 


#ifndef TIMER_H_
#define TIMER_H_
#include "../../Utilities/registers.h"

/************************************************/
/*************** initialize Timer0 **************/
/************************************************/
void Timer_init();

/******************************************************************************/
/********** delay of specific amount default uses 256 prescalar ***************/
/******************************************************************************/
void _delay_ms(uint16_t ms); 
  
#endif /* TIMER_H_ */