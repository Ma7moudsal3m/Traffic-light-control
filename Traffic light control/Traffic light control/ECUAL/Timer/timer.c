/*
 * timer.c
 *
 * Created: 9/10/2022 7:34:14 PM
 *  Author: mahmo
 */ 

#include "timer.h"
#include <math.h>


void Timer_init()
{
	TCCR0 = 0x00; //normal mode
}
void _delay_ms(uint16_t ms){
	uint16_t Noverflows,TimerInitial;
	double Timermaxdelay,Timertick;
	uint32_t overFlowcounter=0;
	//max delay 256 micro second
	//at 1MHz no prescaler
	// 256 prescaler
	Timertick = 256.0/1000.0; //ms    Timertick = prescaler/FCPU
	Timermaxdelay= 65.536; //ms		Timermaxdelay = Ttick * 2^8
	//if Timer_delay < Time_Maxdelay ,set initial timer value and wait for 1 overflow
	if(ms<Timermaxdelay)  
	{
		TimerInitial = (Timermaxdelay-ms)/Timertick;
		Noverflows = 1;
	}
	//if Timer_delay == Time_Maxdelay ,set initial timer value 0 and wait for 1 overflow
	else if(ms == (int)Timermaxdelay)  
	{
	TimerInitial=0;
	Noverflows=1;
	}
	//calculate the number of needed overflows and calculate the set timer initial value
	else
	{	
		Noverflows = ceil((double)Timertick/Timermaxdelay);
		TimerInitial = (1<<8) - ((double)ms/Timertick)/Noverflows;	
	}
	TCNT0 = TimerInitial;
	TCCR0 |= (1<<2); //set 256 prescaler
	while(overFlowcounter<Noverflows){
		//busy wait
		while((TIFR & (1<<0))==0);
		//clear overflow flag
		TIFR |=(1<<0);
		//increment counter
		overFlowcounter++;
	}
	//Timer stop
	TCCR0 = 0x00;
}