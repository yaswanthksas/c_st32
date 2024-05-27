/*
 * main.h
 *
 *  Created on: May 27, 2024
 *      Author: DELL
 */

#ifndef MAIN_H_
#define MAIN_H_

#include<stdint.h>

typedef struct{
	uint32_t gpioaen : 1;
	uint32_t gpioben : 1;
	uint32_t gpiocen : 1;
	uint32_t gpioden : 1;
	uint32_t gpioeen : 1;
	uint32_t gpiofen : 1;

	uint32_t gpiogen : 1;
	uint32_t gpiohen : 1;
	uint32_t gpioien : 1;

	uint32_t reserved1 : 3;
	uint32_t crcen : 1;
	uint32_t reserved2 : 3;
	uint32_t reserved3 : 2;
	uint32_t bkpsramen : 1;
	uint32_t res:1;
	uint32_t ccmdataramen : 1;
	uint32_t dma1en : 1;
	uint32_t dma2en : 1;
	uint32_t reserved4: 2;
	uint32_t ethmacen : 1;
	uint32_t ethmactxen : 1;
	uint32_t ethmacrxen : 1;
	uint32_t ethmacptpen : 1;
	uint32_t otghsen : 1;
	uint32_t otghsulpien : 1;
	uint32_t reserved5 : 1;

}RCC_AHB1ENR_t;

typedef struct{
	uint32_t pin_0: 2;
	uint32_t pin_1: 2;
	uint32_t pin_2: 2;
	uint32_t pin_3: 2;
	uint32_t pin_4: 2;
	uint32_t pin_5: 2;
	uint32_t pin_6: 2;
	uint32_t pin_7: 2;
	uint32_t pin_8: 2;
	uint32_t pin_9: 2;
	uint32_t pin_10: 2;
	uint32_t pin_11: 2;
	uint32_t pin_12: 2;
	uint32_t pin_13: 2;
	uint32_t pin_14: 2;
	uint32_t pin_15: 2;

}GPIOx_MODER_t;

typedef struct{
	uint32_t odr0: 1;
	uint32_t odr1: 1;
	uint32_t odr2: 1;
	uint32_t odr3: 1;
	uint32_t odr4: 1;
	uint32_t odr5: 1;
	uint32_t odr6: 1;
	uint32_t odr7: 1;
	uint32_t odr8: 1;
	uint32_t odr9: 1;
	uint32_t odr10: 1;
	uint32_t odr11: 1;
	uint32_t odr12: 1;
	uint32_t odr13: 1;
	uint32_t odr14: 1;
	uint32_t odr15: 1;
	uint32_t odr16_31 : 16;


}GPIOx_ODR_t;

#endif /* MAIN_H_ */
