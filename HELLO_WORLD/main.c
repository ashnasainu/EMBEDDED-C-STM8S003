 /*LCD --> STM8s
 * LCD_RS --> PA1
 * LCD_EN --> PA2
 * LCD_DB4 --> PD1
 * LCD_DB5 --> PD2
 * LCD_DB6 --> PD3
 * LCD_DB7 --> PD4
 */
 
 #define LCD_RS     GPIOC, GPIO_PIN_7
 #define LCD_EN     GPIOC, GPIO_PIN_6
 #define LCD_DB4    GPIOC, GPIO_PIN_5
 #define LCD_DB5    GPIOC, GPIO_PIN_4
 #define LCD_DB6    GPIOC, GPIO_PIN_3
 #define LCD_DB7    GPIOB, GPIO_PIN_4
 #include "STM8S.h"
 #include "stm8s103_LCD_16x2.h"
 
main()
{
	//Variable declarations
	Lcd_Begin();
	Lcd_Clear();
	Lcd_Set_Cursor(1,1);
	Lcd_Print_String("HELLO WORLD");
	while (1)
	{ 
	}
}