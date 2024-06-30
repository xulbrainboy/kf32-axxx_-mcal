
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
*   @file     Mcu.c
*   @brief    TODO
*   @details  TODO
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
#include "Mcu.h"
#include "Mcu_Cfg.h"

/*-----------------------------------------------------------------------------*
 * -FILE VERSION
 *-----------------------------------------------------------------------------*/
#define MCU_C_MAJOR_VERSION               1
#define MCU_C_MINOR_VERSION               0
#define MCU_C_PATCH_VERSION               0

/*-----------------------------------------------------------------------------*
 * -DEFINITION AND TYPEDEF
 *-----------------------------------------------------------------------------*/
#define MCU_INITIALIZED                (1U)
#define MCU_NOT_INITIALIZED            (0U)

/*-----------------------------------------------------------------------------*
 * -ENUMS
 *-----------------------------------------------------------------------------*/

/*-----------------------------------------------------------------------------*
 * -GLOBAL VARIABLE DECLARATIONS
 *-----------------------------------------------------------------------------*/

/*-----------------------------------------------------------------------------*
 * -LOCAL VARIABLE DECLARATIONS
 *-----------------------------------------------------------------------------*/
static ECO_CONSTPVAR(Mcu_ConfigType, MCU)Mcu_sConfPtr;
static ECO_VAR(u1, MCU)Mcu_sState = MCU_NOT_INITIALIZED;

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
/** - Service Name : Mcu_Init
  * - Sync/Async   : Synchronous
  * - Param(in)    : TODO
  * - Return value : TODO
  * - Description  : TODO
  */
ECO_FUNC( void, MCU ) Mcu_Init( const Mcu_ConfigType* tConfigPtr )
{
    if ( tConfigPtr == NULL_PTR )
    {
        Mcu_sConfPtr = &Mcu_ConfData;
    }
    else
    {
        Mcu_sConfPtr = tConfigPtr;
    }
    Mcu_sState = MCU_INITIALIZED;
}

/*-----------------------------------------------------------------------------*/
/** - Service Name : Mcu_InitRamSection
  * - Sync/Async   : Synchronous
  * - Param(in)    : TODO
  * - Return value : TODO
  * - Description  : TODO
  */
ECO_FUNC( Std_ReturnType, MCU ) Mcu_InitRamSection( Mcu_RamSectionType tRamSection )
{
    Std_ReturnType tRetVal = E_NOT_OK;
    u4 tRamIdx = 0U;
    const Mcu_RamSectorSettingConfigType *tRamConfPtr;

    if ( MCU_NOT_INITIALIZED == Mcu_sState )
    {
        /* report error */
    }
    else if ( ( tRamSection > Mcu_sConfPtr->McuRamSectionNum )
           || ( 0U == Mcu_sConfPtr->McuRamSectionNum         ) )
    {
        /* report error */
    }
    else if ( NULL_PTR == Mcu_sConfPtr->McuRamSectionSettingPtr )
    {
        /* report error */
    }
    else
    {
        tRamConfPtr = &(*Mcu_sConfPtr->McuRamSectionSettingPtr)[tRamSection];

        /* execute the init */
        for ( tRamIdx = 0; tRamIdx < tRamConfPtr->McuRamSectionSize; tRamIdx++ )
        {
            (*tRamConfPtr->McuRamSectionStartAddress)[tRamIdx] = tRamConfPtr->McuRamDefaultValue;
        }

        tRetVal = E_OK;

        /* check init seccuess or not */
        for ( tRamIdx = 0; tRamIdx < tRamConfPtr->McuRamSectionSize; tRamIdx++ )
        {
            if ( (*tRamConfPtr->McuRamSectionStartAddress)[tRamIdx] != tRamConfPtr->McuRamDefaultValue )
            {
                tRetVal = E_NOT_OK;
                break;
            }
        }
    }

    return tRetVal;
}

/*-----------------------------------------------------------------------------*/
/** - Service Name : Mcu_InitClock
  * - Sync/Async   : Synchronous
  * - Param(in)    : TODO
  * - Return value : TODO
  * - Description  : TODO
  */
ECO_FUNC( Std_ReturnType, MCU ) Mcu_InitClock( Mcu_ClockType tClockSetting )
{

}

/*-----------------------------------------------------------------------------*/
/** - Service Name : Mcu_DistributePllClock
  * - Sync/Async   : Synchronous
  * - Param(in)    : TODO
  * - Return value : TODO
  * - Description  : TODO
  */
ECO_FUNC( Std_ReturnType, GPT ) Mcu_DistributePllClock( void )
{

}

/*-----------------------------------------------------------------------------*/
/** - Service Name : Mcu_GetPllStatus
  * - Sync/Async   : Synchronous
  * - Param(in)    : TODO
  * - Return value : TODO
  * - Description  : TODO
  */
ECO_FUNC( Mcu_PllStatusType, MCU ) Mcu_GetPllStatus( void )
{

}

/*-----------------------------------------------------------------------------*/
/** - Service Name : Mcu_GetResetReason
  * - Sync/Async   : Synchronous
  * - Param(in)    : TODO
  * - Return value : TODO
  * - Description  : TODO
  */
ECO_FUNC( Mcu_ResetType, MCU ) Mcu_GetResetReason( void )
{

}

/*-----------------------------------------------------------------------------*/
/** - Service Name : Mcu_GetResetRawValue
  * - Sync/Async   : Synchronous
  * - Param(in)    : TODO
  * - Return value : TODO
  * - Description  : TODO
  */
ECO_FUNC( Mcu_RawResetType, MCU ) Mcu_GetResetRawValue( void )
{

}

/*-----------------------------------------------------------------------------*/
/** - Service Name : Mcu_PerformReset
  * - Sync/Async   : Synchronous
  * - Param(in)    : TODO
  * - Return value : TODO
  * - Description  : TODO
  */
ECO_FUNC( void, MCU ) Mcu_PerformReset( void )
{

}

/*-----------------------------------------------------------------------------*/
/** - Service Name : Mcu_SetMode
  * - Sync/Async   : Synchronous
  * - Param(in)    : TODO
  * - Return value : TODO
  * - Description  : TODO
  */
ECO_FUNC( void, MCU ) Mcu_SetMode( void )
{

}

/*-----------------------------------------------------------------------------*/
/** - Service Name : Mcu_GetRamState
  * - Sync/Async   : Synchronous
  * - Param(in)    : TODO
  * - Return value : TODO
  * - Description  : TODO
  */
ECO_FUNC( Mcu_RamStateType, MCU ) Mcu_GetRamState( void )
{

}

/*-----------------------------------------------------------------------------*/
/** - Service Name : Gpt_GetVersionInfo
  * - Sync/Async   : Synchronous
  * - Param(out)   : TODO
  * - Return value : none
  * - Description  : TODO
  */
ECO_FUNC( void, MCU ) Mcu_GetVersionInfo( Std_VersionInfoType* tVersioninfo )
{

}
/*-----------------------------------------------------------------------------*
 * -END OF FILE
 *-----------------------------------------------------------------------------*/
