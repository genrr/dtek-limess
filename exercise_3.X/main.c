/*
 * File:   main.c
 * Author: dte20074
 *
 * Created on 02 May 2021, 17:44
 */


#define F_CPU   2000000

#include <avr/io.h>
#include <avr/interrupt.h>


ISR(INT0_vect)
{
    /*toggle LED*/
    PORTB ^= (1 << PORTB5);
}
    

        

int main(void) {
    
    /*LED set as output*/
    DDRB |= (1 << DDB5);
    /*PB2 button set as input*/
    DDRD &= ~(1 << DDD2);
    /*pull-up activated*/
    PORTD |= (1 << PORTD2);
    
    EICRA |= (1 << ISC01);
    EIMSK |= (1 << INT0);
    
    /*enable global interrupts*/
    sei();

    while (1) {
    }
}
