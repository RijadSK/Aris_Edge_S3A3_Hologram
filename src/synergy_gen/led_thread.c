/* generated thread source file - do not edit */
#include "led_thread.h"

TX_THREAD led_thread;
void led_thread_create(void);
static void led_thread_func(ULONG thread_input);
static uint8_t led_thread_stack[1024] BSP_PLACE_IN_SECTION_V2(".stack.led_thread") BSP_ALIGN_VARIABLE_V2(BSP_STACK_ALIGNMENT);
void tx_startup_err_callback(void *p_instance, void *p_data);
void tx_startup_common_init(void);
#if (6) != BSP_IRQ_DISABLED
#if !defined(SSP_SUPPRESS_ISR_g_external_irq0) && !defined(SSP_SUPPRESS_ISR_ICU6)
SSP_VECTOR_DEFINE( icu_irq_isr, ICU, IRQ6);
#endif
#endif
static icu_instance_ctrl_t g_external_irq0_ctrl;
static const external_irq_cfg_t g_external_irq0_cfg = { .channel = 6, .trigger =
		EXTERNAL_IRQ_TRIG_FALLING, .filter_enable = true, .pclk_div =
		EXTERNAL_IRQ_PCLK_DIV_BY_64, .autostart = true, .p_callback =
		external_irq6_callback, .p_context = &g_external_irq0, .p_extend = NULL,
		.irq_ipl = (6), };
/* Instance structure to use this module. */
const external_irq_instance_t g_external_irq0 = { .p_ctrl =
		&g_external_irq0_ctrl, .p_cfg = &g_external_irq0_cfg, .p_api =
		&g_external_irq_on_icu };
TX_SEMAPHORE g_sw4_semaphore;
TX_SEMAPHORE g_sw1_semaphore;
extern bool g_ssp_common_initialized;
extern uint32_t g_ssp_common_thread_count;
extern TX_SEMAPHORE g_ssp_common_initialized_semaphore;

void led_thread_create(void) {
	/* Increment count so we will know the number of ISDE created threads. */
	g_ssp_common_thread_count++;

	/* Initialize each kernel object. */
	UINT err_g_sw4_semaphore;
	err_g_sw4_semaphore = tx_semaphore_create(&g_sw4_semaphore,
			(CHAR *) "SW4 Semaphore", 0);
	if (TX_SUCCESS != err_g_sw4_semaphore) {
		tx_startup_err_callback(&g_sw4_semaphore, 0);
	}
	UINT err_g_sw1_semaphore;
	err_g_sw1_semaphore = tx_semaphore_create(&g_sw1_semaphore,
			(CHAR *) "New Semaphore", 0);
	if (TX_SUCCESS != err_g_sw1_semaphore) {
		tx_startup_err_callback(&g_sw1_semaphore, 0);
	}

	UINT err;
	err = tx_thread_create(&led_thread, (CHAR *) "LED Thread", led_thread_func,
			(ULONG) NULL, &led_thread_stack, 1024, 1, 1, 1, TX_AUTO_START);
	if (TX_SUCCESS != err) {
		tx_startup_err_callback(&led_thread, 0);
	}
}

static void led_thread_func(ULONG thread_input) {
	/* Not currently using thread_input. */
	SSP_PARAMETER_NOT_USED(thread_input);

	/* Initialize common components */
	tx_startup_common_init();

	/* Initialize each module instance. */

	/* Enter user code for this thread. */
	led_thread_entry();
}
