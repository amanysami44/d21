/*
 * LCD_CFG.h
 * Created: 8/31/2021 12:58:39 PM
 *  Author: MOHAMED_HELMY
 */ 


#ifndef LCD_CFG_H_
#define LCD_CFG_H_

/********_SELECT_THE_LCD_MODE_********/
/*_OPTIONS_1_-> [_4_BIT_MODE] ********/
/*_OPTIONS_2_-> [_8_BIT_MODE] ********/
#define LCD_MODE         _4_BIT_MODE
/*************************************/


#define LCD_EN_PIN       PD0
#define LCD_RS_PIN       PD1
#define LCD_RW_PIN       PD2

#define LCD_D0_PIN       PA0      /*_THIS_PART_NEEDED_ONLY_IN_8_BIT_MODE*/
#define LCD_D1_PIN       PA1      /*_THIS_PART_NEEDED_ONLY_IN_8_BIT_MODE*/
#define LCD_D2_PIN       PA2      /*_THIS_PART_NEEDED_ONLY_IN_8_BIT_MODE*/
#define LCD_D3_PIN       PA3      /*_THIS_PART_NEEDED_ONLY_IN_8_BIT_MODE*/

#define LCD_D4_PIN       PC4
#define LCD_D5_PIN       PC5
#define LCD_D6_PIN       PC6
#define LCD_D7_PIN       PC7

#define LCD_DATA_PORT     C

#endif /* LCD_CFG_H_ */