
/*******************************************************************************
*   Project              : none                                               **
*   Peripheral           : none                                               **
*   Dependencies         : none                                               **
*                                                                             **
*   SW Version           : 1.0.0                                              **
*   (c) Copyright xxx                                                         **
*   All Rights Reserved.                                                      **
********************************************************************************/
/*=============================================================================*/
/**
*   @file     Port.c
*   @brief    
*   @details  
*/
/*-----------------------------------------------------------------------------*
 * -REVISION HISTORY:
 *-----------------------------------------------------------------------------*/
/*  -VERSION-   -DATE-       -AUTHOR-    -COMMENT-
 *  V1.0.0      2021-12-07   LIANG.X     First Version
 *
 */
/*=============================================================================*/

/*-----------------------------------------------------------------------------*
 * -INCLUDE FILES
 *-----------------------------------------------------------------------------*/
#include "Port.h"
#include "Port_Cfg.h"
#include "Reg_Ecu_Gpio.h"
#include "Eco_util.h"

/*-----------------------------------------------------------------------------*
 * -FILE VERSION
 *-----------------------------------------------------------------------------*/
#define PORT_C_MAJOR_VERSION               1
#define PORT_C_MINOR_VERSION               0
#define PORT_C_PATCH_VERSION               0

/*-----------------------------------------------------------------------------*
 * -DEFINITION AND TYPEDEF
 *-----------------------------------------------------------------------------*/

#define PORT_INITIALIZED                (1U)
#define PORT_NOT_INITIALIZED            (0U)

/*-----------------------------------------------------------------------------*
 * -ENUMS
 *-----------------------------------------------------------------------------*/

/*-----------------------------------------------------------------------------*
 * -GLOBAL VARIABLE DECLARATIONS
 *-----------------------------------------------------------------------------*/

/*-----------------------------------------------------------------------------*
 * -LOCAL VARIABLE DECLARATIONS
 *-----------------------------------------------------------------------------*/
ECO_LOCALVAR(u1,PORT)Port_ModuleStatus = PORT_NOT_INITIALIZED;
/*-----------------------------------------------------------------------------*
 * -GLOBAL FUNCTION PROTOTYPES
 *-----------------------------------------------------------------------------*/

/*-----------------------------------------------------------------------------*
 * -LOCAL FUNCTIONS
 *-----------------------------------------------------------------------------*/

/*-----------------------------------------------------------------------------*
 * -GLOBAL FUNCTIONS
 *-----------------------------------------------------------------------------*/
/*-----------------------------------------------------------------------------*/
/** - Service Name : Port_Init
  * - Sync/Async   : Synchronous
  * - Param(in)    : TODO
  * - Return value : None
  * - Description  : TODO
  */
