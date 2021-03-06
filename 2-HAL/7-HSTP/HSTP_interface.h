/************************************************************************/
/**************** Name    : Mohamed Ahmed Abdelhamid ********************/
/**************** Date    :       01/06/2022         ********************/
/**************** SWC     :         HSTP             ********************/
/**************** Version :         1.0              ********************/
/************************************************************************/
#ifndef HSTP_INTERFACE_H
#define HSTP_INTERFACE_H

/*******************************************************************************************************/
/*                                 Macros for Stepper Motor Direction                                  */
/*******************************************************************************************************/
#define STPR_Clockwise                     0
#define STPR_AntiClockwise                 1
/*#####################################################################################################*/


/*******************************************************************************************************/
/*                                   Prototypes of the Stepper Motor driver                            */
/*******************************************************************************************************/

u8 Stepper_u8Rotation(u16 Copy_u16Angle , u8 Copy_u8Direction);

void Stepper_voidStop(void);

/*#####################################################################################################*/


#endif
