/************************************************************************/
/**************** Name    : Mohamed Ahmed Abdelhamid ********************/
/**************** Date    :       28/05/2022         ********************/
/**************** SWC     :         HLCD             ********************/
/**************** Version :         1.0              ********************/
/************************************************************************/
#ifndef HLCD_CONFIG_H
#define HLCD_CONFIG_H

/*******************************************************************************************************/
/*                               Macros for LCD Pins Config                                            */
/*******************************************************************************************************/

#define LCD_u8_CONTROL_PORT         DIO_u8_PORTB
#define LCD_u8_RS_PIN               DIO_u8_PIN0
#define LCD_u8_RW_PIN               DIO_u8_PIN1
#define LCD_u8_E_PIN                DIO_u8_PIN2

#define LCD_u8_DATA_PORT            DIO_u8_PORTB

#define LCD_u8_4BIT_START_PIN       DIO_u8_PIN4
#define LCD_u8_4BIT_END_PIN         DIO_u8_PIN7
/*#####################################################################################################*/


/*******************************************************************************************************/
/*                               Macro for LCD Mode                                                    */
/*******************************************************************************************************/

#define LCD_MODE                    LCD_4_BIT_MODE
/*#####################################################################################################*/


#endif
