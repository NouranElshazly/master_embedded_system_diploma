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
#define SYSCTL_RCGC2_R       (*((vuint64_t*)0X400FE108))
#define GPIO_PORTF_DATA_R    (*((vuint64_t*)0X400253FC))
#define GPIO_PORTF_DIR_R     (*((vuint64_t*)0X40025400))
#define GPIO_PORTF_DEN_R     (*((vuint64_t*)0X4002551C))

int main(void)
{
	vuint64_t delay_count ;
	SYSCTL_RCGC2_R = 0x20;
	// to make sure that GPIOF is up and running 
	for (delay_count=0 ;delay_count<200;delay_count++);
	GPIO_PORTF_DIR_R |= 1<<3; // port f pin 3 is output
	GPIO_PORTF_DEN_R |= 1<<3;	


while (1)
{
	GPIO_PORTF_DATA_R |= 1<<3;
	for (delay_count=0 ;delay_count<200000;delay_count++);
	GPIO_PORTF_DATA_R &= ~(1<<3);
	for (delay_count=0 ;delay_count<200000;delay_count++);

}
return 0; 
}