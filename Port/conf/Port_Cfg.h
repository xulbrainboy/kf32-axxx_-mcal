
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
*   @file           : Port_Cfg.h
*   @brief          : configration file
*   @Generated Date : 
*   @details        : 
*/

#ifndef PORT_CFG_H
#define PORT_CFG_H

/*-----------------------------------------------------------------------------*
 * -INCLUDE FILES
 *-----------------------------------------------------------------------------*/
#include "Port_Type.h"

/*-----------------------------------------------------------------------------*
 * -FILE VERSION
 *-----------------------------------------------------------------------------*/
#define PORT_CFG_H_MAJOR_VERSION               1
#define PORT_CFG_H_MINOR_VERSION               0
#define PORT_CFG_H_PATCH_VERSION               0

/*-----------------------------------------------------------------------------*
 * -DEFINITION AND TYPEDEF
 *-----------------------------------------------------------------------------*/
#define PORTSET_PIN_DIRECTION_API     STD_ON

#define PORT_5V_PORT             0u
#define PORT_ALLSRC_NUM          1u

#define PORT_CFG_GET_PORTID(pinIdx)      ( Port_Configration[pinIdx].PortId )
#define PORT_CFG_GET_PINNUM(pinIdx)      ( Port_Configration[pinIdx].PortPinNum )
/*-----------------------------------------------------------------------------*
 * -ENUMS
 *-----------------------------------------------------------------------------*/

/*-----------------------------------------------------------------------------*
 * -GLOBAL VARIABLE DECLARATIONS
 *-----------------------------------------------------------------------------*/
extern ECO_CONSTVAR(Port_ConfigType, PORT)Port_Configration[PORT_ALLSRC_NUM];
/*-----------------------------------------------------------------------------*
 * -FUNCTION PROTOTYPES
 *-----------------------------------------------------------------------------*/
 
#endif /* PORT_CFG_H */
