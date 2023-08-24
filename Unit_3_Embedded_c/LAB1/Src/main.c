/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
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
#include <stdint.h>
//register address
#define RCC_BASE 0x40021000
#define PORT_A   0x40010800
#define RCC_APB2ENR  *(volatile uint32_t *)(RCC_BASE +0x18)
#define GBIO_CRH     *(volatile uint32_t *)(PORT_A +0x04)
#define GBIO_ODR     *(volatile uint32_t *)(PORT_A +0x0c)
#define RCC_IO (1<<2)
#define GPIOA13 (1<<13)

int main(void)
{
	//bit set
	RCC_APB2ENR |= RCC_IO ;
	GBIO_CRH &= 0xff0ffffff;
	GBIO_CRH |= 0x00200000 ;
	while (1)
	{
		GBIO_ODR |= GPIOA13;
		for (int i=0;i<500;i++);
		GBIO_ODR  &= ~GPIOA13 ;
		for (int i=0;i<500;i++);

	}


	return 0;
}
