/*
 * fifo.c
 *
 *  Created on: Sep 25, 2023
 *      Author: Nouran Elshazly
 */

#include  "fifo.h"
FIFO_Buf_status fifo_init (FIFO_Buf_t*fifo ,element_type*buff,uint32_t lenght)
{
	if (buff==NULL)
		return FIFO_null ;

	fifo ->base =buff ;
	fifo ->head =buff ;
	fifo ->tail =buff ;
	fifo ->lenght=lenght ;
	fifo ->count =0 ;

	return FIFO_no_error ;

}
FIFO_Buf_status fifo_enqueue (FIFO_Buf_t* fifo ,element_type ENQ_Data)
{
	//check fifo is valid
	if (!fifo ->base  || !fifo ->head ||!fifo ->tail)
		return FIFO_null;
	// check fifo is full or not
	if (FIFO_IS_FULL(fifo )==FIFO_full)
		return FIFO_full;
	*(fifo ->head )=ENQ_Data;
	fifo->count++ ;
	//circular fifo
	if (fifo->head == (fifo->base + (fifo->lenght *sizeof(element_type))))

		fifo->head =fifo->base ;

	else

		fifo->head ++ ;


	return FIFO_no_error ;
}
FIFO_Buf_status fifo_dequeue (FIFO_Buf_t*fifo ,element_type*DEQ_Data)
{
	//check fifo is valid
	if (!fifo ->base  || !fifo ->head ||	!fifo ->tail)
		return FIFO_null;
	//check fifo is empty
	if (fifo-> count==0)
	{
		printf("\n====fifo is empty =====\n");
		return FIFO_empty;
	}
	*DEQ_Data =*(fifo->tail) ;
	(fifo ->count)--;
	if (fifo->tail==(fifo->base+(fifo->lenght*sizeof(element_type))))
	{
		fifo->tail=fifo->base ;
	}
	else
		fifo->tail++ ;
	return FIFO_no_error ;

}
FIFO_Buf_status FIFO_IS_FULL (FIFO_Buf_t*fifo)
{
	//check fifo is valid
	if (!fifo ->base ||!fifo ->head ||!fifo ->tail)
		return FIFO_null;
	if (fifo-> count == fifo->lenght)

		return FIFO_full;
	return FIFO_no_error ;
}
void  FIFO_PRINT (FIFO_Buf_t* fifo)
{
	element_type* temp ;
	int i ;
	if (fifo->count==0)
	{
		printf("\n ======fifo is empty========\n");

	}
	else
	{
		temp =	fifo->tail ;
		printf("\n ======fifo_ print========\n");
		for (i=0;i<fifo->count;i++)
		{
			printf ("\t %x \n",*temp);
			temp++;
		}
	}
	printf("===========\n");




}
