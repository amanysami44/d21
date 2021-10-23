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
#define  F_CPU 16000000UL
#include "util/delay.h"

int main(void)
{
	S_SEG_INIT();
    S_SEG_DISPLAY(12);
	S_SEG_TIMER(12);
}

