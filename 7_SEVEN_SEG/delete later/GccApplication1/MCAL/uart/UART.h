./*
 * UART.h
 *
 * Created: 10/8/2021 9:49:33 AM
 *  Author: lenovo
 */ 


#ifndef UART_H_
#define UART_H_
#include "STD_TYPES.h"

void UART_INIT(void);
void UART_SEND(u8 data);
u8 UART_REC(void);



#endif /* UART_H_ */