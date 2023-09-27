/*
 * main.c
 * created on :Sep 25, 2023
 * Auther : Nouran Elshazly
 */
#include "fifo.h"
//creat a static buffer by user
#define buffer_width 5
element_type uart [buffer_width];

void main(){
	FIFO_Buf_t uart_fifo ;
	element_type i, temp ;
	if (fifo_init (&uart_fifo ,uart,buffer_width )==FIFO_no_error )
		printf("\nFIFO INIT ----DONE  \n ");
	for (i=0;i<7;i++)
	{
		printf("\n FIFO enqueue %x \n",i);
		if (fifo_enqueue(&uart_fifo,i)==FIFO_no_error)
			printf("\nFIFO enqueue ----DONE---  \n ");
		else
			printf("\n FIFO enqueue ----failed-------   \n ");
	}
	FIFO_PRINT(&uart_fifo);
	if (fifo_dequeue(&uart_fifo,&temp)==FIFO_no_error)
		printf("FIFO dequeue (%x) \n",temp);
	else
		printf("FIFO dequeue (%x) ----failed   \n ",temp );
	if (fifo_dequeue(&uart_fifo,&temp)==FIFO_no_error)

		printf("FIFO dequeue  (%x)\n ",temp);
	else
		printf("FIFO dequeue (%x) ----failed   \n ",temp );
	FIFO_PRINT(&uart_fifo);
}
