/*
 * tajmer.c
 *
 *  Created on: May 7, 2020
 *      Author: Djole
 */
#include <avr/io.h>
#include <util/delay.h>
int main(){
	DDRD = 1 << 6;
	unsigned char ispuna=0;
	TCCR0A = 0x83;
	TCCR0B = 0x01;

	while(1)
	{
		OCR0A=++ispuna;
		_delay_ms(20);

	}
	return 0;
}
