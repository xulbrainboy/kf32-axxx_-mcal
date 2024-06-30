
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
*   @file     EcoBase_Type.h
*   @brief    Base file for this project
*   @details  this file provide the eco base macro and definitions.
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

#ifndef ECOBASE_TYPE_H
#define ECOBASE_TYPE_H

/*-----------------------------------------------------------------------------*
 * -INCLUDE FILES
 *-----------------------------------------------------------------------------*/

/*-----------------------------------------------------------------------------*
 * -FILE VERSION
 *-----------------------------------------------------------------------------*/
#define ECOBASE_H_MAJOR_VERSION               1
#define ECOBASE_H_MINOR_VERSION               0
#define ECOBASE_H_PATCH_VERSION               0

/*-----------------------------------------------------------------------------*
 * -DEFINITION AND TYPEDEF
 *-----------------------------------------------------------------------------*/
/* -Data Type Definition */
typedef unsigned char         u1,tf;
typedef signed char              s1;
typedef unsigned short           u2;
typedef signed short             s2;
typedef unsigned long            u4;
typedef signed long              s4;
typedef unsigned long long       u8;
typedef signed long long         s8;
typedef float                    f4;
typedef double                   f8;

/* -Data Common Definition */
#ifndef NULL_PTR
  #define NULL_PTR       ((void *)0)
#endif

#ifndef E_OK
  #define E_OK                  (0u)
#endif

#ifndef E_NOT_OK
  #define E_NOT_OK              (1u)
#endif

#ifndef FALSE
  #define FALSE                 (0u)
#endif
#ifndef TRUE
  #define TRUE                  (1u)
#endif

#ifndef STD_HIGH
  #define STD_HIGH              0x01U
#endif

#ifndef STD_LOW
  #define STD_LOW               0x00U
#endif

#ifndef STD_ACTIVE
  #define STD_ACTIVE            0x01U
#endif

#ifndef STD_IDLE
  #define STD_IDLE              0x00U
#endif

#ifndef STD_ON
  #define STD_ON                0x01U
#endif

#ifndef STD_OFF
  #define STD_OFF               0x00U
#endif

/* -ECO Basic Macro */
#define ECO_FUNC( funcType, nameSpace ) funcType

#define ECO_LOCALFUNC( funcType, nameSpace ) static funcType

#define ECO_VAR( varType, nameSpace ) varType

#define ECO_LOCALVAR( varType, nameSpace ) static varType

#define ECO_PVAR( ptrType, nameSpace ) ptrType *

#define ECO_CONSTVAR( varType, nameSpace ) const varType

#define ECO_CONSTPVAR( ptrType, nameSpace ) const ptrType *

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

