/*
 * ANODE SEVEN SEGMENT DİSPLAY COUNT DOWN AND UP
 * ssd_numbers.c
 * stm32vldiscovery(stm32f100rbt) board
 *
 * Created on: Feb 9, 2023
 *      Author: OMER VAROL
 *      mail: omrvrl7@outlook.com

:_:_:_:_:_:_:_:_:_:_:_:_:_:_:_:_:_:_:_:_:_:_:_:_:_:_:_:_:_:_:_:_:_:_:_:_:_:_:_:_:_:_:_:_:_:_:_:_:_:_:_:_:_:_:_:_:_:_:_:_:_:_:_:

-----> INFO
--->Pins connection to the board:

PA0 -> 6 - B
PA1 -> 7 - A
PA2 -> 9 - F
PA3 -> 10 - G

PA8 -> 1 - E
PA9 -> 2 - D
PA10 -> 4 - C
PA11 -> 5 - DP

 */

#include "stm32f1xx_hal.h"
#include "ssd_numbers.h"

void number_off();

void ssd_init(void){

	number_off();
	RCC->APB2ENR |= (1<<2);

	/*PİN0*/
	GPIOA->CRL &= ~(1<<1);
	GPIOA->CRL |= (1<<0);
	GPIOA->CRL &= ~(1<<3);
	GPIOA->CRL &= ~(1<<2);

	/*PIN1*/
	GPIOA->CRL &= ~(1<<5);
	GPIOA->CRL |= (1<<4);
	GPIOA->CRL &= ~(1<<7);
	GPIOA->CRL &= ~(1<<6);

	/*PIN2*/
	GPIOA->CRL &= ~(1<<9);
	GPIOA->CRL |= (1<<8);
	GPIOA->CRL &= ~(1<<11);
	GPIOA->CRL &= ~(1<<10);

	/*PIN4*/
	GPIOA->CRL &= ~(1<<13);
	GPIOA->CRL |= (1<<12);
	GPIOA->CRL &= ~(1<<15);
	GPIOA->CRL &= ~(1<<14);

	/*PİN8*/
	GPIOA->CRH &= ~(1<<1);
	GPIOA->CRH |= (1<<0);
	GPIOA->CRH &= ~(1<<3);
	GPIOA->CRH &= ~(1<<2);

	/*PIN9*/
	GPIOA->CRH &= ~(1<<5);
	GPIOA->CRH |= (1<<4);
	GPIOA->CRH &= ~(1<<7);
	GPIOA->CRH &= ~(1<<6);

	/*PIN10*/
	GPIOA->CRH &= ~(1<<9);
	GPIOA->CRH |= (1<<8);
	GPIOA->CRH &= ~(1<<11);
	GPIOA->CRH &= ~(1<<10);

	/*PIN11*/
	GPIOA->CRH &= ~(1<<13);
	GPIOA->CRH |= (1<<12);
	GPIOA->CRH &= ~(1<<15);
	GPIOA->CRH &= ~(1<<14);


}

void number_on(uint32_t number){
	switch(number){
	case 0:
		GPIOA->BSRR = (1<<8);
		GPIOA->BSRR = (1<<9);
		GPIOA->BSRR = (1<<10);
		GPIOA->BSRR = (1<<1);
		GPIOA->BSRR = (1<<2);
		GPIOA->BSRR = (1<<0);
		break;
	case 1:

		GPIOA->BSRR = (1<<8);
		GPIOA->BSRR = (1<<2);
		break;

	case 2:
		GPIOA->BSRR = (1<<8);
		GPIOA->BSRR = (1<<9);
		GPIOA->BSRR = (1<<0);
		GPIOA->BSRR = (1<<1);
		GPIOA->BSRR = (1<<3);
		break;
	case 3:
		GPIOA->BSRR = (1<<9);
		GPIOA->BSRR = (1<<10);
		GPIOA->BSRR = (1<<0);
		GPIOA->BSRR = (1<<1);
		GPIOA->BSRR = (1<<3);
		break;
	case 4:

		GPIOA->BSRR = (1<<10);
		GPIOA->BSRR = (1<<0);
		GPIOA->BSRR = (1<<2);
		GPIOA->BSRR = (1<<3);
		break;
	case 5:
		GPIOA->BSRR = (1<<9);
		GPIOA->BSRR = (1<<10);
		GPIOA->BSRR = (1<<1);
		GPIOA->BSRR = (1<<2);
		GPIOA->BSRR = (1<<3);
		break;
	case 6:
		GPIOA->BSRR = (1<<8);
		GPIOA->BSRR = (1<<9);
		GPIOA->BSRR = (1<<10);
		GPIOA->BSRR = (1<<1);
		GPIOA->BSRR = (1<<2);
		GPIOA->BSRR = (1<<3);
		break;
	case 7:

		GPIOA->BSRR = (1<<10);
		GPIOA->BSRR = (1<<0);
		GPIOA->BSRR = (1<<1);
		break;

	case 8:
		GPIOA->BSRR = (1<<8);
		GPIOA->BSRR = (1<<9);
		GPIOA->BSRR = (1<<10);
		GPIOA->BSRR = (1<<0);
		GPIOA->BSRR = (1<<1);
		GPIOA->BSRR = (1<<2);
		GPIOA->BSRR = (1<<3);
		break;
	case 9:
		GPIOA->BSRR = (1<<9);
		GPIOA->BSRR = (1<<10);
		GPIOA->BSRR = (1<<0);
		GPIOA->BSRR = (1<<1);
		GPIOA->BSRR = (1<<2);
		GPIOA->BSRR = (1<<3);
		break;

	case 11:
		GPIOA->BSRR = (1<<11);
		break;
	}
}

