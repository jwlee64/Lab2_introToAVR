/*	Author: jlee434
 *  Partner(s) Name: Shiyou Wang
 *	Lab Section:
 *	Assignment: Lab #  Exercise #
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
    	/* Insert DDR and PORT initializations */
    	DDRA = 0x00; PORTA = 0xFF;
	DDRB = 0x00; PORTB = 0xFF;
	DDRC = 0x00; PORTC = 0xFF;
	DDRD = 0xFF; PORTD = 0x00; 
    	/* Insert your solution below */
    	unsigned char shwt = 0;
	unsigned char totwt = 0;

	while (1) {
		shwt = PINA - PINC;
		totwt = PINA + PINB + PINC;

		PORTD = (totwt & 0xFC) + 	//zeros last two bits
			(totwt > 140) + 	// PD0 will be 1 is true
			((shwt > 80) << 1); 	//PD1 will be 1 if true
	}
    return 1;
}
