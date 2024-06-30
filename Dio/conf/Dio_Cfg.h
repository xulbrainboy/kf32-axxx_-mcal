
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
*   @file           : Dio_Cfg.h
*   @brief          : configration file
*   @Generated Date : 
*   @details        : 
*/

#ifndef DIO_CFG_H
#define DIO_CFG_H

/*-----------------------------------------------------------------------------*
 * -INCLUDE FILES
 *-----------------------------------------------------------------------------*/
#include "Dio_Type.h"

/*-----------------------------------------------------------------------------*
 * -FILE VERSION
 *-----------------------------------------------------------------------------*/
#define DIO_CFG_H_MAJOR_VERSION               1
#define DIO_CFG_H_MINOR_VERSION               0
#define DIO_CFG_H_PATCH_VERSION               0

/*-----------------------------------------------------------------------------*
 * -DEFINITION AND TYPEDEF
 *-----------------------------------------------------------------------------*/
#define DIO_CFG_5V_PORT      0U
#define DIO_CFG_12V_SPY      1U
#define DIO_CFG_BCC_RST      2U

#define DIO_CHANNEL_NUM      3U



#define DIO_CFG_GPIO_ID(channelId)  (Dio_ConfigChannel[channelId].GPIOId)
#define DIO_CFG_PIN_NUM(channelId)  (Dio_ConfigChannel[channelId].PinNum)
/*-----------------------------------------------------------------------------*
 * -ENUMS
 *-----------------------------------------------------------------------------*/

/*-----------------------------------------------------------------------------*
 * -GLOBAL VARIABLE DECLARATIONS
 *-----------------------------------------------------------------------------*/
extern ECO_CONSTVAR(Dio_ConfigType, DIO) Dio_ConfigChannel[DIO_CHANNEL_NUM];

/*-----------------------------------------------------------------------------*
 * -FUNCTION PROTOTYPES
 *-----------------------------------------------------------------------------*/
 
#endif /* CANTP_CFG_H */
