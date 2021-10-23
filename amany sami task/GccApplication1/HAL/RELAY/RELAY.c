/*
 * RELAY.c
 * Created: 8/30/2021 11:03:11 PM
 *  Author: MOHAMED_HELMY
 */ 

#include "RELAY_CFG.h"
#include "DIO.h"

void RELAY_INIT (void)
{
	PIN_MODE(RELAY_PIN,OUTPUT);
}
void RELAY_ON   (void)
{
	PIN_WRITE(RELAY_PIN,HIGH);
}
void RELAY_OFF  (void)
{
	PIN_WRITE(RELAY_PIN,LOW);
}
void RELAY_TOGGEL (void)
{
	PIN_TOGGLE(RELAY_PIN);
	
}
u8 RELAY_READ (void)
{
	u8 value = 0;
	value= PIN_READ(RELAY_PIN);

	return value;
}