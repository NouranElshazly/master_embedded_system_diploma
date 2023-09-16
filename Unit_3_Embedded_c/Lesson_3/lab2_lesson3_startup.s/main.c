/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Nouran Elshazly
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2023 STMicroelectronics.
 * All rights reserved.</center></h2>
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 ******************************************************************************
 */
#include "platform_Types.h"
//register address
#define RCC_BASE 0x40021000
#define PORT_A   0x40010800
#define RCC_APB2ENR  *(vuint32_t *)(RCC_BASE +0x18)
#define GBIO_CRH     *(vuint32_t *)(PORT_A +0x04)
#define GBIO_ODR     *(vuint32_t *)(PORT_A +0x0c)
#define RCC_IO (1<<2)
#define GPIOA13 (1UL<<13)
typedef union {
	vuint32_t ALL_FEILDS;
	struct 
	{
	vuint32_t reversed:13;
	vuint32_t p_13:1 ;
	}pin;
}R_ODR_t; 
volatile R_ODR_t*  R_ODR =(volatile R_ODR_t*)(PORT_A +0X0C);
uint32_t global_variables[3] = {1,2,3};
uint32_t const const_variavles [3] = {1,2,3};
int main(void)
{
	int i;
	RCC_APB2ENR |= RCC_IO ;
	GBIO_CRH &= 0xff0ffffff;
	GBIO_CRH |= 0x00200000 ;
	while (1)
	{
		R_ODR->pin.p_13 =1;
		 for (i=0;i<5000;i++);
		R_ODR->pin.p_13 =0;
		for (i=0;i<5000;i++);

	}

return 0;

}
