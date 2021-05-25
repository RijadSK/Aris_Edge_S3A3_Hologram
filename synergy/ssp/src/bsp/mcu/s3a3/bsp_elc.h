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
* File Name    : bsp_elc.h
* Description  : ELC Interface.
***********************************************************************************************************************/

/*******************************************************************************************************************//**
 * @ingroup Interface_Library
 * @addtogroup ELC_API events and peripheral definitions
 * @brief Interface for the Event Link Controller.
 *
 * Related SSP architecture topics:
 *  - What is an SSP Interface? @ref ssp-interfaces
 *  - What is a SSP Layer? @ref ssp-predefined-layers
 *  - How to use SSP Interfaces and Modules? @ref using-ssp-modules
 *
 * Event Link Controller Interface description: @ref HALELCInterface
 *
 * @{
 **********************************************************************************************************************/

/** @} (end addtogroup ELC_API) */

#ifndef BSP_ELCDEFS_H_
#define BSP_ELCDEFS_H_

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
/** Possible peripherals to be linked to event signals */
typedef enum e_elc_peripheral
{
    ELC_PERIPHERAL_GPT_A                                                        =    (0),
    ELC_PERIPHERAL_GPT_B                                                        =    (1),
    ELC_PERIPHERAL_GPT_C                                                        =    (2),
    ELC_PERIPHERAL_GPT_D                                                        =    (3),
    ELC_PERIPHERAL_GPT_E                                                        =    (4),
    ELC_PERIPHERAL_GPT_F                                                        =    (5),
    ELC_PERIPHERAL_GPT_G                                                        =    (6),
    ELC_PERIPHERAL_GPT_H                                                        =    (7),
    ELC_PERIPHERAL_ADC0                                                         =    (8),
    ELC_PERIPHERAL_ADC0_B                                                       =    (9),
    ELC_PERIPHERAL_DAC0                                                         =   (12),
    ELC_PERIPHERAL_IOPORT1                                                      =   (14),
    ELC_PERIPHERAL_IOPORT2                                                      =   (15),
    ELC_PERIPHERAL_IOPORT3                                                      =   (16),
    ELC_PERIPHERAL_IOPORT4                                                      =   (17),
    ELC_PERIPHERAL_CTSU                                                         =   (18),
} elc_peripheral_t;

/** Sources of event signals to be linked to other peripherals or the CPU1
 * @note This list may change based on device. This list is for S3A3.
 * */
