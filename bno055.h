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

bno055_err_t bno055_initialize(bno055_t* bno055,
                               bno055_config_t const* config,
                               bno055_interface_t const* interface);
bno055_err_t bno055_deinitialize(bno055_t* bno055);

bno055_err_t bno055_get_accel_data_x_scaled(bno055_t const* bno055,
                                            float32_t* scaled);
bno055_err_t bno055_get_accel_data_y_scaled(bno055_t const* bno055,
                                            float32_t* scaled);
bno055_err_t bno055_get_accel_data_z_scaled(bno055_t const* bno055,
                                            float32_t* scaled);
bno055_err_t bno055_get_accel_data_scaled(bno055_t const* bno055,
                                          vec3_float32_t* scaled);

bno055_err_t bno055_get_gyro_data_x_scaled(bno055_t const* bno055,
                                           float32_t* scaled);
bno055_err_t bno055_get_gyro_data_y_scaled(bno055_t const* bno055,
                                           float32_t* scaled);
bno055_err_t bno055_get_gyro_data_z_scaled(bno055_t const* bno055,
                                           float32_t* scaled);
bno055_err_t bno055_get_gyro_data_scaled(bno055_t const* bno055,
                                         vec3_float32_t* scaled);

bno055_err_t bno055_get_mag_data_x_scaled(bno055_t const* bno055,
                                          float32_t* scaled);
bno055_err_t bno055_get_mag_data_y_scaled(bno055_t const* bno055,
                                          float32_t* scaled);
bno055_err_t bno055_get_mag_data_z_scaled(bno055_t const* bno055,
                                          float32_t* scaled);
bno055_err_t bno055_get_mag_data_scaled(bno055_t const* bno055,
                                        vec3_float32_t* scaled);

bno055_err_t bno055_get_quat_data_w_scaled(bno055_t const* bno055,
                                           float32_t* scaled);
bno055_err_t bno055_get_quat_data_x_scaled(bno055_t const* bno055,
                                           float32_t* scaled);
bno055_err_t bno055_get_quat_data_y_scaled(bno055_t const* bno055,
                                           float32_t* scaled);
bno055_err_t bno055_get_quat_data_z_scaled(bno055_t const* bno055,
                                           float32_t* scaled);
bno055_err_t bno055_get_quat_data_scaled(bno055_t const* bno055,
                                         quat3_float32_t* scaled);

bno055_err_t bno055_get_euler_data_x_scaled(bno055_t const* bno055,
                                            float32_t* scaled);
bno055_err_t bno055_get_euler_data_y_scaled(bno055_t const* bno055,
                                            float32_t* scaled);
bno055_err_t bno055_get_euler_data_z_scaled(bno055_t const* bno055,
                                            float32_t* scaled);
bno055_err_t bno055_get_euler_data_scaled(bno055_t const* bno055,
                                          vec3_float32_t* scaled);

bno055_err_t bno055_get_temp_data_scaled(bno055_t const* bno055,
                                         float32_t* scaled);

bno055_err_t bno055_get_accel_data_x_raw(bno055_t const* bno055, int16_t* raw);
bno055_err_t bno055_get_accel_data_y_raw(bno055_t const* bno055, int16_t* raw);
bno055_err_t bno055_get_accel_data_z_raw(bno055_t const* bno055, int16_t* raw);
bno055_err_t bno055_get_accel_data_raw(bno055_t const* bno055,
                                       vec3_int16_t* raw);

bno055_err_t bno055_get_gyro_data_x_raw(bno055_t const* bno055, int16_t* raw);
bno055_err_t bno055_get_gyro_data_y_raw(bno055_t const* bno055, int16_t* raw);
bno055_err_t bno055_get_gyro_data_z_raw(bno055_t const* bno055, int16_t* raw);
bno055_err_t bno055_get_gyro_data_raw(bno055_t const* bno055,
                                      vec3_int16_t* raw);

bno055_err_t bno055_get_mag_data_x_raw(bno055_t const* bno055, int16_t* raw);
bno055_err_t bno055_get_mag_data_y_raw(bno055_t const* bno055, int16_t* raw);
bno055_err_t bno055_get_mag_data_z_raw(bno055_t const* bno055, int16_t* raw);
bno055_err_t bno055_get_mag_data_raw(bno055_t const* bno055, vec3_int16_t* raw);

bno055_err_t bno055_get_quat_data_w_raw(bno055_t const* bno055, int16_t* raw);
bno055_err_t bno055_get_quat_data_x_raw(bno055_t const* bno055, int16_t* raw);
bno055_err_t bno055_get_quat_data_y_raw(bno055_t const* bno055, int16_t* raw);
bno055_err_t bno055_get_quat_data_z_raw(bno055_t const* bno055, int16_t* raw);
bno055_err_t bno055_get_quat_data_raw(bno055_t const* bno055,
                                      quat3_int16_t* raw);

bno055_err_t bno055_get_euler_data_x_raw(bno055_t const* bno055, int16_t* raw);
bno055_err_t bno055_get_euler_data_y_raw(bno055_t const* bno055, int16_t* raw);
bno055_err_t bno055_get_euler_data_z_raw(bno055_t const* bno055, int16_t* raw);
bno055_err_t bno055_get_euler_data_raw(bno055_t const* bno055,
                                       vec3_int16_t* raw);

bno055_err_t bno055_get_temp_data_raw(bno055_t const* bno055, int16_t* raw);

#ifdef __cplusplus
}
#endif

#endif // BNO055_BNO055_H