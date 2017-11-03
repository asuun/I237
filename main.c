#include <avr/io.h>
#include <util/delay.h>

#define BLINK_DELAY_MS1 2000
#define BLINK_DELAY_MS2 5000
#define BLINK_DELAY_MS3 10000
void main ()
{
    /* Set port B pin 7 for output for Arduino Mega yellow LED */
    DDRB |= _BV(DDB7);
    PORTB &= ~_BV(PORTB7);
    DDRA |= _BV(DDA0);
    DDRA |= _BV(DDA2);
    DDRA |= _BV(DDA4);
    while (1) {
        /* Set port B pin 7 high to turn Arduino Mega yellow LED on */
        
        PORTA |= _BV(PORTA0);
        PORTA &= ~_BV(PORTA2);
        PORTA &= ~_BV(PORTA4);
        _delay_ms(BLINK_DELAY_MS1);
        PORTA &= ~_BV(PORTA0);
        _delay_ms(BLINK_DELAY_MS1);
        PORTA |= _BV(PORTA2);
        _delay_ms(BLINK_DELAY_MS2);
        PORTA &= ~_BV(PORTA2);
        PORTA |= _BV(PORTA4);
        _delay_ms(BLINK_DELAY_MS3);
        /* Set port B pin 7 high to turn Arduino Mega yellow LED off */
      
        
        
       
    
        _delay_ms(BLINK_DELAY_MS1);

    }
}