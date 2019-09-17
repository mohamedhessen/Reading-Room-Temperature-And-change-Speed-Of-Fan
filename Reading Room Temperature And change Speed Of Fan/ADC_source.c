/*
 * ADC_source.c
 *
 *  Created on: Sep 6, 2019
 *      Author: mom
 */
#include"STD_TYPES.h"
#include<avr/io.h>
#include"LCD_INTERFACE.h"

/*******************************************/
/*Description    : hvjhvkjaebfbkjwebkjw    */
/*Parameter (IN) :                         */
/*Parameter (OUT):                         */
/*******************************************/
void ADC_INIT(void)
{
ADMUX|=(1<<6)|(1<<5);
ADCSRA|=(1<<7);
ADCSRA|=(1<<0)|(1<<2)|(1<<1);
}

void ReadChannel(u8 channel)
{
channel&=7;
ADMUX&=0xE0;
ADMUX|=channel;
ADCSRA|=(1<<6);
while( !( ADCSRA & (1<<4) ) )
{;}
ADCSRA |=(1<<4); //clear flag
PORTD=ADCL;
PORTC=ADCH;
}

u8 Temp_value(u8 Portx)
{
u8 localval=Portx;
localval=(localval*5000)/(1024);
localval/=10;
return localval;
}
void Print_temp(u8 temp)
{

	LcdWriteData((temp/10)+48);
	LcdWriteData((temp%10)+48);

}
