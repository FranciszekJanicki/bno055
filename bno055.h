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

bno055_err_t bno055_get_mag_radius_reg(bno055_t const* bno055,
                                       bno055_mag_radius_reg_t* reg);
bno055_err_t bno055_set_mag_radius_reg(bno055_t const* bno055,
                                       bno055_mag_radius_reg_t const* reg);

bno055_err_t bno055_get_acc_radius_reg(bno055_t const* bno055,
                                       bno055_acc_radius_reg_t* reg);
bno055_err_t bno055_set_acc_radius_reg(bno055_t const* bno055,
                                       bno055_acc_radius_reg_t const* reg);

bno055_err_t bno055_get_gyr_offset_z_reg(bno055_t const* bno055,
                                         bno055_gyr_offset_z_reg_t* reg);
bno055_err_t bno055_set_gyr_offset_z_reg(bno055_t const* bno055,
                                         bno055_gyr_offset_z_reg_t const* reg);

bno055_err_t bno055_get_gyr_offset_y_reg(bno055_t const* bno055,
                                         bno055_gyr_offset_y_reg_t* reg);
bno055_err_t bno055_set_gyr_offset_y_reg(bno055_t const* bno055,
                                         bno055_gyr_offset_y_reg_t const* reg);

bno055_err_t bno055_get_gyr_offset_x_reg(bno055_t const* bno055,
                                         bno055_gyr_offset_x_reg_t* reg);
bno055_err_t bno055_set_gyr_offset_x_reg(bno055_t const* bno055,
                                         bno055_gyr_offset_x_reg_t const* reg);

bno055_err_t bno055_get_mag_offset_z_reg(bno055_t const* bno055,
                                         bno055_mag_offset_z_reg_t* reg);
bno055_err_t bno055_set_mag_offset_z_reg(bno055_t const* bno055,
                                         bno055_mag_offset_z_reg_t const* reg);

bno055_err_t bno055_get_mag_offset_y_reg(bno055_t const* bno055,
                                         bno055_mag_offset_y_reg_t* reg);
bno055_err_t bno055_set_mag_offset_y_reg(bno055_t const* bno055,
                                         bno055_mag_offset_y_reg_t const* reg);

bno055_err_t bno055_get_mag_offset_x_reg(bno055_t const* bno055,
                                         bno055_mag_offset_x_reg_t* reg);
bno055_err_t bno055_set_mag_offset_x_reg(bno055_t const* bno055,
                                         bno055_mag_offset_x_reg_t const* reg);

bno055_err_t bno055_get_acc_offset_z_reg(bno055_t const* bno055,
                                         bno055_acc_offset_z_reg_t* reg);
bno055_err_t bno055_set_acc_offset_z_reg(bno055_t const* bno055,
                                         bno055_acc_offset_z_reg_t const* reg);

bno055_err_t bno055_get_acc_offset_y_reg(bno055_t const* bno055,
                                         bno055_acc_offset_y_reg_t* reg);
bno055_err_t bno055_set_acc_offset_y_reg(bno055_t const* bno055,
                                         bno055_acc_offset_y_reg_t const* reg);

bno055_err_t bno055_get_acc_offset_x_reg(bno055_t const* bno055,
                                         bno055_acc_offset_x_reg_t* reg);
bno055_err_t bno055_set_acc_offset_x_reg(bno055_t const* bno055,
                                         bno055_gyr_offset_x_reg_t const* reg);

bno055_err_t bno055_get_sic_matrix_reg(bno055_t const* bno055,
                                       bno055_sic_matrix_reg_t* reg);
bno055_err_t bno055_set_sic_matrix_reg(bno055_t const* bno055,
                                       bno055_sic_matrix_reg_t const* reg);

bno055_err_t bno055_get_axis_map_sign_reg(bno055_t const* bno055,
                                          bno055_axis_map_sign_reg_t* reg);
bno055_err_t bno055_set_axis_map_sign_reg(
    bno055_t const* bno055,
    bno055_axis_map_sign_reg_t const* reg);

bno055_err_t bno055_get_axis_map_config_reg(bno055_t const* bno055,
                                            bno055_axis_map_config_reg_t* reg);
bno055_err_t bno055_set_axis_map_config_reg(
    bno055_t const* bno055,
    bno055_axis_map_config_reg_t const* reg);

bno055_err_t bno055_get_temp_source_reg(bno055_t const* bno055,
                                        bno055_temp_source_reg_t* reg);
bno055_err_t bno055_set_temp_source_reg(bno055_t const* bno055,
                                        bno055_temp_source_reg_t const* reg);

bno055_err_t bno055_get_sys_trigger_reg(bno055_t const* bno055,
                                        bno055_sys_trigger_reg_t* reg);
