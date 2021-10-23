/*
 * GccApplication1.c
 * Created: 8/30/2021 10:54:58 AM
 * Author : MOHAMED_HELMY
 */ 

#include "LED.h"
#include "BUZZER.h"
#include "RELAY.h"

#include "DIO.h"
#include "P_B.h"
#include "S_SEG.h"
#include "LCD.h"
#include "KEY_PAD.h"
#include "EX_INT.h"
#include "ADC.h"
#include <avr/interrupt.h>
#define  F_CPU 16000000UL
#include "util/delay.h"

int main(void)
{
	
	LED_INIT(L_LED);
	LED_INIT(M_LED);
	BUZZER_INIT();
	RELAY_INIT();
	P_B_INIT(P_B_2);
	//	EXTERNAL_INT_0_INIT();  //We can use it  (BOUNCING)

	
	//at first led and buzzer are ON 
	  LED_ON(L_LED);
		BUZZER_ON();
		_delay_ms(100);
		LED_OFF(L_LED);
		BUZZER_OFF();
	
	while(1)
	{
		
			
	if(P_B_READ(P_B_2)==HIGH)
	{ 
		_delay_ms(100);       //debouncing 
		if(P_B_READ(P_B_2)==HIGH)
		{
			while(P_B_READ(P_B_2)==HIGH)
			{
				
			}
			RELAY_TOGGEL();
		}
			
			
	}
	// led on while relay on 
	if(RELAY_READ()==HIGH)
	
	{
		LED_ON(M_LED);
		
	}
	else 
	{
		LED_OFF(M_LED);
	}
	
		
	
	
	}
}
	
ISR(INT0_vect)
{
	RELAY_TOGGEL();
	if(RELAY_READ()==HIGH)
	
	{
		LED_ON(M_LED);
		
	}
	else
	{
		LED_OFF(M_LED);
	}
}