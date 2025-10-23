#ifndef __BSP_FDCAN_H__
#define __BSP_FDCAN_H__

#include "fdcan.h"
#include <stdint.h>

// by RobotIC laboratory, South China University of Technology

void fdcan_filter_init(FDCAN_HandleTypeDef *hfdcan);
void fdcan_fifo0_receive(FDCAN_HandleTypeDef *hfdcan, uint8_t fdcan_ch);

#endif
