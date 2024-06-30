
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
*   @file     Mcu_Type.h
*   @brief    
*   @details  
*/

#ifndef MCU_TYPE_H
#define MCU_TYPE_H

/*-----------------------------------------------------------------------------*
 * -INCLUDE FILES
 *-----------------------------------------------------------------------------*/
#include "EcoBase_Type.h"

/*-----------------------------------------------------------------------------*
 * -DEFINITION AND TYPEDEF
 *-----------------------------------------------------------------------------*/
#define MCU

typedef u4 Mcu_ClockType;

typedef u4 Mcu_ModeType;

typedef u4 Mcu_RamSectionType;

typedef u4 Mcu_RawResetType;

typedef enum
{
    MCU_POWER_ON_RESET,
    MCU_BROWN_OUT_RESET,
    MCU_NRST_RESET,
    MCU_WATCHDOG_RESET,
    MCU_SW_RESET,
    MCU_RESET_UNDEFINED,
}Mcu_ResetType;

typedef enum
{
    MCU_PLL_LOCKED,
    MCU_PLL_UNLOCKED,
    MCU_PLL_STATUS_UNDEFINED,
}Mcu_PllStatusType;

typedef enum
{
    MCU_RAMSTATE_INVALID,
    MCU_RAMSTATE_VALID,
}Mcu_RamStateType;

typedef struct
{
    /**
      * MCU PLL Enable or not
     */
    tf McuPLLIsEnable;

    /**
      * MCU PLL NO
     */
    u4 McuPLL_NO;

    /**
      * MCU PLL M
     */
    u4 McuPLL_M;

    /**
      * MCU PLL N
     */
    u4 McuPLL_N;
}Mcu_PLLConfigType;

typedef struct
{
    /**
      * MCU frequency  unit: Hz
     */
    u4 McuClockFrequency;

    /**
      * MCU OSC Source
     */
    u4 McuOSC_Src;

    /**
      * MCU OSC DIV
     */
    u4 McuOSC_Div;

}Mcu_ClockSettingConfigType;

typedef struct
{
    /**
      * MCU PCLK_CTL0 Peripheral Clock config
     */
    u4 McuPCLK_CTL0Config;

    /**
      * MCU PCLK_CTL1 Peripheral Clock config
     */
    u4 McuPCLK_CTL1Config;

    /**
      * MCU PCLK_CTL2 Peripheral Clock config
     */
    u4 McuPCLK_CTL2Config;

    /**
      * MCU PCLK_CTL3 Peripheral Clock config
     */
    u4 McuPCLK_CTL3Config;

}Mcu_PerClockConfigType;

typedef struct
{
    /**
      * MCU RAM section initialized value
     */
    u4 McuRamDefaultValue;

    /**
      * MCU RAM section start address
     */
    u4 McuRamSectionStartAddress;

    /**
      * MCU RAM section size
     */
    u4 McuRamSectionSize;
}Mcu_RamSectorSettingConfigType;

typedef struct
{
    const Mcu_PLLConfigType McuPLLConfigData;
    const Mcu_ClockSettingConfigType * McuClockSettingConfigPtr;
    const Mcu_PerClockConfigType McuPerConfigData;
    const Mcu_RamSectionType McuRamSectionNum;
    const Mcu_RamSectorSettingConfigType * McuRamSectionSettingPtr;
}Mcu_ConfigType;

/*-----------------------------------------------------------------------------*
 * -ENUMS
 *-----------------------------------------------------------------------------*/

/*-----------------------------------------------------------------------------*
 * -GLOBAL VARIABLE DECLARATIONS
 *-----------------------------------------------------------------------------*/

/*-----------------------------------------------------------------------------*
 * -FUNCTION PROTOTYPES
 *-----------------------------------------------------------------------------*/

#endif /* MCU_TYPE_H */

