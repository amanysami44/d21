/*
 * P_B.c
 * Created: 8/30/2021 11:19:19 PM
 *  Author: MOHAMED_HELMY
 */ 

#include "STD_TYPES.h"
#include "P_B_CFG.h"
#include "DIO.h"


void  P_B_INIT (uint8 button)
{
	switch(button)
	{
		case 0:
		PIN_MODE(BUTTON_0_PIN,INPUT);
		break;
		case 1:
		PIN_MODE(BUTTON_1_PIN,INPUT);
		break;
		case 2:
		PIN_MODE(BUTTON_2_PIN,INPUT);
		break;
	}
}
uint8 P_B_READ (uint8 button)
{
	uint8 value = 0;
	switch(button)
	{
		case 0:
		value = PIN_READ(BUTTON_0_PIN);
		break;
		case 1:
		value = PIN_READ(BUTTON_1_PIN);
		break;
		case 2:
		value = PIN_READ(BUTTON_2_PIN);
		break;
	}
	return value;	
}
