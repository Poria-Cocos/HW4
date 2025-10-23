#include "bsp_fdcan.h"
#include "bsp_dji.h"
#include <stdint.h>

void fdcan_filter_init(FDCAN_HandleTypeDef *hfdcan)
{
  // Homework 4-1
}

void HAL_FDCAN_RxFifo0Callback(FDCAN_HandleTypeDef *hfdcan, uint32_t RxFifo0ITs)
{
  // Homework 4-2
}


void fdcan_fifo0_receive(FDCAN_HandleTypeDef *hfdcan, uint8_t fdcan_ch)
{
  FDCAN_RxHeaderTypeDef fdcan_rx_header;
  uint8_t fdcan_rx_data[8] = {0};
  if(HAL_FDCAN_GetRxMessage(hfdcan, FDCAN_RX_FIFO0, &fdcan_rx_header, fdcan_rx_data) == HAL_OK)
  {
    uint16_t id = fdcan_rx_header.Identifier;

		if(id >= /* Homework 4-3 */ && id <= /* Homework 4-3 */)
    {
      motor_update_dji(/* Homework 4-3 */, /* Homework 4-3 */);
      circle_cc_dji(/* Homework 4-3 */);
    }
  }
}
