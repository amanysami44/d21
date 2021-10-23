/*
 * GccApplication1.c
 * Created: 8/30/2021 10:54:58 AM
 * Author : MOHAMED_HELMY
 */ 

#include "LED.h"
#include "BUZZER.h"
#include "RELAY.h"
#include "P_B.h"
#include "S_SEG.h"
#include "LCD.h"
#include "KEY_PAD.h"
#include "EX_INT.h"
#include "TEMP_S.h"
#include "TIMER.h"
#include <avr/interrupt.h>
#define  F_CPU 16000000UL
#include "util/delay.h"

extern u32 num_of_ov;

int main(void)
{
	TIMER_0_INIT();
	LED_INIT(M_LED);
	P_B_INIT(2);
	TIMER_0_START(300);
		
    while(1)
    {
		if (P_B_READ(2)==1)
		{
			//LED_TOGGLE(M_LED);
			//_delay_ms(500);
			TIMER_0_STOP();
		}
    }
}

ISR(INT0_vect)
{
	LED_TOGGLE(M_LED);
}

ISR(TIMER0_OVF_vect)
{
	static u8 x;
	x++;
	if(x == num_of_ov)
	{
		LED_TOGGLE(M_LED);
		x = 0;
	}
}
