/*==================================================================================================
*   @file    platform.h
*
*   @brief   Includes platform header files.
*
*=================================================================================================*/

/*==================================================================================================
*
*   Copyright 2020-2021 NXP.
*
*   This software is owned or controlled by NXP and may only be used strictly in accordance with
*   the applicable license terms. By expressly accepting such terms or by downloading, installing,
*   activating and/or otherwise using the software, you are agreeing that you have read, and that
*   you agree to comply with and are bound by, such license terms. If you do not agree to
*   be bound by the applicable license terms, then you may not retain, install, activate or
*   otherwise use the software.
==================================================================================================*/
#ifndef PLATFORM_H
#define PLATFORM_H

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                           INCLUDES
==================================================================================================*/
#include "hse_target.h"

#if (HSE_PLATFORM == HSE_S32R45X)
    #include "S32R45X.h"
#elif (HSE_PLATFORM == HSE_S32G2XX)
    #include "S32G2XXX.h"
#elif (HSE_PLATFORM == HSE_S32S2XX)
    #include "S32S247TV.h"
#elif (HSE_PLATFORM == HSE_S32K2TV)
    #include "S32K2TV.h"
#elif (HSE_PLATFORM == HSE_S32K3X4)
    #include "S32K344.h"
#elif (HSE_PLATFORM == HSE_S32K3X2)
    #include "S32K312.h"
#else
    #error "No platform is selected. At least one platform should be selected."
#endif

/*==================================================================================================
*                                        LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
*                                      FILE VERSION CHECKS
==================================================================================================*/

/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                       GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/

#ifdef __cplusplus
}
#endif

#endif  /* PLATFORM_H */
