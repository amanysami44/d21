/*
 * ADC.c
 *
 * Created: 17/09/2021 05:08:02 م
 *  Author: dell
 */ 
#include "BIT_MATH.h"
#include "REG.h"

void ADC_INIT(void)
{
	/*_TO_SELECT_AVCC_IN_VREF_*/
	SET_BIT(ADMUX,6);
	CLR_BIT(ADMUX,7);
	/*_TO_CHOOSE_RIGHT_ADJUSTMENT_*/
	CLR_BIT(ADMUX,5);
	/*_TO_SELECT_CHANNEL_1_*/
	SET_BIT(ADMUX,0);
	CLR_BIT(ADMUX,1);
	CLR_BIT(ADMUX,2);
	CLR_BIT(ADMUX,3);
	CLR_BIT(ADMUX,4);
	/*_TO_SELECT_DEVISION_FACTOR_128_AT_PRESCALER_*/
	SET_BIT(ADCSRA,0);
	SET_BIT(ADCSRA,1);
	SET_BIT(ADCSRA,2);
	/*_TO_ENABLE_ADC_*/
	SET_BIT(ADCSRA,7);
	/*_TO_SELECT_AUTO_TRIGGER_MODE_*/
	SET_BIT(ADCSRA,5);
}
u16  ADC_READ(void)
{
	/*_TO_START_CONVERSION_*/
	SET_BIT(ADCSRA,6);
	while (GET_BIT(ADCSRA,4) == 0)
	{
	}
	u16 value = ADC_VALUE;
	return value;		
}