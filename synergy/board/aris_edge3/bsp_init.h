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
* File Name    : bsp_init.h
* Description  : This module calls any initialization code specific to this BSP.
***********************************************************************************************************************/

/*******************************************************************************************************************//**
 * @ingroup BSP_BOARD_ARIS_EDGE3
 * @defgroup BSP_BOARD_ARIS_EDGE3_INIT Board Specific Code
 * @brief Board specific code for the Aris Edge S3 Board
 *
 * This include file is specific to the Aris Edge S3 board.
 *
 * @{
***********************************************************************************************************************/

#ifndef BSP_INIT_H_
#define BSP_INIT_H_

/** Common macro for SSP header files. There is also a corresponding SSP_FOOTER macro at the end of this file. */
SSP_HEADER

/***********************************************************************************************************************
 Macro definitions
 **********************************************************************************************************************/

/***********************************************************************************************************************
 Typedef definitions
 **********************************************************************************************************************/

/***********************************************************************************************************************
 Exported global variables
 **********************************************************************************************************************/

/***********************************************************************************************************************
 Exported global functions (to be accessed by other files)
 **********************************************************************************************************************/
void bsp_init(void * p_args);

/** Common macro for SSP header files. There is also a corresponding SSP_HEADER macro at the top of this file. */
SSP_FOOTER

#endif /* BSP_INIT_H_ */

/** @} (end defgroup BSP_BOARD_ARIS_EDGE3_INIT) */
