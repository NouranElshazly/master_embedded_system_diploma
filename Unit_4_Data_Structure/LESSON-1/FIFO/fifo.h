/*
 * fifo.h
 *
 *  Created on: Sep 25, 2023
 *      Author: User
 */
#ifndef FIFO_H_
#define FIFO_H_
#include "stdio.h"
#include <stdint.h>
//user configuration ========
// select the element type (uint8_t, uinit16_t,........)
#define element_type  uint8_t
//FIFO data types
typedef struct {
	element_type  *base ;
	element_type  *tail ;
	element_type  *head ;
	element_type  lenght ;
	element_type  count ;
}FIFO_Buf_t;

typedef enum {
	FIFO_no_error,
	FIFO_full,
	FIFO_empty,
	FIFO_null
}FIFO_Buf_status;

// FIFO APIS
FIFO_Buf_status fifo_init (FIFO_Buf_t*fifo ,element_type*buff, uint32_t lenght);
FIFO_Buf_status fifo_enqueue (FIFO_Buf_t*fifo ,element_type ENQ_Data);
FIFO_Buf_status fifo_dequeue (FIFO_Buf_t*fifo ,element_type*DEQ_Data);
FIFO_Buf_status FIFO_IS_FULL (FIFO_Buf_t*fifo);
void  FIFO_PRINT (FIFO_Buf_t*fifo);



#endif /*FIFO_H_*/

