/*
 *
 *
 *  Created on: Sep 23, 2023
 *  Author: Eng :Nouran Elshazly
 */

#ifndef  LIFO_H_
#define LIFO_H_
#include "stdio.h"
#include <stdlib.h>
#include <stdint.h>
//user configrations
/*select element type (uint8_t ,uint16_t,.......)*/
#define element_type  uint8_t

//type definations
typedef struct Lifo_buf{
	element_type * base ;
	unsigned int count ;
	element_type  * head;
	unsigned int lenght ;
} LIFO_Buf_t ;

typedef enum {
	LIFO_No_Error,
	LIFO_Full,
	LIFO_Empty,
	LIFO_Null
} LIFO_STATUS ;

//APIS
LIFO_STATUS  LIFO_push_items (LIFO_Buf_t *lifo_buf,element_type item);
LIFO_STATUS LIFO_pop_items (LIFO_Buf_t *lifo_buf,element_type  *item);
LIFO_STATUS LIFO_init (LIFO_Buf_t *lifo_buf,element_type  *buf,uint32_t  lenght	);
void LIFO_PRINT (LIFO_Buf_t *lifo_buf);
LIFO_STATUS LIFO_IS_FULL (LIFO_Buf_t *lifo_buf);

#endif /* LIFO_H_ */


