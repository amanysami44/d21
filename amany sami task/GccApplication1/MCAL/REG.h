/*
 * REG.h
 * Created: 8/29/2021 12:58:09 PM
 *  Author: MOHAMED_HELMY
 */ 


#ifndef REG_H_
#define REG_H_

#include "STD_TYPES.h"

/*************** DIO_REGISTERS *************/

#define PORTA      (*((volatile u8*)0x3B))
#define DDRA       (*((volatile u8*)0x3A))
#define PINA       (*((volatile u8*)0x39))

#define PORTB      (*((volatile u8*)0x38))
#define DDRB       (*((volatile u8*)0x37))
#define PINB       (*((volatile u8*)0x36))

#define PORTC      (*((volatile u8*)0x35))
#define DDRC       (*((volatile u8*)0x34))
#define PINC       (*((volatile u8*)0x33))

#define PORTD      (*((volatile u8*)0x32))
#define DDRD       (*((volatile u8*)0x31))
#define PIND       (*((volatile u8*)0x30))

/**************_EX_INT_REGISTERS_************/

#define SREG   (*(volatile u8*)(0x5F))
#define GICR   (*(volatile u8*)(0x5B))
#define GIFR   (*(volatile u8*)(0x5A))
#define MCUCR  (*(volatile u8*)(0x55))
#define MCUCSR (*(volatile u8*)(0x54))

/*****************_ADC_REGISTERS_***************/

#define ADMUX       (*(volatile u8*)(0x27))
#define ADCSRA      (*(volatile u8*)(0x26))
#define ADCL        (*(volatile u8*)(0x24))
#define ADCH        (*(volatile u8*)(0x25))
#define ADC_VALUE   (*(volatile u16*)(0x24))



#endif /* REG_H_ */