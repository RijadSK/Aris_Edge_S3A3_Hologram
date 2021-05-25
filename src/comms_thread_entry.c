#include "comms_thread.h"

void comms_thread_entry(void);

uint8_t rx_msg[12];

/* Comms Thread entry function */
void comms_thread_entry(void)
{
    while (1)
    {
        /* get the message from the queue */
        tx_queue_receive(&g_cdc_queue, rx_msg, TX_WAIT_FOREVER);

        /* send the message over the USB port */
        g_sf_comms0.p_api->write(g_sf_comms0.p_ctrl,
                                 rx_msg,
                                 strlen((const char*)rx_msg),
                                 TX_WAIT_FOREVER);
    }
}
