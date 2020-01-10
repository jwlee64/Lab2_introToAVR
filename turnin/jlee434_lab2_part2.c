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
    	DDRC = 0xFF;
	PORTC = 0x00; 
    	/* Insert your solution below */
    	unsigned char cntavail = 0;
	while (1) {
		cntavail = (PINA &  0x01) + 
			((PINA &  0x02) >> 1) + 
			((PINA &  0x04) >> 2) + 
			((PINA &  0x08) >> 3) ;
    		PORTC = cntavail;
	}
    return 1;
}
