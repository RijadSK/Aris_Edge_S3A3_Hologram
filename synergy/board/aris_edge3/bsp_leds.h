/***********************************************************************************************************************
 * Copyright [2017-2018] RELOC s.r.l. - All rights strictly reserved
 * This Software is provided for evaluation purposes; any other use - including reproduction, modification, use for
 * a commercial product, distribution, or republication - without the prior written permission of the Copyright holder
 * is strictly prohibited.
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE
 * WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS
 * OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR
 * OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 **********************************************************************************************************************/
/***********************************************************************************************************************
* File Name    : bsp_leds.h
* Description  : This module has information about the LEDs on this board.
***********************************************************************************************************************/

/*******************************************************************************************************************//**
 * @ingroup BSP_BOARD_ARIS_EDGE3
 * @defgroup BSP_ARIS_EDGE3_LEDS Board LEDs
 * @brief LED information for this board.
 *
 * This is code specific to the Aris Edge S3 board. It includes info on the number of LEDs and which pins are they
 * are on.
 *
 * @{
***********************************************************************************************************************/

#ifndef BSP_BOARD_LEDS_H
#define BSP_BOARD_LEDS_H

/** Common macro for SSP header files. There is also a corresponding SSP_FOOTER macro at the end of this file. */
SSP_HEADER

/***********************************************************************************************************************
 * Macro definitions
 **********************************************************************************************************************/

/***********************************************************************************************************************
 * Typedef definitions
 **********************************************************************************************************************/
/** Available user-controllable LEDs on this board. These enums can be can be used to index into the array of LED pins
 * found in the bsp_leds_t structure. */
typedef enum e_bsp_led
{
    BSP_LED_LED2_ORANGE=0,      ///< LED2 Orange
    BSP_LED_LED3_BLUE,          ///< LED3 Blue
} bsp_led_t;

/***********************************************************************************************************************
 * Exported global variables
 **********************************************************************************************************************/

/***********************************************************************************************************************
 * Public Functions
 **********************************************************************************************************************/

/** Common macro for SSP header files. There is also a corresponding SSP_HEADER macro at the top of this file. */
SSP_FOOTER

#endif /* BSP_BOARD_LEDS_H */

/** @} (end defgroup BSP_ARIS_EDGE3_LEDS) */
