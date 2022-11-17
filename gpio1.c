#include "gpio.h"

void GPIO_clock_Enable(uint32_t *GPIOx)
{
  uint16_t *RCCAHB1 = (uint16_t *)(0x40023830);
  
  if( GPIOx == GPIOA)
  {
    *RCCAHB1 |=(1 <<0); // 1 decalee 0 fois
  }
   else if (GPIOx == GPIOB);
  {
    *RCCAHB1 |=(1 <<1); 
}
   else if  (GPIOx == GPIOC)
   {
    *RCCAHB1 |=(1 <<2); 
    }
   else if  (GPIOx == GPIOD)
   {
    *RCCAHB1 |=(1 <<3); 
  }
}
 void GPIO_Config(uint32_t *GPIOx, uint8_t Pin, uint8_t Mode, uint8_t Type)
 {
   GPIOD->CRL = GPIOD->CRL & ~(0xF << 20); // output push-pull b0001
   GPIOD->CRL = GPIOD->CRL | (0x01 << 20); // output push-pull b0001
 }