#include "uart.h"
#define UART0DR *((volatile unsigned int*const)((unsigned int*)0x101f1000))
void UART_sent_string (unsigned char *P_tx_string)
{
	while (*P_tx_string != '\0')
	{
		/*looping until the end of string*/
		UART0DR = (unsigned int )(*P_tx_string);
		P_tx_string ++; /*next char */
	}
}