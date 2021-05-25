/***********************************************************************************************************************
 * Copyright [2015-2017] Renesas Electronics Corporation and/or its licensors. All Rights Reserved.
 * 
 * This file is part of Renesas SynergyTM Software Package (SSP)
 *
 * The contents of this file (the "contents") are proprietary and confidential to Renesas Electronics Corporation
 * and/or its licensors ("Renesas") and subject to statutory and contractual protections.
 *
 * This file is subject to a Renesas SSP license agreement. Unless otherwise agreed in an SSP license agreement with
 * Renesas: 1) you may not use, copy, modify, distribute, display, or perform the contents; 2) you may not use any name
 * or mark of Renesas for advertising or publicity purposes or in connection with your use of the contents; 3) RENESAS
 * MAKES NO WARRANTY OR REPRESENTATIONS ABOUT THE SUITABILITY OF THE CONTENTS FOR ANY PURPOSE; THE CONTENTS ARE PROVIDED
 * "AS IS" WITHOUT ANY EXPRESS OR IMPLIED WARRANTY, INCLUDING THE IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS FOR A
 * PARTICULAR PURPOSE, AND NON-INFRINGEMENT; AND 4) RENESAS SHALL NOT BE LIABLE FOR ANY DIRECT, INDIRECT, SPECIAL, OR
 * CONSEQUENTIAL DAMAGES, INCLUDING DAMAGES RESULTING FROM LOSS OF USE, DATA, OR PROJECTS, WHETHER IN AN ACTION OF
 * CONTRACT OR TORT, ARISING OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THE CONTENTS. Third-party contents
 * included in this file may be subject to different terms.
 **********************************************************************************************************************/
/***********************************************************************************************************************
* File Name    : bsp_analog.h
* Description  : Analog pin connections available on this MCU.
***********************************************************************************************************************/

#ifndef BSP_ANALOG_H_
#define BSP_ANALOG_H_

/*******************************************************************************************************************//**
 * @ingroup BSP_MCU_S3A3
 * @defgroup BSP_MCU_ANALOG_S3A3 Analog Connections
 *
 * This group contains a list of enumerations that can be used with the @ref ANALOG_CONNECT_API.
 *
 * @{
 **********************************************************************************************************************/

/***********************************************************************************************************************
 * Includes   <System Includes> , "Project Includes"
 **********************************************************************************************************************/
#include "../all/bsp_common_analog.h"

/***********************************************************************************************************************
Macro definitions
***********************************************************************************************************************/

/***********************************************************************************************************************
Typedef definitions
***********************************************************************************************************************/

/***********************************************************************************************************************
Exported global variables
***********************************************************************************************************************/

/***********************************************************************************************************************
Exported global functions (to be accessed by other files)
***********************************************************************************************************************/
/** List of analog connections that can be made on S3A3
 * @note This list may change based on device. This list is for S3A3.
 * */
