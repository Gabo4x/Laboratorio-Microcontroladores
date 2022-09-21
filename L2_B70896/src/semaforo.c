//Trabajo realizado por: Gabriel Barahona Otoya B70896
//Laboratorio de Microcontroladores IE-0624
//Laboratorio #2

#include <avr/io.h>
#include <avr/interrupt.h>

ISR (INT0_vect)
{
    PORTB ^= ~(1<<PB0) | ~(1<<PB3) | ~(1<<PB5);
}
ISR (INT1_vect)
{
    PORTB &= ~(1<<PB1) & ~(1<<PB2) & ~(1<<PB4);
}
ISR (PCINT0_vect)
{
    PORTB ^= ~(1<<PB6);
}

void config()
{
  DDRB |= (1<<PB0) | (1<<PB1) | (1<<PB2) | (1<<PB3) | (1<<PB4)| (1<<PB5);
  sei();
  GIMSK |= (1<<INT0);
  MCUCR |= (1<<ISC01);
  GIMSK |= (1<<INT1);
  MCUCR |= (1<<ISC11);
}

void pin_change_interrupt()
{
  DDRB |= (1<<PB0);
  GIMSK |= (1<<PCIE1);
  PCMSK |= (1<<PCINT1);
}

int main()
{
  config();
  pin_change_interrupt();
  while(1)
  {

  }
}
