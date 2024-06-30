
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
*   @file           : Mcu_Cfg.c
*   @brief          : configration file
*   @Generated Date : 
*   @details        : 
*/
/*=============================================================================*/

/*-----------------------------------------------------------------------------*
 * -INCLUDE FILES
 *-----------------------------------------------------------------------------*/
#include "Mcu_Cfg.h"

/*-----------------------------------------------------------------------------*
 * -FILE VERSION
 *-----------------------------------------------------------------------------*/
#define MCU_CFG_C_MAJOR_VERSION               1
#define MCU_CFG_C_MINOR_VERSION               0
#define MCU_CFG_C_PATCH_VERSION               0

/*-----------------------------------------------------------------------------*
 * -DEFINITION AND TYPEDEF
 *-----------------------------------------------------------------------------*/

/*-----------------------------------------------------------------------------*
 * -ENUMS
 *-----------------------------------------------------------------------------*/

/*-----------------------------------------------------------------------------*
 * -LOCAL VARIABLE DECLARATIONS
 *-----------------------------------------------------------------------------*/
static ECO_CONSTVAR(Mcu_PLLConfigType, MCU)Mcu_PLL_ConfData =
{
    /* McuPLLIsEnable */
    TRUE,
    /* 放大倍数=PLL_M/（PLL_N*PLL_NO）, 外部晶振=40MHZ PLL= 120MHZ */
    /* MCU PLL NO : 1/2/4/8选其中1个 */
    0x01U,
    /* MCU PLL M : 0X04-0X3FFF范围(M要大于等于4, 并且满足200MHZ<（M*输入参考频率/N）<400MHZ) */
    0x06U,
    /* MCU PLL N : 0X01-0XF范围,并且满足1MHZ<（输入参考频率/N）<50MHZ */
    0x02U,
}

static ECO_CONSTVAR(Mcu_ClockSettingConfigType, MCU)Mcu_ClockConfData[MCU_CLOCKSETTING_MAXNUM] =
{
    /* INTLF */
    {
        /* MCU frequency HZ*/
        32000,
        /* MCU OSC Source */
        0xFF, /* INVALID */
        /* MCU OSC DIV */
        0xFF, /* INVALID */
    },
    /* SLCK */
    {
        /* MCU frequency HZ*/
        120000000,
        /* MCU OSC Source */
        0x04, /* PLL : 10x */
        /* MCU OSC DIV */
        0,  /* 1/1 */
    },
    /* HFCK */
    {
        /* MCU frequency HZ*/
        30000000,
        /* MCU OSC Source */
        0x04, /* PLL : 10x */
        /* MCU OSC DIV */
        2,  /* 1/4 */
    },
    /* LFCK */
    {
        /* MCU frequency HZ*/
        32000,
        /* MCU OSC Source */
        0x00, /* INTLF : 0 */
        /* MCU OSC DIV */
        0,    /* 1/1 */
    },
    /* LP4M */
    {
        /* MCU frequency HZ*/
        4000000,
        /* MCU OSC Source */
        0xFF, /* INVALID */
        /* MCU OSC DIV */
        0xFF, /* INVALID */
    },
    /* CK48M */
    {
        /* MCU frequency HZ*/
        30000000,
        /* MCU OSC Source */
        0x04, /* PLL : 10x */
        /* MCU OSC DIV */
        2,    /* 1/4 */
    },
    /* CLKOUT */
    {
        /* MCU frequency HZ*/
        120000000,
        /* MCU OSC Source */
        0x05, /* PLL : 101 */
        /* MCU OSC DIV */
        1,
    },
};

static ECO_CONSTVAR(Mcu_PerClockConfigType, MCU)Mcu_PerClockConfData =
{
    /* PCLK_CTL0 */
    0x000000FF,      /* GPIOH|GPIOG|GPIOF|GPIOE|GPIOD|GPIOC|GPIOB|GPIOA */
    /* PCLK_CTL1 */
    0x00000000,
    /* PCLK_CTL2 */
    0x00000000,
    /* PCLK_CTL3 */
    0x00000000,
};

static ECO_CONSTVAR(Mcu_RamSectorSettingConfigType, MCU)Mcu_RamSetConfData[MCU_RAMSECTION_MAXNUM] =
{
  /* MCU_RAMSECTION_1 */
  {
    /* McuRamDefaultValue */
    0xFF,
    /* McuRamSectionStartAddress */
    0xFFFFFFFF, /* INVAILD */
    /* McuRamSectionSize */
    0xFFFFFFFF, /* INVAILD */
  },
};

/*-----------------------------------------------------------------------------*
 * -GLOBAL VARIABLE DECLARATIONS
 *-----------------------------------------------------------------------------*/
ECO_CONSTVAR(Mcu_ConfigType, MCU)Mcu_ConfData =
{
    Mcu_PLL_ConfData,
    &Mcu_ClockConfData,
    Mcu_PerClockConfData,
    0x0U,
    &Mcu_RamSetConfData,
};

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



/*-----------------------------------------------------------------------------*
 * -END OF FILE
 *-----------------------------------------------------------------------------*/
