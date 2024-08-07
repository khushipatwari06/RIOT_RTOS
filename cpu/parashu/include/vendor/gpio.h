#ifndef GPIO_H
#define GPIO_H

#include "platform.h"
#include "stdint.h"

// Define base address and offset for GPIO
#define GPIO_BASE_ADDRESS  0x00040100 // Replace with the actual base address for your Shakti board
#define GPIO_OFFSET        0x08

// Define GPIO control and data registers
#define GPIO_DIRECTION_CNTRL_REG  (uint32_t*) (GPIO_BASE_ADDRESS + (0 * GPIO_OFFSET))
#define GPIO_DATA_REG             (uint32_t*) (GPIO_BASE_ADDRESS + (1 * GPIO_OFFSET))

// Define additional GPIO registers similar to fe310 gpio.h
#define GPIO_INPUT_VAL            (uint32_t*) (GPIO_BASE_ADDRESS + (0x00))
#define GPIO_INPUT_EN             (uint32_t*) (GPIO_BASE_ADDRESS + (0x04))
#define GPIO_OUTPUT_EN            (uint32_t*) (GPIO_BASE_ADDRESS + (0x08))
#define GPIO_OUTPUT_VAL           (uint32_t*) (GPIO_BASE_ADDRESS + (0x0C))
#define GPIO_PULLUP_EN            (uint32_t*) (GPIO_BASE_ADDRESS + (0x10))
#define GPIO_DRIVE                (uint32_t*) (GPIO_BASE_ADDRESS + (0x14))
#define GPIO_RISE_IE              (uint32_t*) (GPIO_BASE_ADDRESS + (0x18))
#define GPIO_RISE_IP              (uint32_t*) (GPIO_BASE_ADDRESS + (0x1C))
#define GPIO_FALL_IE              (uint32_t*) (GPIO_BASE_ADDRESS + (0x20))
#define GPIO_FALL_IP              (uint32_t*) (GPIO_BASE_ADDRESS + (0x24))
#define GPIO_HIGH_IE              (uint32_t*) (GPIO_BASE_ADDRESS + (0x28))
#define GPIO_HIGH_IP              (uint32_t*) (GPIO_BASE_ADDRESS + (0x2C))
#define GPIO_LOW_IE               (uint32_t*) (GPIO_BASE_ADDRESS + (0x30))
#define GPIO_LOW_IP               (uint32_t*) (GPIO_BASE_ADDRESS + (0x34))
#define GPIO_IOF_EN               (uint32_t*) (GPIO_BASE_ADDRESS + (0x38))
#define GPIO_IOF_SEL              (uint32_t*) (GPIO_BASE_ADDRESS + (0x3C))
#define GPIO_OUTPUT_XOR           (uint32_t*) (GPIO_BASE_ADDRESS + (0x40))

#endif // GPIO_H