typedef enum e_analog_connect
{
    /* Connections for shared ACMPLP IVREF0 input. */
    /** Connect ACMPLP0 IVREF0 to PORT1 P101. */
    ANALOG_CONNECT_ACMPLP0_IVREF0_TO_PORT1_P101       = ANALOG_CONNECT_DEFINE(ACMPLP, 0, COMPSEL1, CRVS0, FLAG_CLEAR),
    /** Connect ACMPLP0 IVREF0 to DAC80 DA. */
    ANALOG_CONNECT_ACMPLP0_IVREF0_TO_DAC80_DA         = ANALOG_CONNECT_DEFINE(ACMPLP, 0, COMPSEL1, CRVS1, FLAG_CLEAR),
    /** Connect ACMPLP0 IVREF0 to PORT5 P502. */
    ANALOG_CONNECT_ACMPLP0_IVREF0_TO_PORT5_P502       = ANALOG_CONNECT_DEFINE(ACMPLP, 0, COMPSEL1, CRVS2, FLAG_CLEAR),

    /* Connections for shared ACMPLP IVREF1 input. */
    /** Connect ACMPLP1 IVREF1 to PORT1 P103. */
    ANALOG_CONNECT_ACMPLP1_IVREF1_TO_PORT1_P103       = ANALOG_CONNECT_DEFINE(ACMPLP, 0, COMPSEL1, CRVS4, FLAG_CLEAR),
    /** Connect ACMPLP1 IVREF1 to DAC81 DA. */
    ANALOG_CONNECT_ACMPLP1_IVREF1_TO_DAC81_DA         = ANALOG_CONNECT_DEFINE(ACMPLP, 0, COMPSEL1, CRVS5, FLAG_CLEAR),
    /** Connect ACMPLP1 IVREF1 to PORT5 P500. */
    ANALOG_CONNECT_ACMPLP1_IVREF1_TO_PORT5_P500       = ANALOG_CONNECT_DEFINE(ACMPLP, 0, COMPSEL1, CRVS6, FLAG_CLEAR),

    /* Connections for ACMPLP channel 0 VCMP input. */
    /** Connect ACMPLP0 IVCMP to PORT1 P100. */
    ANALOG_CONNECT_ACMPLP0_IVCMP_TO_PORT1_P100        = ANALOG_CONNECT_DEFINE(ACMPLP, 0, COMPSEL0, CMPSEL0, FLAG_CLEAR),
    /** Connect ACMPLP0 IVCMP to PORT5 P503. */
    ANALOG_CONNECT_ACMPLP0_IVCMP_TO_PORT5_P503        = ANALOG_CONNECT_DEFINE(ACMPLP, 0, COMPSEL0, CMPSEL2, FLAG_CLEAR),

    /* Connections for ACMPLP channel 0 VREF input. */
    /* ANALOG0_VREF is the internal reference voltage. */
    /** Connect ACMPLP0 IVREF to ANALOG0 VREF. */
    ANALOG_CONNECT_ACMPLP0_IVREF_TO_ANALOG0_VREF      = ANALOG_CONNECT_DEFINE(ACMPLP, 0, COMPMDR, C0VRF, FLAG_CLEAR),
    /** Connect ACMPLP0 IVREF to ACMPLP0 IVREF0. */
    ANALOG_CONNECT_ACMPLP0_IVREF_TO_ACMPLP0_IVREF0    = ANALOG_CONNECT_DEFINE(ACMPLP, 0, COMPMDR, CLEAR_C0VRF, FLAG_CLEAR),

    /* Connections for ACMPLP channel 1 VCMP input. */
    /** Connect ACMPLP1 IVCMP to PORT1 P102. */
    ANALOG_CONNECT_ACMPLP1_IVCMP_TO_PORT1_P102        = ANALOG_CONNECT_DEFINE(ACMPLP, 0, COMPSEL0, CMPSEL4, FLAG_CLEAR),
    /** Connect ACMPLP1 IVCMP to PORT5 P501. */
    ANALOG_CONNECT_ACMPLP1_IVCMP_TO_PORT5_P501        = ANALOG_CONNECT_DEFINE(ACMPLP, 0, COMPSEL0, CMPSEL6, FLAG_CLEAR),

    /* Connections for ACMPLP channel 1 VREF input. */
    /* ANALOG0_VREF is the internal reference voltage. */
    /** Connect ACMPLP1 IVREF to ANALOG0 VREF. */
    ANALOG_CONNECT_ACMPLP1_IVREF_TO_ANALOG0_VREF      = ANALOG_CONNECT_DEFINE(ACMPLP, 0, COMPMDR, C1VRF, FLAG_CLEAR),
    /** Connect ACMPLP1 IVREF to ACMPLP0 IVREF0. */
    ANALOG_CONNECT_ACMPLP1_IVREF_TO_ACMPLP0_IVREF0    = ANALOG_CONNECT_DEFINE(ACMPLP, 0, COMPSEL1, CLEAR_C1VRF2, FLAG_CLEAR), // Also clear C1VRF
    /** Connect ACMPLP1 IVREF to ACMPLP1 IVREF1. */
    ANALOG_CONNECT_ACMPLP1_IVREF_TO_ACMPLP1_IVREF1    = ANALOG_CONNECT_DEFINE(ACMPLP, 0, COMPSEL1, C1VRF2, FLAG_CLEAR),       // Also clear C1VRF

} analog_connect_t;

/** @} (end defgroup BSP_MCU_ANALOG_S3A3) */

#endif /* BSP_ANALOG_H_ */
