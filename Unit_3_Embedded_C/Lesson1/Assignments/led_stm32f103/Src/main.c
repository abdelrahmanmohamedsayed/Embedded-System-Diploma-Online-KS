/**
 ******************************************************************************
 * @file           : main.c
 * @author         :  abdelrahman sayed
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


#include <stdio.h>
#include <stdint.h>
#define base_RCC 0x40021000
#define base_GPIO 0x40010800
#define APB2ENR  *(volatile uint32_t*)(base_RCC+0x18)
#define CRH_gpio *(volatile uint32_t*)(base_GPIO+0x04)
#define ODR_gpio *(volatile uint32_t*)(base_GPIO+0x0C)
typedef union
{

	volatile uint32_t all_feilds;
	struct
	{
		volatile uint32_t reversed :13;
		volatile uint32_t p_13 :1;
	}pin;
}ODR_t;
int main(void)
{
	//Set APB2ENR Register
	APB2ENR|=1<<2;
	//CRH Register
	CRH_gpio &=0xFF0FFFFF;
	CRH_gpio |=0X00200000;
	//toggle GPIOA_ODRReg
	volatile ODR_t* ODR=(volatile ODR_t*)(base_GPIO+0x0C);
	while(1)
	{
		ODR->pin.p_13=1;
		for(int i=0;i<500;i++);
		ODR->pin.p_13=0;
		for(int i=0;i<500;i++);
	}
}
