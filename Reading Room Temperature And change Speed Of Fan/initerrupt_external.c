/*
 * initerrupt_external.c
 *
 *  Created on: Aug 30, 2019
 *      Author: mom
 */
#include<avr/io.h>
#include<avr/interrupt.h>

void interrupt_init()
{

PORTD |=(1<<2);
MCUCR |=(1<<1);
MCUCR |=(1<<0);
GICR |=(1<<6);
SREG |=(1<<7);
}