typedef enum e_elc_event
{
    ELC_EVENT_ICU_IRQ0                                                          =    (1),
    ELC_EVENT_ICU_IRQ1                                                          =    (2),
    ELC_EVENT_ICU_IRQ2                                                          =    (3),
    ELC_EVENT_ICU_IRQ3                                                          =    (4),
    ELC_EVENT_ICU_IRQ4                                                          =    (5),
    ELC_EVENT_ICU_IRQ5                                                          =    (6),
    ELC_EVENT_ICU_IRQ6                                                          =    (7),
    ELC_EVENT_ICU_IRQ7                                                          =    (8),
    ELC_EVENT_ICU_IRQ8                                                          =    (9),
    ELC_EVENT_ICU_IRQ9                                                          =   (10),
    ELC_EVENT_ICU_IRQ10                                                         =   (11),
    ELC_EVENT_ICU_IRQ11                                                         =   (12),
    ELC_EVENT_ICU_IRQ12                                                         =   (13),
    ELC_EVENT_ICU_IRQ13                                                         =   (14),
    ELC_EVENT_ICU_IRQ14                                                         =   (15),
    ELC_EVENT_ICU_IRQ15                                                         =   (16),
    ELC_EVENT_DMAC0_INT                                                         =   (17),
    ELC_EVENT_DMAC1_INT                                                         =   (18),
    ELC_EVENT_DMAC2_INT                                                         =   (19),
    ELC_EVENT_DMAC3_INT                                                         =   (20),
    ELC_EVENT_DTC_COMPLETE                                                      =   (21),
    ELC_EVENT_ICU_SNOOZE_CANCEL                                                 =   (23),
    ELC_EVENT_FCU_FRDYI                                                         =   (24),
    ELC_EVENT_LVD_LVD1                                                          =   (25),
    ELC_EVENT_LVD_LVD2                                                          =   (26),
    ELC_EVENT_VBATT_LVD                                                         =   (27),
    ELC_EVENT_LVD_VBATT                                                         =   (27),
    ELC_EVENT_CGC_MOSC_STOP                                                     =   (28),
    ELC_EVENT_LPM_SNOOZE_REQUEST                                                =   (29),
    ELC_EVENT_AGT0_INT                                                          =   (30),
    ELC_EVENT_AGT0_COMPARE_A                                                    =   (31),
    ELC_EVENT_AGT0_COMPARE_B                                                    =   (32),
    ELC_EVENT_AGT1_INT                                                          =   (33),
    ELC_EVENT_AGT1_COMPARE_A                                                    =   (34),
    ELC_EVENT_AGT1_COMPARE_B                                                    =   (35),
    ELC_EVENT_IWDT_UNDERFLOW                                                    =   (36),
    ELC_EVENT_WDT_UNDERFLOW                                                     =   (37),
    ELC_EVENT_RTC_ALARM                                                         =   (38),
    ELC_EVENT_RTC_PERIOD                                                        =   (39),
    ELC_EVENT_RTC_CARRY                                                         =   (40),
    ELC_EVENT_ADC0_SCAN_END                                                     =   (41),
    ELC_EVENT_ADC0_SCAN_END_B                                                   =   (42),
    ELC_EVENT_ADC0_WINDOW_A                                                     =   (43),
    ELC_EVENT_ADC0_WINDOW_B                                                     =   (44),
    ELC_EVENT_ADC0_COMPARE_MATCH                                                =   (45),
    ELC_EVENT_ADC0_COMPARE_MISMATCH                                             =   (46),
    ELC_EVENT_COMP_LP_0                                                         =   (47),
    ELC_EVENT_COMP_LP0_INT                                                      =   (47),
    ELC_EVENT_COMP_LP_1                                                         =   (48),
    ELC_EVENT_COMP_LP1_INT                                                      =   (48),
    ELC_EVENT_USBFS_FIFO_0                                                      =   (49),
    ELC_EVENT_USBFS_FIFO_1                                                      =   (50),
    ELC_EVENT_USBFS_INT                                                         =   (51),
    ELC_EVENT_USBFS_RESUME                                                      =   (52),
    ELC_EVENT_IIC0_RXI                                                          =   (53),
    ELC_EVENT_IIC0_TXI                                                          =   (54),
    ELC_EVENT_IIC0_TEI                                                          =   (55),
    ELC_EVENT_IIC0_ERI                                                          =   (56),
    ELC_EVENT_IIC0_WUI                                                          =   (57),
    ELC_EVENT_IIC1_RXI                                                          =   (58),
    ELC_EVENT_IIC1_TXI                                                          =   (59),
    ELC_EVENT_IIC1_TEI                                                          =   (60),
    ELC_EVENT_IIC1_ERI                                                          =   (61),
    ELC_EVENT_IIC2_RXI                                                          =   (62),
    ELC_EVENT_IIC2_TXI                                                          =   (63),
    ELC_EVENT_IIC2_TEI                                                          =   (64),
    ELC_EVENT_IIC2_ERI                                                          =   (65),
    ELC_EVENT_SSI0_TXI                                                          =   (66),
    ELC_EVENT_SSI0_RXI                                                          =   (67),
    ELC_EVENT_SSI0_INT                                                          =   (69),
    ELC_EVENT_CTSU_WRITE                                                        =   (70),
    ELC_EVENT_CTSU_READ                                                         =   (71),
    ELC_EVENT_CTSU_END                                                          =   (72),
    ELC_EVENT_KEY_INT                                                           =   (73),
    ELC_EVENT_DOC_INT                                                           =   (74),
    ELC_EVENT_CAC_FREQUENCY_ERROR                                               =   (75),
    ELC_EVENT_CAC_MEASUREMENT_END                                               =   (76),
    ELC_EVENT_CAC_OVERFLOW                                                      =   (77),
    ELC_EVENT_CAN0_ERROR                                                        =   (78),
    ELC_EVENT_CAN0_FIFO_RX                                                      =   (79),
    ELC_EVENT_CAN0_FIFO_TX                                                      =   (80),
    ELC_EVENT_CAN0_MAILBOX_RX                                                   =   (81),
    ELC_EVENT_CAN0_MAILBOX_TX                                                   =   (82),
    ELC_EVENT_IOPORT_EVENT_1                                                    =   (83),
    ELC_EVENT_IOPORT_EVENT_2                                                    =   (84),
    ELC_EVENT_IOPORT_EVENT_3                                                    =   (85),
    ELC_EVENT_IOPORT_EVENT_4                                                    =   (86),
    ELC_EVENT_ELC_SOFTWARE_EVENT_0                                              =   (87),
    ELC_EVENT_ELC_SOFTWARE_EVENT_1                                              =   (88),
    ELC_EVENT_POEG0_EVENT                                                       =   (89),
    ELC_EVENT_POEG1_EVENT                                                       =   (90),
    ELC_EVENT_GPT0_CAPTURE_COMPARE_A                                            =   (91),
    ELC_EVENT_GPT0_CAPTURE_COMPARE_B                                            =   (92),
    ELC_EVENT_GPT0_COMPARE_C                                                    =   (93),
    ELC_EVENT_GPT0_COMPARE_D                                                    =   (94),
    ELC_EVENT_GPT0_COMPARE_E                                                    =   (95),
    ELC_EVENT_GPT0_COMPARE_F                                                    =   (96),
    ELC_EVENT_GPT0_COUNTER_OVERFLOW                                             =   (97),
    ELC_EVENT_GPT0_COUNTER_UNDERFLOW                                            =   (98),
    ELC_EVENT_GPT1_CAPTURE_COMPARE_A                                            =   (99),
    ELC_EVENT_GPT1_CAPTURE_COMPARE_B                                            =  (100),
    ELC_EVENT_GPT1_COMPARE_C                                                    =  (101),
    ELC_EVENT_GPT1_COMPARE_D                                                    =  (102),
    ELC_EVENT_GPT1_COMPARE_E                                                    =  (103),
    ELC_EVENT_GPT1_COMPARE_F                                                    =  (104),
    ELC_EVENT_GPT1_COUNTER_OVERFLOW                                             =  (105),
    ELC_EVENT_GPT1_COUNTER_UNDERFLOW                                            =  (106),
    ELC_EVENT_GPT2_CAPTURE_COMPARE_A                                            =  (107),
    ELC_EVENT_GPT2_CAPTURE_COMPARE_B                                            =  (108),
    ELC_EVENT_GPT2_COMPARE_C                                                    =  (109),
    ELC_EVENT_GPT2_COMPARE_D                                                    =  (110),
    ELC_EVENT_GPT2_COMPARE_E                                                    =  (111),
    ELC_EVENT_GPT2_COMPARE_F                                                    =  (112),
    ELC_EVENT_GPT2_COUNTER_OVERFLOW                                             =  (113),
    ELC_EVENT_GPT2_COUNTER_UNDERFLOW                                            =  (114),
    ELC_EVENT_GPT3_CAPTURE_COMPARE_A                                            =  (115),
    ELC_EVENT_GPT3_CAPTURE_COMPARE_B                                            =  (116),
    ELC_EVENT_GPT3_COMPARE_C                                                    =  (117),
    ELC_EVENT_GPT3_COMPARE_D                                                    =  (118),
    ELC_EVENT_GPT3_COMPARE_E                                                    =  (119),
    ELC_EVENT_GPT3_COMPARE_F                                                    =  (120),
    ELC_EVENT_GPT3_COUNTER_OVERFLOW                                             =  (121),
    ELC_EVENT_GPT3_COUNTER_UNDERFLOW                                            =  (122),
    ELC_EVENT_GPT4_CAPTURE_COMPARE_A                                            =  (123),
    ELC_EVENT_GPT4_CAPTURE_COMPARE_B                                            =  (124),
    ELC_EVENT_GPT4_COMPARE_C                                                    =  (125),
    ELC_EVENT_GPT4_COMPARE_D                                                    =  (126),
    ELC_EVENT_GPT4_COMPARE_E                                                    =  (127),
    ELC_EVENT_GPT4_COMPARE_F                                                    =  (128),
    ELC_EVENT_GPT4_COUNTER_OVERFLOW                                             =  (129),
    ELC_EVENT_GPT4_COUNTER_UNDERFLOW                                            =  (130),
    ELC_EVENT_GPT5_CAPTURE_COMPARE_A                                            =  (131),
    ELC_EVENT_GPT5_CAPTURE_COMPARE_B                                            =  (132),
    ELC_EVENT_GPT5_COMPARE_C                                                    =  (133),
    ELC_EVENT_GPT5_COMPARE_D                                                    =  (134),
    ELC_EVENT_GPT5_COMPARE_E                                                    =  (135),
    ELC_EVENT_GPT5_COMPARE_F                                                    =  (136),
    ELC_EVENT_GPT5_COUNTER_OVERFLOW                                             =  (137),
    ELC_EVENT_GPT5_COUNTER_UNDERFLOW                                            =  (138),
    ELC_EVENT_GPT6_CAPTURE_COMPARE_A                                            =  (139),
    ELC_EVENT_GPT6_CAPTURE_COMPARE_B                                            =  (140),
    ELC_EVENT_GPT6_COMPARE_C                                                    =  (141),
    ELC_EVENT_GPT6_COMPARE_D                                                    =  (142),
    ELC_EVENT_GPT6_COMPARE_E                                                    =  (143),
    ELC_EVENT_GPT6_COMPARE_F                                                    =  (144),
    ELC_EVENT_GPT6_COUNTER_OVERFLOW                                             =  (145),
    ELC_EVENT_GPT6_COUNTER_UNDERFLOW                                            =  (146),
    ELC_EVENT_GPT7_CAPTURE_COMPARE_A                                            =  (147),
    ELC_EVENT_GPT7_CAPTURE_COMPARE_B                                            =  (148),
    ELC_EVENT_GPT7_COMPARE_C                                                    =  (149),
    ELC_EVENT_GPT7_COMPARE_D                                                    =  (150),
    ELC_EVENT_GPT7_COMPARE_E                                                    =  (151),
    ELC_EVENT_GPT7_COMPARE_F                                                    =  (152),
    ELC_EVENT_GPT7_COUNTER_OVERFLOW                                             =  (153),
    ELC_EVENT_GPT7_COUNTER_UNDERFLOW                                            =  (154),
    ELC_EVENT_GPT8_CAPTURE_COMPARE_A                                            =  (155),
    ELC_EVENT_GPT8_CAPTURE_COMPARE_B                                            =  (156),
    ELC_EVENT_GPT8_COMPARE_C                                                    =  (157),
    ELC_EVENT_GPT8_COMPARE_D                                                    =  (158),
    ELC_EVENT_GPT8_COMPARE_E                                                    =  (159),
    ELC_EVENT_GPT8_COMPARE_F                                                    =  (160),
    ELC_EVENT_GPT8_COUNTER_OVERFLOW                                             =  (161),
    ELC_EVENT_GPT8_COUNTER_UNDERFLOW                                            =  (162),
    ELC_EVENT_GPT9_CAPTURE_COMPARE_A                                            =  (163),
    ELC_EVENT_GPT9_CAPTURE_COMPARE_B                                            =  (164),
    ELC_EVENT_GPT9_COMPARE_C                                                    =  (165),
    ELC_EVENT_GPT9_COMPARE_D                                                    =  (166),
    ELC_EVENT_GPT9_COMPARE_E                                                    =  (167),
    ELC_EVENT_GPT9_COMPARE_F                                                    =  (168),
    ELC_EVENT_GPT9_COUNTER_OVERFLOW                                             =  (169),
    ELC_EVENT_GPT9_COUNTER_UNDERFLOW                                            =  (170),
    ELC_EVENT_OPS_UVW_EDGE                                                      =  (171),    
    ELC_EVENT_SCI0_RXI                                                          =  (172),
    ELC_EVENT_SCI0_TXI                                                          =  (173),
    ELC_EVENT_SCI0_TEI                                                          =  (174),
    ELC_EVENT_SCI0_ERI                                                          =  (175),
    ELC_EVENT_SCI0_AM                                                           =  (176),
    ELC_EVENT_SCI0_RXI_OR_ERI                                                   =  (177),
    ELC_EVENT_SCI1_RXI                                                          =  (178),
    ELC_EVENT_SCI1_TXI                                                          =  (179),
    ELC_EVENT_SCI1_TEI                                                          =  (180),
    ELC_EVENT_SCI1_ERI                                                          =  (181),
    ELC_EVENT_SCI1_AM                                                           =  (182),
    ELC_EVENT_SCI2_RXI                                                          =  (183),
    ELC_EVENT_SCI2_TXI                                                          =  (184),
    ELC_EVENT_SCI2_TEI                                                          =  (185),
    ELC_EVENT_SCI2_ERI                                                          =  (186),
    ELC_EVENT_SCI2_AM                                                           =  (187),
    ELC_EVENT_SCI3_RXI                                                          =  (188),
    ELC_EVENT_SCI3_TXI                                                          =  (189),
    ELC_EVENT_SCI3_TEI                                                          =  (190),
    ELC_EVENT_SCI3_ERI                                                          =  (191),
    ELC_EVENT_SCI3_AM                                                           =  (192),
    ELC_EVENT_SCI4_RXI                                                          =  (193),
    ELC_EVENT_SCI4_TXI                                                          =  (194),
    ELC_EVENT_SCI4_TEI                                                          =  (195),
    ELC_EVENT_SCI4_ERI                                                          =  (196),
    ELC_EVENT_SCI4_AM                                                           =  (197),
    ELC_EVENT_SCI9_RXI                                                          =  (198),
    ELC_EVENT_SCI9_TXI                                                          =  (199),
    ELC_EVENT_SCI9_TEI                                                          =  (200),
    ELC_EVENT_SCI9_ERI                                                          =  (201),
    ELC_EVENT_SCI9_AM                                                           =  (202),
    ELC_EVENT_SPI0_RXI                                                          =  (203),
    ELC_EVENT_SPI0_TXI                                                          =  (204),
    ELC_EVENT_SPI0_IDLE                                                         =  (205),
    ELC_EVENT_SPI0_ERI                                                          =  (206),
    ELC_EVENT_SPI0_TEI                                                          =  (207),
    ELC_EVENT_SPI1_RXI                                                          =  (208),
    ELC_EVENT_SPI1_TXI                                                          =  (209),
    ELC_EVENT_SPI1_IDLE                                                         =  (210),
    ELC_EVENT_SPI1_ERI                                                          =  (211),
    ELC_EVENT_SPI1_TEI                                                          =  (212),
    ELC_EVENT_QSPI_INT                                                          =  (213),
    ELC_EVENT_SDHIMMC0_ACCS                                                     =  (214),
    ELC_EVENT_SDHIMMC0_SDIO                                                     =  (215),
    ELC_EVENT_SDHIMMC0_CARD                                                     =  (216),
    ELC_EVENT_SDHIMMC0_DMA_REQ                                                  =  (217),
    ELC_EVENT_SCE_PROC_BUSY                                                     =  (218),
    ELC_EVENT_SCE_ROMOK                                                         =  (219),
    ELC_EVENT_SCE_LONG_PLG                                                      =  (220),
    ELC_EVENT_SCE_TEST_BUSY                                                     =  (221),
    ELC_EVENT_SCE_WRRDY_0                                                       =  (222),
    ELC_EVENT_SCE_WRRDY_4                                                       =  (223),
    ELC_EVENT_SCE_RDRDY_0                                                       =  (224),
    ELC_EVENT_SCE_INTEGRATE_WRRDY                                               =  (225),
    ELC_EVENT_SCE_INTEGRATE_RDRDY                                               =  (226),
} elc_event_t;

#endif /* BSP_ELCDEFS_H_ */
