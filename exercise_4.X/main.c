

#include <avr/io.h>


int main(void) {
     /*
      * Set pin PB5 (LED) as output
      */
     DDRB |= (1 << DDB5);
     DDRD &= ~(1 << DDD2);
     PORTD |= (1 << PORTD2);

    while (1)
    {
		/*
         * Reverse state of led
		 */
        if(PIND & (1 << PIND2))
        {
            //PORTB ^= (1 << PORTB5);
        }


    }
}