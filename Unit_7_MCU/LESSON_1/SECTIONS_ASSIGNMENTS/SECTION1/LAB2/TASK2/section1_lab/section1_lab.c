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
		 CLEAR_BIT(DDRC,0);
		 SET_BIT(PORTC,0);
		
    while(1)
    {
       if(READ_BIT(PINC,0)==0)
     {
	  
	     for (int i=0;i<=7;i++)
		    {
	 
			   SET_BIT(PORTA,i);
			_delay_ms(100);
		    }
      }
	}
}