void number_off(){

	GPIOA->BSRR = (1<<24);
	GPIOA->BSRR = (1<<25);
	GPIOA->BSRR = (1<<26);
	GPIOA->BSRR = (1<<27);
	GPIOA->BSRR = (1<<16);
	GPIOA->BSRR = (1<<17);
	GPIOA->BSRR = (1<<18);
	GPIOA->BSRR = (1<<19);

	/*RCC->APB2RSTR = (1<<2);*/
}

void count_down(uint32_t speed)
{
		number_on(9);
		HAL_Delay(500);
		number_off();
		HAL_Delay(500);
//
		number_on(8);
		HAL_Delay(500);
		number_off();
		HAL_Delay(500);

		number_on(7);
		HAL_Delay(500);
		number_off();
		HAL_Delay(500);

		number_on(6);
		HAL_Delay(500);
		number_off();
		HAL_Delay(500);

		number_on(5);
		HAL_Delay(500);
		number_off();
		HAL_Delay(500);

		number_on(4);
		HAL_Delay(500);
		number_off();
		HAL_Delay(500);

		number_on(3);
		HAL_Delay(500);
		number_off();
		HAL_Delay(500);

		number_on(2);
		HAL_Delay(500);
		number_off();
		HAL_Delay(500);

		number_on(1);
		HAL_Delay(500);
		number_off();
		HAL_Delay(500);

		number_on(0);
		HAL_Delay(500);
		number_off();
		HAL_Delay(500);

		number_on(11);
		HAL_Delay(200);
		number_off();
		HAL_Delay(200);
		number_on(11);
		HAL_Delay(200);
		number_off();
		HAL_Delay(200);
		number_on(11);
		HAL_Delay(200);
		number_off();
		HAL_Delay(500);


}

void count_up(uint32_t speed)
{

		number_on(0);
		HAL_Delay(500);
		number_off();
		HAL_Delay(500);
//
		number_on(1);
		HAL_Delay(500);
		number_off();
		HAL_Delay(500);

		number_on(2);
		HAL_Delay(500);
		number_off();
		HAL_Delay(500);

		number_on(3);
		HAL_Delay(500);
		number_off();
		HAL_Delay(500);

		number_on(4);
		HAL_Delay(500);
		number_off();
		HAL_Delay(500);

		number_on(5);
		HAL_Delay(500);
		number_off();
		HAL_Delay(500);

		number_on(6);
		HAL_Delay(500);
		number_off();
		HAL_Delay(500);

		number_on(7);
		HAL_Delay(500);
		number_off();
		HAL_Delay(500);

		number_on(8);
		HAL_Delay(500);
		number_off();
		HAL_Delay(500);

		number_on(9);
		HAL_Delay(500);
		number_off();
		HAL_Delay(500);

		number_on(11);
		HAL_Delay(200);
		number_off();
		HAL_Delay(200);
		number_on(11);
		HAL_Delay(200);
		number_off();
		HAL_Delay(200);
		number_on(11);
		HAL_Delay(200);
		number_off();
		HAL_Delay(500);

}