bno055_err_t bno055_set_sys_trigger_reg(bno055_t const* bno055,
                                        bno055_sys_trigger_reg_t const* reg);

bno055_err_t bno055_get_pwr_mode_reg(bno055_t const* bno055,
                                     bno055_pwr_mode_reg_t* reg);
bno055_err_t bno055_set_pwr_mode_reg(bno055_t const* bno055,
                                     bno055_pwr_mode_reg_t const* reg);

bno055_err_t bno055_get_opr_mode_reg(bno055_t const* bno055,
                                     bno055_opr_mode_reg_t* reg);
bno055_err_t bno055_set_opr_mode_reg(bno055_t const* bno055,
                                     bno055_opr_mode_reg_t const* reg);

bno055_err_t bno055_get_unit_sel_reg(bno055_t const* bno055,
                                     bno055_unit_sel_reg_t* reg);
bno055_err_t bno055_set_unit_sel_reg(bno055_t const* bno055,
                                     bno055_unit_sel_reg_t const* reg);

bno055_err_t bno055_get_sys_err_reg(bno055_t const* bno055,
                                    bno055_sys_err_reg_t* reg);

bno055_err_t bno055_get_sys_status_reg(bno055_t const* bno055,
                                       bno055_sys_status_reg_t* reg);

bno055_err_t bno055_get_sys_clk_status_reg(bno055_t const* bno055,
                                           bno055_sys_clk_status_reg_t* reg);

bno055_err_t bno055_get_int_status_reg(bno055_t const* bno055,
                                       bno055_int_status_reg_t* reg);

bno055_err_t bno055_get_st_result_reg(bno055_t const* bno055,
                                      bno055_st_result_reg_t* reg);

bno055_err_t bno055_get_calib_status_reg(bno055_t const* bno055,
                                         bno055_calib_status_reg_t* reg);

bno055_err_t bno055_get_temp_data_reg(bno055_t const* bno055,
                                      bno055_temp_data_reg_t* reg);

bno055_err_t bno055_get_grv_data_z_reg(bno055_t const* bno055,
                                       bno055_grv_data_z_reg_t* reg);

bno055_err_t bno055_get_grv_data_y_reg(bno055_t const* bno055,
                                       bno055_grv_data_y_reg_t* reg);

bno055_err_t bno055_get_grv_data_x_reg(bno055_t const* bno055,
                                       bno055_grv_data_x_reg_t* reg);

bno055_err_t bno055_get_grv_data_reg(bno055_t const* bno055,
                                     bno055_grv_data_reg_t* reg);

bno055_err_t bno055_get_lia_data_z_reg(bno055_t const* bno055,
                                       bno055_lia_data_z_reg_t* reg);

bno055_err_t bno055_get_lia_data_y_reg(bno055_t const* bno055,
                                       bno055_lia_data_y_reg_t* reg);

bno055_err_t bno055_get_lia_data_x_reg(bno055_t const* bno055,
                                       bno055_lia_data_x_reg_t* reg);

bno055_err_t bno055_get_lia_data_reg(bno055_t const* bno055,
                                     bno055_lia_data_reg_t* reg);

bno055_err_t bno055_get_qua_data_z_reg(bno055_t const* bno055,
                                       bno055_qua_data_z_reg_t* reg);

bno055_err_t bno055_get_qua_data_y_reg(bno055_t const* bno055,
                                       bno055_qua_data_y_reg_t* reg);

bno055_err_t bno055_get_qua_data_x_reg(bno055_t const* bno055,
                                       bno055_qua_data_x_reg_t* reg);

bno055_err_t bno055_get_qua_data_w_reg(bno055_t const* bno055,
                                       bno055_qua_data_w_reg_t* reg);

bno055_err_t bno055_get_qua_data_reg(bno055_t const* bno055,
                                     bno055_qua_data_reg_t* reg);

bno055_err_t bno055_get_eul_data_z_reg(bno055_t const* bno055,
                                       bno055_eul_data_z_reg_t* reg);

bno055_err_t bno055_get_eul_data_y_reg(bno055_t const* bno055,
                                       bno055_eul_data_y_reg_t* reg);

bno055_err_t bno055_get_eul_data_x_reg(bno055_t const* bno055,
                                       bno055_eul_data_x_reg_t* reg);

bno055_err_t bno055_get_eul_data_reg(bno055_t const* bno055,
                                     bno055_eul_data_reg_t* reg);

bno055_err_t bno055_get_gyr_data_z_reg(bno055_t const* bno055,
                                       bno055_gyr_data_z_reg_t* reg);
bno055_err_t bno055_get_gyr_data_z_reg(bno055_t const* bno055,
                                       bno055_gyr_data_z_reg_t* reg);

#ifdef __cplusplus
}
#endif

#endif // BNO055_BNO055_H