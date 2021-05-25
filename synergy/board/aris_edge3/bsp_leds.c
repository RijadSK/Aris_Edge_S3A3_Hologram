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
* File Name    : bsp_leds.c
* Description  : This module has information about the LEDs on this board.
***********************************************************************************************************************/

/*******************************************************************************************************************//**
 * @addtogroup BSP_ARIS_EDGE3_LEDS
 *
 * @{
 **********************************************************************************************************************/

/***********************************************************************************************************************
 * Includes
 **********************************************************************************************************************/
#include "bsp_api.h"

#if defined(BSP_BOARD_ARIS_EDGE3)

/***********************************************************************************************************************
 * Macro definitions
 **********************************************************************************************************************/

/***********************************************************************************************************************
 * Typedef definitions
 **********************************************************************************************************************/

/***********************************************************************************************************************
 * Private global variables and functions
 **********************************************************************************************************************/
/** Array of LED IOPORT pins. */
static const ioport_port_pin_t g_bsp_prv_leds[] =
{
    IOPORT_PORT_03_PIN_03,  ///< LED2
    IOPORT_PORT_01_PIN_13,  ///< LED3
};

/***********************************************************************************************************************
 * Exported global variables (to be accessed by other files)
 **********************************************************************************************************************/
/** Structure with LED information for this board. Recommended to get this information through R_BSP_LedsGet() function
 * instead of using this structure directly to remove dependency on structure name. */
const bsp_leds_t g_bsp_leds =
{
    .led_count  = (uint16_t)((sizeof(g_bsp_prv_leds)/sizeof(g_bsp_prv_leds[0]))),
    .p_leds     = &g_bsp_prv_leds[0]
};

#endif

/** @} (end addtogroup BSP_ARIS_EDGE3_LEDS) */


