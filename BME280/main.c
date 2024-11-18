/*
 * BME280.c
 *
 * Created: 17/11/2024 03:34:04 a. m.
 * Author : nieto
 */ 

#include "LCD.h"
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
    /* Replace with your application code */
    while (1) 
    {
		uint8_t temperature = 16; //C
		uint8_t rel_humidity = 42; //%
		
		initLCD();
		//updateLCDScreen(row on LCD, "Text 1", number, "Text 2");
		updateLCDScreen(1, "Hello there! ", NONE , "NONE"); 
		_delay_ms(1000);
	
		updateLCDScreen(1, "CLEAR", NONE, "NONE");
		updateLCDScreen(1, "Temperature:", temperature, " C");

		updateLCDScreen(2, "Humidity: ", rel_humidity, "%");
		_delay_ms(1000);
    }
}

