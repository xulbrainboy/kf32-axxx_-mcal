
/*******************************************************************************
*   Project              : none                                               **
*   Peripheral           : none                                               **
*   Dependencies         : none                                               **
*                                                                             **
*   SW Version           : 1.0.0                                              **
*   (c) Copyright xxx                                                         **
*   All Rights Reserved.                                                      **
********************************************************************************/
/**
*   @file     Reg_Ecu_Gpio.h
*   @brief    
*   @details  
*/
/*=============================================================================*/
/*-----------------------------------------------------------------------------*
 * -VERSION HISTORY
 *-----------------------------------------------------------------------------*/
/*  -VERSION-   -DATE-       -AUTHOR-    -COMMENT-
 *  V1.0.0      2021-11-20   LIANG.X     create
 *
 */
/*=============================================================================*/

#ifndef REG_KF32A_GPIO_H
#define REG_KF32A_GPIO_H

/*-----------------------------------------------------------------------------*
 * -INCLUDE FILES
 *-----------------------------------------------------------------------------*/
#include "Reg_KF32A.h"

/*-----------------------------------------------------------------------------*
 * -FILE VERSION
 *-----------------------------------------------------------------------------*/
#define REG_ECU_H_MAJOR_VERSION               1
#define REG_ECU_H_MINOR_VERSION               0
#define REG_ECU_H_PATCH_VERSION               0

/*-----------------------------------------------------------------------------*
 * -DEFINITION AND TYPEDEF
 *-----------------------------------------------------------------------------*/

#define GPIOx_TOTAL_NUM                     8UL  /* PORTA/B/C/D/E/F/G/H */
#define GPIOx_TOTAL_PIN                     0x10 /* every port total pin */

/**
 @brief  GPIO PIR Offset Size ( Input Rigister )
*/
#define PIR_OFFSET_SIZE                     ((u4)0x00000000)

/**
 @brief  GPIO POR Offset Size (Output Rigister)
*/
#define POR_OFFSET_SIZE                     ((u4)0x00000004)

/**
 @brief  GPIO PUR Offset Size (Up Rigister)
*/
#define PUR_OFFSET_SIZE                     ((u4)0x00000008)

/**
 @brief  GPIO PDR Offset Size (Down Rigister)
*/
#define PDR_OFFSET_SIZE                     ((u4)0x0000000C)

/**
 @brief  GPIO PODR Offset Size ( Rigister)
*/
#define PODR_OFFSET_SIZE                    ((u4)0x00000010)

/**
 @brief  GPIO PMOD Offset Size (Down Rigister)
*/
#define PMOD_OFFSET_SIZE                    ((u4)0x00000014)

/**
 @brief  GPIO OMOD Offset Size (Down Rigister)
*/
#define OMOD_OFFSET_SIZE                    ((u4)0x00000018)


/**
 @brief  GPIO Input Rigister Address
*/
#define GPIO_PIR_ADDR(GPIOx)  ((u4)(GPIO_BASEADDR + ((u4)(GPIOx) * (u4)0x40) + PIR_OFFSET_SIZE ))

/**
 @brief  GPIO Output Rigister Address
*/
#define GPIO_POR_ADDR(GPIOx)  ((u4)(GPIO_BASEADDR + ((u4)(GPIOx) * (u4)0x40) + POR_OFFSET_SIZE ))

/**
 @brief  GPIO Pull Up Rigister Address
*/
#define GPIO_PUR_ADDR(GPIOx)  ((u4)(GPIO_BASEADDR + ((u4)(GPIOx) * (u4)0x40) + PUR_OFFSET_SIZE ))

/**
 @brief  GPIO Pull Down Rigister Address
*/
#define GPIO_PDR_ADDR(GPIOx)  ((u4)(GPIO_BASEADDR + ((u4)(GPIOx) * (u4)0x40) + PDR_OFFSET_SIZE ))

/**
 @brief  GPIO Open Drain Control Rigister Address
*/
#define GPIO_PODR_ADDR(GPIOx)  ((u4)(GPIO_BASEADDR + ((u4)(GPIOx) * (u4)0x40) + PODR_OFFSET_SIZE ))

/**
 @brief  GPIO Direct Control Rigister Address
*/
#define GPIO_PMOD_ADDR(GPIOx)  ((u4)(GPIO_BASEADDR + ((u4)(GPIOx) * (u4)0x40) + PMOD_OFFSET_SIZE ))

/**
 @brief  GPIO Speed Control Rigister Address
*/
#define GPIO_OMOD_ADDR(GPIOx)  ((u4)(GPIO_BASEADDR + ((u4)(GPIOx) * (u4)0x40) + OMOD_OFFSET_SIZE ))

/*-----------------------------------------------------------------------------*
 * -ENUMS
 *-----------------------------------------------------------------------------*/

/*-----------------------------------------------------------------------------*
 * -GLOBAL VARIABLE DECLARATIONS
 *-----------------------------------------------------------------------------*/

/*-----------------------------------------------------------------------------*
 * -FUNCTION PROTOTYPES
 *-----------------------------------------------------------------------------*/

#endif /* ECOBASE_TYPE_H */

