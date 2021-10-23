/*
 * LED.h
 * Created: 8/30/2021 6:37:03 PM
 *  Author: MOHAMED_HELMY
 */ 


#ifndef LED_H_
#define LED_H_

#include "STD_TYPES.h"

/***** PROTOTYPES *****/
void LED_INIT   (uint8);
void LED_ON     (uint8);
void LED_OFF    (uint8);
void LED_TOGGLE (uint8);
void LEDS_ON    (void);
void LEDS_OFF   (void);
/******* MACROS *******/
#define R_LED   0
#define M_LED   1
#define L_LED   2

#endif /* LED_H_ */