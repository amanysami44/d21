/*
 * TIMER.c
 *
 * Created: 18/09/2021 04:56:15 م
 *  Author: dell
 */ 
#include "BIT_MATH.h"
#include "REG.h"

u32 num_of_ov;

void TIMER_0_INIT(void)
{
	/*_TO_SELECT_NORMAL_MODE_*/
	#if TIMER_0_MODE == NORMAL
	CLR_BIT(TCCR0,3);
	CLR_BIT(TCCR0,6);
	#elif TIMER_0_MODE == PWM
	CLR_BIT(TCCR0,3);
	SET_BIT(TCCR0,6);
	#elif TIMER_0_MODE == CTC
	SET_BIT(TCCR0,3);
	CLR_BIT(TCCR0,6);
	#elif TIMER_0_MODE == FAST_PWM
	SET_BIT(TCCR0,3);
	SET_BIT(TCCR0,6);
	#endif
	
	SET_BIT(SREG,7);    // to enable global int
	SET_BIT(TIMSK,0);   // to enable timer0 int
	

}

void TIMER_0_START(u32 desired_time)
{
	u8  tick_time   = 1024 / 16;                    // result in micro second
	u32	total_ticks = (desired_time * 1000) / tick_time;
    num_of_ov       = total_ticks / 256;
	
	/*_TO_SELECT_1024_DEVISION_FACTOR_AT_PRE_SCALER_AND_START_TIMER_*/
	SET_BIT(TCCR0,0);
	CLR_BIT(TCCR0,1);
	SET_BIT(TCCR0,2);
}
void TIMER_0_STOP(void)
{
	CLR_BIT(TCCR0,0);
	CLR_BIT(TCCR0,1);
	CLR_BIT(TCCR0,2);
}