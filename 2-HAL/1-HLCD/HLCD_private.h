/************************************************************************/
/**************** Name    : Mohamed Ahmed Abdelhamid ********************/
/**************** Date    :       28/05/2022         ********************/
/**************** SWC     :         HLCD             ********************/
/**************** Version :         1.0              ********************/
/************************************************************************/

#ifndef HLCD_PRIVATE_H
#define HLCD_PRIVATE_H


/*******************************************************************************************************/
/*                              Configure LCD to Send Data Function                                    */
/*                                    Accessed Locally Only                                            */
/*******************************************************************************************************/
static void HLCD_voidSendChar (u8 Copy_u8Char);
/*#####################################################################################################*/


/*******************************************************************************************************/
/*                                     Macros for LCD MODE                                             */
/*******************************************************************************************************/

#define LCD_4_BIT_MODE     0
#define LCD_8_BIT_MODE     1
/*#####################################################################################################*/


/*******************************************************************************************************/
/*                                     Macros for LCD Control                                          */
/*******************************************************************************************************/

#define FUNCTION_SET_4BITS      0b00101000
#define FUNCTION_SET_8BITS      0b00111000
#define LCD_DISPLAY_ON_OFF      0b00001100
#define LCD_DISPLAY_CLEAR       0b00000001
#define LCD_ENTRY_MODE          0b00000110

#define LCD_BLINKER_OFF         0b00001100
#define LCD_SHIFT_RIGHT         0b00011100
#define LCD_SHIFT_LEFT          0b00011000
/*#####################################################################################################*/







#endif
