#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>

ISR (INT0_vect)
{
  PORTB ^= (1<<PB1);
}
ISR (INT1_vect)
{
  PORTB ^= (1<<PB0);
}

void external_interrupt()
{
  DDRB |= (1<<PB0) | (1<<PB1) | (1<<PB2) | (1<<PB3) | (1<<PB4)| (1<<PB5);
  sei();
  GIMSK |= (1<<INT0);
  MCUCR |= (1<<ISC01);
}

void pin_change_interrupt()
{
  DDRB |= (1<<PB0);
  GIMSK |= (1<<PCIE1);
  PCMSK |= (1<<PCINT1);
}

int main()
{
  external_interrupt();
  pin_change_interrupt();
  while(1)
  {

  }
}
