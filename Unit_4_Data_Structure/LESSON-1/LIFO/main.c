/*
 * main.c

 */
#include "lifo.h"
#include "stdio.h"
#include <stdlib.h>
#include <stdint.h>
element_type buffer1[5];
#define lenght 5
void main (void)
{
	element_type  i,temp=0;
	LIFO_Buf_t  uart_lifo ,I2C_lifo;
	//static allocation
	if (LIFO_init (&uart_lifo,buffer1,5 )==LIFO_No_Error)
		printf("\n Lifo_uart init ========DONE \n");
	//dynamic allocation
	element_type *buffer2 = (unsigned int *) malloc (5*sizeof (unsigned int ));
	if (LIFO_init (&I2C_lifo,buffer2,5)==LIFO_No_Error)
		printf("\n Lifo_I2C init ========DONE \n");
	//push option
	printf("\n LIFO ADD  \n");
	for (i=0;i<5;i++)
	{

		if ( LIFO_push_items(&uart_lifo ,i)==LIFO_No_Error)
			printf (" \n uart _lifo_add: %d\n is Done \n ",i);
		else
			printf (" \n uart _lifo_add: %d\n is failed  \n ",i);
	}
	LIFO_PRINT(&uart_lifo);
	//pop option
	for (i=0;i<2;i++)
	{
		if (LIFO_pop_items(&uart_lifo ,&temp )==LIFO_No_Error)
			printf("uart _lifo_pop: %d\n",temp);


	}
	LIFO_PRINT(&uart_lifo);
}
