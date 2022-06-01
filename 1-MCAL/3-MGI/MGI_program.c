/************************************************************************/
/**************** Name    : Mohamed Ahmed Abdelhamid ********************/
/**************** Date    :       01/06/2022         ********************/
/**************** SWC     :         MGI              ********************/
/**************** Version :         1.0              ********************/
/************************************************************************/

/*******************************************************************************************************/
/*                                       Include LIB Layer                                             */
/*******************************************************************************************************/
#include "../../LIB/LBIT_MATH.h"
#include "../../LIB/LSTD_TYPES.h"

/*#####################################################################################################*/

/*******************************************************************************************************/
/*                                    Include MGI Header Files                                         */
/*******************************************************************************************************/
#include "../MGI/MGI_interface.h"
/*#####################################################################################################*/


/*******************************************************************************************************/
/*                                     Macros for HW Registers                                         */
/*******************************************************************************************************/
#define GI_u8_SREG              *((volatile u8*)0x5F)

/*#####################################################################################################*/





/*******************************************************************************************************/
/*                              Global Interrupt Enable  Function                                      */
/*******************************************************************************************************/
void GI_voidEnable (void)
{
	SET_BIT(GI_u8_SREG,7);
}

/*#####################################################################################################*/



/*******************************************************************************************************/
/*                             Global Interrupt Disable  Function                                      */
/*******************************************************************************************************/
void GI_voidDisable(void)
{
	CLR_BIT(GI_u8_SREG,7);
}

/*#####################################################################################################*/

