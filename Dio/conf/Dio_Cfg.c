
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
*   @file           : Dio_Cfg.c
*   @brief          : configration file
*   @Generated Date : 
*   @details        : 
*/
/*=============================================================================*/

/*-----------------------------------------------------------------------------*
 * -INCLUDE FILES
 *-----------------------------------------------------------------------------*/
#include "Dio_Cfg.h"

/*-----------------------------------------------------------------------------*
 * -FILE VERSION
 *-----------------------------------------------------------------------------*/
#define DIO_CFG_C_MAJOR_VERSION               1
#define DIO_CFG_C_MINOR_VERSION               0
#define DIO_CFG_C_PATCH_VERSION               0

/*-----------------------------------------------------------------------------*
 * -DEFINITION AND TYPEDEF
 *-----------------------------------------------------------------------------*/

/*-----------------------------------------------------------------------------*
 * -ENUMS
 *-----------------------------------------------------------------------------*/

/*-----------------------------------------------------------------------------*
 * -GLOBAL VARIABLE DECLARATIONS
 *-----------------------------------------------------------------------------*/
ECO_CONSTVAR(Dio_ConfigType, DIO) Dio_ConfigChannel[DIO_CHANNEL_NUM] =
{
  /*                        GPIO_ID,         Pin                      */
  /* 5V_PORT */          {  GPIOA  ,         13              },
  /* 12V_SPY */          {  GPIOC  ,          5              },
  /* BCC_RST */          {  GPIOB  ,          2              },
}；
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



/*-----------------------------------------------------------------------------*
 * -END OF FILE
 *-----------------------------------------------------------------------------*/
