#include <stdint.h>
#include <stm32f0xx.h>

#define LED_PIN GPIO_ODR_5

int main(void)
{
	/* Enable clock access to GPIOA */
	RCC->AHBENR |= RCC_AHBENR_GPIOAEN;
	GPIOA->MODER |= (1U<<10);
	GPIOA->MODER &= ~(1U<<11);

	while(1)
	{
	 /* Set PA5(LED_PIN) high */
	 GPIOA->ODR ^= LED_PIN;

	 /* simple delay*/
	 for(int i=0; i<100000;i++);

	}
}













