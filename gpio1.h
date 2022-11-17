
#ifndef __GPIO_H
#define __GPIO_H
#include <stdint.h>

#define GPIOA (uint32_t*)0x40020000
#define GPIOB (uint32_t*)0x40020400
#define GPIOC (uint32_t*)0x40020800
#define GPIOD (uint32_t*)0x40020c00
#define GPIO12_ODR (uint32_t*)0x40020c14
#define GPIO12_OTYPER(uint32_t*)0x40020c04
(GPIOx_MODER


void GPIO_Config(uint32_t *GPIOx, uint8_t Pin, uint8_t Mode, uint8_t Type)
void GPIO_Clock_Enable(uint32_t *GPIOx);
#endif