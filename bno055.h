#ifndef BNO055_BNO055_H
#define BNO055_BNO055_H

#include "bno055_config.h"
#include "bno055_registers.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
    bno055_config_t config;
    bno055_interface_t interface;
} bno055_t;

#ifdef __cplusplus
}
#endif

#endif // BNO055_BNO055_H