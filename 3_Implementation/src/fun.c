#include "header.h"

uint16_t theOCR1A = 214;

ISR(TIMER1_OVF_vect)
{
  OCR1A = theOCR1A;
}