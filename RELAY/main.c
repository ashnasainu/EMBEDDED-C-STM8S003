#include "stm8s.h"

void delay(void)
{
    volatile uint16_t i;
    for (i = 0; i < 60000; i++);
}

int main(void) {
    
    GPIO_DeInit(GPIOA);  // Deinitialize all used GPIO ports

    
    //GPIO_Init(GPIOA, GPIO_PIN_2, GPIO_MODE_OUT_PP_HIGH_FAST);  // Set all 8 bits of each GPIO as output, push-pull, fast mode
   
    while (1) 
		{
       
				//GPIO_WriteReverse(GPIOA, GPIO_PIN_2);   // Toggle all pins
				//GPIO_WriteHigh(GPIOA, GPIO_PIN_2);         //  Make pin high

        delay();
    }
}
