
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
*   @file     Eco_Util.h
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

#ifndef ECO_UTIL_H
#define ECO_UTIL_H

/*-----------------------------------------------------------------------------*
 * -INCLUDE FILES
 *-----------------------------------------------------------------------------*/
#include "EcoBase_Type.h"

/*-----------------------------------------------------------------------------*
 * -FILE VERSION
 *-----------------------------------------------------------------------------*/
#define ECO_UTIL_H_MAJOR_VERSION               1
#define ECO_UTIL_H_MINOR_VERSION               0
#define ECO_UTIL_H_PATCH_VERSION               0

/*-----------------------------------------------------------------------------*
 * -DEFINITION AND TYPEDEF
 *-----------------------------------------------------------------------------*/
#define ECO_UTIL_BITSET(reg,bit)             ( reg |= ((u4)((u4)(1)<<bit )) )
#define ECO_UTIL_BITRESET(reg,bit)           ( reg &= (~((u4)((u4)(1)<<bit))) )
#define ECO_UTIL_BIT_IS_SET(reg,bit)         ( reg & ((u4)((u4)(1)<<bit)) )
#define ECO_UTIL_BIT_IS_CLEAR(reg,bit)       ( !(reg & ((u4)((u4)(1)<<bit))) )

#define ECO_UTIL_REGSET(reg,val,sft)         ( reg |= ((u4)((u4)(val)<<bit)) )
#define ECO_UTIL_REGCLEAR(reg,val,sft)       ( reg &= (~((u4)((u4)(val)<<bit))) )

/*-----------------------------------------------------------------------------*
 * -ENUMS
 *-----------------------------------------------------------------------------*/

/*-----------------------------------------------------------------------------*
 * -GLOBAL VARIABLE DECLARATIONS
 *-----------------------------------------------------------------------------*/

/*-----------------------------------------------------------------------------*
 * -FUNCTION PROTOTYPES
 *-----------------------------------------------------------------------------*/

#endif /* ECO_UTIL_H */

