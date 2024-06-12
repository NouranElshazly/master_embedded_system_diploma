/*
 * section1_lab.c
 *
 * Created: 4/25/2024 12:18:02 PM
 *  Author: User
 */ 
#define F_CPU 8000000UL
#include <util/delay.h>
#include "Utils.h"
#include "memorymap.h"

int main(void)
{
	     //set PORTA as an output
	     DDRA = 0xff ;
    while(1)
    {
   int i ;
   for (i=0 ;i<=7 ;i++ )
   {
	   SET_BIT(PORTA,i);
	   _delay_ms (500);
   }
   for (i=7;i>=0 ;i--)
   {
	   CLEAR_BIT(PORTA,i);
	    _delay_ms (500);
   }
		
    }
}