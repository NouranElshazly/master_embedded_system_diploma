/*
 * Lab3_enable_interrupt_atmega32.c
 *
 * Created: 2/29/2024 1:05:38 PM
 *  Author: Nouran_Elshazly
 */ 

#define F_CPU 8000000ul
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>

void GPIO_INIT(void);
void EXTI_INT(void);

int main(void)
{
	EXTI_INT();
	GPIO_INIT();
	while (1)
	{
		PORTD &= ~(1<<5);
		PORTD &= ~(1<<6);
		PORTD &= ~(1<<7);
	}
	
}
	void GPIO_INIT(void)
	{
		//SET PINS 5/6/7 OF PORTD AS AN OUTPUT 
		DDRD |=(1<<5);
		DDRD |=(1<<6);
		DDRD |=(1<<7);
	}
	void EXTI_INT()
	{
	/* (INTO)==> IRQ OCCUR WHEN (ANY CHANGE (RISING OR FALLING))
	   (INT1)==> IRQ OCCUR WHEN (RISING EDGE)
	   (INT2)==> IRQ OCCURE WHEN (FALLING EDGE)
	*/
	//INTO ANY CHANGE 
	MCUCR |=(1<<0);
	// INT1 ==>RISING EDGE
	MCUCR |=(1<<2);
	MCUCR |=(1<<3);
	//INT2 ==>FALLING EDGE 
	MCUCSR &= ~(1<<6);
	//ENABLE EXTERNAL INTERRUPT (INT2)
	GICR |=(1<<5); 
	//ENABLE EXTERNAL INTERRUPT (INT0)
	GICR |=(1<<6);
	//ENABLE EXTERNAL INTERRUPT (INT1)
	GICR |=(1<<7);
	// ENABLE GLOBAL INTERRUPT
	sei();
	}
	ISR (INT0_vect)
	{
		PORTD |=(1<<5);
		_delay_ms(1000);
		
	}
	ISR (INT1_vect)
	{
		PORTD |=(1<<6);
		_delay_ms(1000);
			
	}
	ISR (INT2_vect)
	{
		PORTD |=(1<<7);
		_delay_ms(1000);
		
	}

	