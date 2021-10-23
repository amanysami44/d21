/*
 * LED.c
 * Created: 8/30/2021 6:36:51 PM
 *  Author: MOHAMED_HELMY
 */ 

#include "LED_CFG.h"
#include "DIO.h"

void LED_INIT   (uint8 led)
{
	switch(led)
	{
		case 0:
		PIN_MODE(R_LED_PIN,OUTPUT);
		break;
		case 1:
		PIN_MODE(M_LED_PIN,OUTPUT);
		break;
		case 2:
		PIN_MODE(L_LED_PIN,OUTPUT);
		break;
	}
}
void LED_ON     (uint8 led)
{
	switch(led)
	{
		case 0:
		PIN_WRITE(R_LED_PIN,HIGH);
		break;
		case 1:
		PIN_WRITE(M_LED_PIN,HIGH);
		break;
		case 2:
		PIN_WRITE(L_LED_PIN,HIGH);
		break;
	}
}
void LED_OFF    (uint8 led)
{
	switch(led)
	{
		case 0:
		PIN_WRITE(R_LED_PIN,LOW);
		break;
		case 1:
		PIN_WRITE(M_LED_PIN,LOW);
		break;
		case 2:
		PIN_WRITE(L_LED_PIN,LOW);
		break;
	}
}
void LED_TOGGLE (uint8 led)
{
		switch(led)
		{
			case 0:
			PIN_TOGGLE(R_LED_PIN);
			break;
			case 1:
			PIN_TOGGLE(M_LED_PIN);
			break;
			case 2:
			PIN_TOGGLE(L_LED_PIN);
			break;
		}
}
void LEDS_ON    (void)
{
		PIN_WRITE(R_LED_PIN,HIGH);
		PIN_WRITE(M_LED_PIN,HIGH);
		PIN_WRITE(L_LED_PIN,HIGH);
}
void LEDS_OFF   (void)
{
		PIN_WRITE(R_LED_PIN,LOW);
		PIN_WRITE(M_LED_PIN,LOW);
		PIN_WRITE(L_LED_PIN,LOW);
}