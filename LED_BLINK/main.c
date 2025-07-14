#include "stm8s.h"

void delay(void) {
    volatile uint16_t i;
    for (i = 0; i < 30000; i++);
}

int main(void) {
    // Deinitialize all used GPIO ports
    GPIO_DeInit(GPIOA);
    GPIO_DeInit(GPIOB);
    GPIO_DeInit(GPIOC);
    GPIO_DeInit(GPIOD);

    // Set all 8 bits of each GPIO as output, push-pull, fast mode
    GPIO_Init(GPIOA, GPIO_PIN_ALL, GPIO_MODE_OUT_PP_LOW_FAST);
    GPIO_Init(GPIOB, GPIO_PIN_ALL, GPIO_MODE_OUT_PP_LOW_FAST);
    GPIO_Init(GPIOC, GPIO_PIN_ALL, GPIO_MODE_OUT_PP_LOW_FAST);
    GPIO_Init(GPIOD, GPIO_PIN_ALL, GPIO_MODE_OUT_PP_LOW_FAST);

    while (1) {
        // Toggle all pins
        GPIO_WriteReverse(GPIOA, GPIO_PIN_ALL);
        GPIO_WriteReverse(GPIOB, GPIO_PIN_ALL);
        GPIO_WriteReverse(GPIOC, GPIO_PIN_ALL);
        GPIO_WriteReverse(GPIOD, GPIO_PIN_ALL);

        delay();
    }
}
