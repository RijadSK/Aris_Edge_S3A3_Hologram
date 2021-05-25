#include "led_thread.h"
#include "comms_thread.h"

void led_thread_entry(void);

bsp_leds_t Leds;
char send_str[12];

/* LED Thread entry function */
void led_thread_entry(void)
{
    ioport_level_t led_level = IOPORT_LEVEL_HIGH;

    /* populate the Leds structure with the values for the S5D9 Promotion Kit*/
    R_BSP_LedsGet(&Leds);

    /* open and initialize irq11 */
    g_external_irq0.p_api->open(g_external_irq0.p_ctrl, g_external_irq0.p_cfg);

    while (1)
    {
        g_ioport.p_api->pinWrite(Leds.p_leds[0],led_level);

        if (led_level == IOPORT_LEVEL_HIGH)
        {
            strcpy(send_str, "LED off\n\r");
            led_level = IOPORT_LEVEL_LOW;
        }
        else
        {
            strcpy(send_str, "LED on\n\r");
            led_level = IOPORT_LEVEL_HIGH;
        }

        /* send the data trough the queue */
        tx_queue_send(&g_cdc_queue, send_str, TX_WAIT_FOREVER);

        /* wait for the SW1 semaphore to be set */
        tx_semaphore_get(&g_sw1_semaphore, TX_WAIT_FOREVER);
    }
}

/* callback function for the SW1 push button; sets the semaphore */
void external_irq6_callback(external_irq_callback_args_t * p_args)
{
    SSP_PARAMETER_NOT_USED(p_args);
    tx_semaphore_put(&g_sw1_semaphore);
}
