
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
*   @file     Dio.c
*   @brief    Digital IO module
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
#include "Dio.h"
#include "Dio_Cfg.h"
#include "Reg_Ecu_Gpio.h"
#include "Eco_util.h"

/*-----------------------------------------------------------------------------*
 * -FILE VERSION
 *-----------------------------------------------------------------------------*/
#define DIO_C_MAJOR_VERSION               1
#define DIO_C_MINOR_VERSION               0
#define DIO_C_PATCH_VERSION               0

/*-----------------------------------------------------------------------------*
 * -DEFINITION AND TYPEDEF
 *-----------------------------------------------------------------------------*/

/*-----------------------------------------------------------------------------*
 * -ENUMS
 *-----------------------------------------------------------------------------*/

/*-----------------------------------------------------------------------------*
 * -GLOBAL VARIABLE DECLARATIONS
 *-----------------------------------------------------------------------------*/

/*-----------------------------------------------------------------------------*
 * -LOCAL VARIABLE DECLARATIONS
 *-----------------------------------------------------------------------------*/

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
/** - Service Name : Dio_WriteChannel
  * - Sync/Async   : Synchronous
  * - Param(in)    : GPIO channel ID
  * - Param(in)    : GPIO Level(STD_HIGH/STD_LOW)
  * - Return value : None
  * - Description  : TODO
  */
ECO_FUNC( void, DIO ) Dio_WriteChannel( Dio_ChannelType ChannelId, \
                                        Dio_LevelType Level )
{
    if ( DIO_CHANNEL_NUM <= ChannelId )
    {
        ;/* TODO: Det_ReportError */
    }
    else
    {
        if ( (Dio_LevelType)STD_HIGH == Level )
        {
            ECO_UTIL_BITSET(GPIO_POR_ADDR(DIO_CFG_GPIO_ID(ChannelId)),DIO_CFG_PIN_NUM(ChannelId));
        }
        else if ( (Dio_LevelType)STD_LOW == Level )
        {
            ECO_UTIL_BITRESET(GPIO_POR_ADDR(DIO_CFG_GPIO_ID(ChannelId)),DIO_CFG_PIN_NUM(ChannelId));
        }
        else
        {
            ;/* TODO: Det_ReportError */
        }
    }
}

/*-----------------------------------------------------------------------------*/
/** - Service Name : Dio_ReadChannel
  * - Sync/Async   : Synchronous
  * - Param(in)    : GPIO channel ID
  * - Return value : GPIO Level(STD_HIGH/STD_LOW)
  * - Description  : TODO
  */
ECO_FUNC( Dio_LevelType, DIO ) Dio_ReadChannel( Dio_ChannelType ChannelId )
{
    Dio_LevelType tRetVal;

    if ( DIO_CHANNEL_NUM <= ChannelId )
    {
        ;/* TODO: Det_ReportError */
    }
    else
    {
        if ( ECO_UTIL_BIT_IS_SET(GPIO_POR_ADDR(DIO_CFG_GPIO_ID(ChannelId)),DIO_CFG_PIN_NUM(ChannelId)) )
        {
            tRetVal = (Dio_LevelType)STD_HIGH;
        }
        else if ( ECO_UTIL_BIT_IS_CLEAR(GPIO_POR_ADDR(DIO_CFG_GPIO_ID(ChannelId)),DIO_CFG_PIN_NUM(ChannelId)) )
        {
            tRetVal = (Dio_LevelType)STD_LOW;
        }
        else
        {
            ;/* TODO: Det_ReportError */
        }
    }
}

/*-----------------------------------------------------------------------------*/
/** - Service Name : Dio_GetVersionInfo
  * - Sync/Async   : Synchronous
  * - Param(out)   : TODO
  * - Return value : none
  * - Description  : TODO
  */
ECO_FUNC( void, DIO ) Dio_GetVersionInfo(  )
{

}
/*-----------------------------------------------------------------------------*
 * -END OF FILE
 *-----------------------------------------------------------------------------*/
