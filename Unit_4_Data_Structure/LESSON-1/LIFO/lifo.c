/*
 * lifo.c
 *
 *  Created on: Sep 23, 2023
 *      Author: NOURAN ELSHAZLY
 */
#include "lifo.h"
//APIS
LIFO_STATUS  LIFO_init (LIFO_Buf_t *lifo_buf,element_type *buf ,uint32_t lenght )
{
	if (buf==NULL)
		return LIFO_Null;
	lifo_buf->base =buf ;
	lifo_buf->head =buf ;
	lifo_buf->lenght =lenght ;
	lifo_buf->count =0 ;
	return  LIFO_No_Error;
}

LIFO_STATUS  LIFO_push_items (LIFO_Buf_t *lifo_buf,element_type item)
{
	//check lifo is valid
	if (! lifo_buf->base || ! lifo_buf->head )
		return LIFO_Null;
	//check lifo is full
	if (LIFO_IS_FULL(lifo_buf)==LIFO_Full)
		return LIFO_Full;
	//add value
	*(lifo_buf->head )=item;
	lifo_buf ->head++;
	lifo_buf ->count++;

return LIFO_No_Error;
}
LIFO_STATUS  LIFO_pop_items (LIFO_Buf_t *lifo_buf,element_type *item)
{

	//check lifo is valid
	if (! lifo_buf->base ||!lifo_buf->head )
		return LIFO_Null;
	//check lifo is empty
	if (lifo_buf->count ==0)
		return LIFO_Empty;
	//POP
	lifo_buf ->head--;
	*item =*(lifo_buf->head );
	lifo_buf->count--;
	return LIFO_No_Error;
}

void LIFO_PRINT (LIFO_Buf_t *lifo_buf)
{
	element_type *temp ;
	int i ;
	if (lifo_buf->count ==0)
		printf("======lifo is empty ======");
	else
	{
		temp =lifo_buf->base ;
		printf("\n ===========lifo print===========\n ");
		for (i=0;i<lifo_buf->count ;i++)
		{
			printf (" \t %x \n ",*temp );
			temp++;
		}
		printf("==========\n");
	}
}
LIFO_STATUS LIFO_IS_FULL (LIFO_Buf_t *lifo_buf)
{
	//check lifo is valid
		if (! lifo_buf->base || ! lifo_buf->head )
			return LIFO_Null;
		if (lifo_buf->count ==lifo_buf->lenght)
			return LIFO_Full;
	return LIFO_No_Error;
}

