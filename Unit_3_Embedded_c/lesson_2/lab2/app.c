#include  "uart.h"
unsigned char string_buffer [100]="learn-in-depth:Nouran";
void main (void )
{
	
	 UART_sent_string(string_buffer);

	}
