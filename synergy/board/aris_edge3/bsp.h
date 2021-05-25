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
* File Name    : bsp.h
* Description  : Includes and API function available for this board.
***********************************************************************************************************************/
/*******************************************************************************************************************//**
 * @ingroup BSP_Boards
 * @defgroup BSP_BOARD_ARIS_EDGE3 BSP for the Aris Edge S3 Board
 * @brief BSP for the Aris Edge S3 Board
 *
 * The Aris Edge S3 is a development kit for the Renesas SynergyTM S3A3 microcontroller in a LQFP64 package. The board
 * provides motion and environmental sensors, USB Device, Bluetooth/Thread radio, SEGGER J-Link on-board debug, Arduino
 * connectors, LEDs and buttons.
 *
 * @{
***********************************************************************************************************************/

#ifndef BSP_H_
#define BSP_H_

/***********************************************************************************************************************
 Includes   <System Includes> , "Project Includes"
 **********************************************************************************************************************/

/*******************************************************************************************************************//**
 * @ingroup BSP_BOARD_S3A3
 * @defgroup BSP_CONFIG_S3A3 Build Time Configurations
 *
 * The BSP has multiple header files that contain build-time configuration options. Currently there are header files to
 * configure the following settings:
 *
 * - General BSP Options
 * - Clocks
 * - Interrupts
 * - Pin Configuration
 *
 * @{
 **********************************************************************************************************************/

/* BSP Board Specific Includes. */
#include "bsp_init.h"
#include "bsp_leds.h"

/***********************************************************************************************************************
 Macro definitions
 **********************************************************************************************************************/
#define BSP_BOARD_ARIS_EDGE3

/***********************************************************************************************************************
 Typedef definitions
 **********************************************************************************************************************/

/***********************************************************************************************************************
 Exported global variables
 **********************************************************************************************************************/

/***********************************************************************************************************************
 Exported global functions (to be accessed by other files)
 **********************************************************************************************************************/

/** @} (end defgroup BSP_CONFIG_S3A3) */

#endif /* BSP_H_ */
