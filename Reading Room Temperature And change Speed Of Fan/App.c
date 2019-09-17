/*
 * App.c
 *
 *  Created on: Sep 6, 2019
 *      Author: mom
 */

#include "STD_TYPES.h"
#include "MATH.h"
#include "DIO_INTERFACE.h"
#include "LCD_INTERFACE.h"
#include "ADC_INTERFACE.h"
#include "avr/delay.h"
#include"avr/io.h"
#include<interupt/io.h>
void __vector_10(void) __attribute__((signal,used));
int main()
{
	DDRA=0x00;
	DDRC=0xff;
	DDRB=0xff;
	DDRD=0xff;
	LCD_INIT();			/* Initialize LCD */
	ADC_INIT();
	TCCR0 |=(1<<1)|(1<<3);//choosing prescaling by 1024
	TIMSK|=(1<<1);//enable ctc interrupt
	SREG |=(1<<7);//enable all interrupts
    while(1)
    {
    	ReadChannel(0);
    	u8 tempature=Temp_value(PORTC);
    	Print_temp(tempature);
    	_delay_ms(3000);
    	if( tempature>25 && tempature<40)
    		OCR0=25;
    	else if (tempature>40)
    		OCR0=28;
    	LcdWriteCmd(0x01);
        _delay_ms(3000);
    }
  // LcdWriteCmd(0xC0);		/* Go to 2nd line*/
   	/* Write string on 2nd line*/

	return 0;
}


void __vector_10()//ISR function
{
	static u8 counter=0;//static variable
	counter++;
	if(counter ==4)//when the counter reaches 1sec
	{
		PORTC=0x00;//toggle pin0 in portc
	}
	else if(counter==8)
	{
		PORTC=0xff;
		counter=0;//clears the counter
	}
}