ECO_FUNC( void, PORT ) Port_Init( const Port_ConfigType* tConfPtr )
{
    u4 tIdx_u4 = 0;
    u1 tShiftVal_u1 = 0;

    if ( tConfPtr == NULL_PTR )
    {
        /* TODO : report error */
    }
    else
    {
        for ( tIdx_u4 = 0; tIdx_u4 < PORT_ALLSRC_NUM; tIdx_u4++ )
        {
            if ( tConfPtr[tIdx_u4].PortId >= GPIOx_TOTAL_NUM )
            {
                /* TODO : report error */
            }
            else if ( tConfPtr[tIdx_u4].PortPinNum >= GPIOx_TOTAL_PIN )
            {
                /* TODO : report error */
            }
            else
            {
                tShiftVal_u1 = (u1)( 2 * tConfPtr[tIdx_u4].PortPinNum )
                /********** Set Pin Mode **********/
                ECO_UTIL_REGCLEAR(GPIO_PMOD_ADDR(tConfPtr[tIdx_u4].PortId),0x03,tShiftVal_u1);
                ECO_UTIL_REGSET(GPIO_PMOD_ADDR(tConfPtr[tIdx_u4].PortId),tConfPtr[tIdx_u4].PortMode,tShiftVal_u1);

                if ( ( tConfPtr[tIdx_u4].PortMode == PORT_OUT )
                  || ( tConfPtr[tIdx_u4].PortMode == PORT_RMP ) )
                {
                    /********** Set Pin Open Drain **********/
                    ECO_UTIL_REGCLEAR(GPIO_PODR_ADDR(tConfPtr[tIdx_u4].PortId),0x01,tShiftVal_u1);
                    ECO_UTIL_REGSET(GPIO_PODR_ADDR(tConfPtr[tIdx_u4].PortId),tConfPtr[tIdx_u4].PortOpenDrain,tShiftVal_u1);
                }
                else
                {
                    ;/* do nothing */
                }
                /********** Set Pin Speed Control **********/
                ECO_UTIL_REGCLEAR(GPIO_OMOD_ADDR(tConfPtr[tIdx_u4].PortId),0x01,tShiftVal_u1);
                ECO_UTIL_REGSET(GPIO_OMOD_ADDR(tConfPtr[tIdx_u4].PortId),tConfPtr[tIdx_u4].PortSpeed,tShiftVal_u1);

                if ( tConfPtr[tIdx_u4].PortPulling == PORT_PULLUP )
                {
                    /********** Set Pin Pull Up And Clear Pull Down **********/
                    ECO_UTIL_REGCLEAR(GPIO_PUR_ADDR(tConfPtr[tIdx_u4].PortId),0x01,tShiftVal_u1);
                    ECO_UTIL_REGSET(GPIO_PUR_ADDR(tConfPtr[tIdx_u4].PortId),0x01,tShiftVal_u1);
                    ECO_UTIL_REGCLEAR(GPIO_PDR_ADDR(tConfPtr[tIdx_u4].PortId),0x01,tShiftVal_u1);
                }
                else if ( tConfPtr[tIdx_u4].PortPulling == PORT_PULLDOWN )
                {
                    /********** Set Pin Pull Down And Clear Pull Up **********/
                    ECO_UTIL_REGCLEAR(GPIO_PDR_ADDR(tConfPtr[tIdx_u4].PortId),0x01,tShiftVal_u1);
                    ECO_UTIL_REGSET(GPIO_PDR_ADDR(tConfPtr[tIdx_u4].PortId),0x01,tShiftVal_u1);
                    ECO_UTIL_REGCLEAR(GPIO_PUR_ADDR(tConfPtr[tIdx_u4].PortId),0x01,tShiftVal_u1);
                }
                else
                {
                    /********** Clear Pull Down And Clear Pull Up **********/
                    ECO_UTIL_REGCLEAR(GPIO_PDR_ADDR(tConfPtr[tIdx_u4].PortId),0x01,tShiftVal_u1);
                    ECO_UTIL_REGCLEAR(GPIO_PUR_ADDR(tConfPtr[tIdx_u4].PortId),0x01,tShiftVal_u1);
                }
            }
        }
        Port_ModuleStatus = PORT_INITIALIZED;
    }
}

#if( STD_ON == PORTSET_PIN_DIRECTION_API )
/*-----------------------------------------------------------------------------*/
/** - Service Name : Port_SetPinDirection
  * - Sync/Async   : Synchronous
  * - Param(in)    : TODO
  * - Return value : none
  * - Description  : TODO
  */
ECO_FUNC( void, PORT ) Port_SetPinDirection( Port_PinType  PinIdx,   \
                                             Port_ModeType Direction )
{
    u1 tShiftVal_u1 = 0;

    if ( Port_ModuleStatus != PORT_INITIALIZED )
    {
        /* TODO : report error */
    }
    else if ( PinIdx >= PORT_ALLSRC_NUM )
    {
        /* TODO : report error */
    }
    else
    {
        tShiftVal_u1 = (u1)( 2 * PORT_CFG_GET_PINNUM(PinIdx) )
        if ( Direction == PORT_IN )
        {
            ECO_UTIL_REGCLEAR(GPIO_PMOD_ADDR(PORT_CFG_GET_PORTID(PinIdx)),0x03,tShiftVal_u1);
            ECO_UTIL_REGSET(GPIO_PMOD_ADDR(PORT_CFG_GET_PORTID(PinIdx)),PORT_IN,tShiftVal_u1);
        }
        else if ( Direction == PORT_OUT )
        {
            ECO_UTIL_REGCLEAR(GPIO_PMOD_ADDR(PORT_CFG_GET_PORTID(PinIdx)),0x03,tShiftVal_u1);
            ECO_UTIL_REGSET(GPIO_PMOD_ADDR(PORT_CFG_GET_PORTID(PinIdx)),PORT_OUT,tShiftVal_u1);
        }
        else
        {
            ; /* do nothing */
        }
    }
}
#endif /* STD_ON == PORTSET_PIN_DIRECTION_API */

/*-----------------------------------------------------------------------------*/
/** - Service Name : Port_GetVersionInfo
  * - Sync/Async   : Synchronous
  * - Param(out)   : TODO
  * - Return value : none
  * - Description  : TODO
  */
ECO_FUNC( void, DIO ) Port_GetVersionInfo(  )
{

}
/*-----------------------------------------------------------------------------*
 * -END OF FILE
 *-----------------------------------------------------------------------------*/
