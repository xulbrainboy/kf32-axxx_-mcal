
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
*   @file     Dio.h
*   @brief    
*   @details  
*/

#ifndef DIO_H
#define DIO_H

/*-----------------------------------------------------------------------------*
 * -INCLUDE FILES
 *-----------------------------------------------------------------------------*/

/*-----------------------------------------------------------------------------*
 * -FILE VERSION
 *-----------------------------------------------------------------------------*/
#define DIO_H_MAJOR_VERSION               1
#define DIO_H_MINOR_VERSION               0
#define DIO_H_PATCH_VERSION               0

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
 * -FUNCTION PROTOTYPES
 *-----------------------------------------------------------------------------*/
/*-----------------------------------------------------------------------------*/
/** - Service Name : Dio_WriteChannel
  * - Sync/Async   : Synchronous
  * - Param(in)    : GPIO channel ID
  * - Param(in)    : GPIO Level(STD_HIGH/STD_LOW)
  * - Return value : None
  * - Description  : 
  */
extern ECO_FUNC( void, DIO ) Dio_WriteChannel( Dio_ChannelType ChannelId, Dio_LevelType Level );

/*-----------------------------------------------------------------------------*/
/** - Service Name : Dio_ReadChannel
  * - Sync/Async   : Synchronous
  * - Param(in)    : GPIO channel ID
  * - Return value : GPIO Level(STD_HIGH/STD_LOW)
  * - Description  : 
  */
extern ECO_FUNC( Dio_LevelType, DIO ) Dio_ReadChannel( Dio_ChannelType ChannelId );

#endif /* DIO_H */

