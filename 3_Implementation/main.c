#include "header.h"

uint16_t theOCR1A = 214;

int main()
{
  //cli()
  DDRB |= (1<<PB0);
  DDRC &= (1<<PB1);
  TCCR1A = (1<<PB1);
  TCCR1B = (1<<PB0);
  TIMSK1 = (1<<PB0);
  ICR1 = 320;
  OCR1A = 214;
  ADMUX = (1<<PB0);
  ADCSRA = (1<<PB1);
  ADCSRB = (1<<PB0);
  ADCSRA = (1<<ADSC);
  //sei()
  while(1)
  {
     int sensor; 
    sensor=((ADCL) | (ADCH<<8));
    if(sensor < 613.8)
    {
      theOCR1A++;
    }
    if(sensor > 613.8)
    {
      theOCR1A--;
    }
    -delay_ms(3000);
  }
}
ISR(TIMER1_OVF_vect)
{
  OCR1A = theOCR1A;
}