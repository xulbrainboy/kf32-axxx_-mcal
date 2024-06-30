
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
*   @file     PORT_Type.h
*   @brief    
*   @details  
*/

#ifndef PORT_TYPE_H
#define PORT_TYPE_H

/*-----------------------------------------------------------------------------*
 * -INCLUDE FILES
 *-----------------------------------------------------------------------------*/
#include "EcoBase_Type.h"

/*-----------------------------------------------------------------------------*
 * -DEFINITION AND TYPEDEF
 *-----------------------------------------------------------------------------*/
#define PORT

typedef u1 Port_PinType;
typedef u1 Port_PortType;

typedef enum
{
  PORT_IN  = 0x00,   /* input */
  PORT_OUT = 0x01,   /* output */
  PORT_RMP = 0x02,   /* re-mapping */
  PORT_AN  = 0x03    /* analog */
}Port_ModeType;

typedef enum
{
  PORT_LOWSPEED,
  PORT_HIGHSPEED
}Port_SpeedType;

typedef enum
{
  PORT_NOPULL,
  PORT_PULLUP,
  PORT_PULLDOWN
}Port_PullType;

typedef enum
{
  PORT_POD_PP,
  PORT_POD_OD
}Port_OpenDrainType;

typedef struct
{
  Port_PortType         PortId;
  Port_PinType          PortPinNum;
  Port_ModeType         PortMode;
  Port_SpeedType        PortSpeed;
  Port_OpenDrainType    PortOpenDrain;
  Port_PullType         PortPulling;
}Port_ConfigType;

/*-----------------------------------------------------------------------------*
 * -ENUMS
 *-----------------------------------------------------------------------------*/

/*-----------------------------------------------------------------------------*
 * -GLOBAL VARIABLE DECLARATIONS
 *-----------------------------------------------------------------------------*/

/*-----------------------------------------------------------------------------*
 * -FUNCTION PROTOTYPES
 *-----------------------------------------------------------------------------*/

#endif /* PORT_TYPE_H */

