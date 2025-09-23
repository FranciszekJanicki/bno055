#ifndef BNO055_BNO055_REGISTERS_H
#define BNO055_BNO055_REGISTERS_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
    uint8_t chip_id : 8;
} bno055_chip_id_reg_t;

typedef struct {
    uint8_t acc_chip_id : 8;
} bno055_acc_id_reg_t;

typedef struct {
    uint8_t mag_chip_id : 8;
} bno055_mag_id_reg_t;

typedef struct {
    uint8_t gyr_chip_id : 8;
} bno055_gyr_id_reg_t;

typedef struct {
    uint16_t sw_revision_id : 16;
} bno055_sw_rev_id_reg_t;

typedef struct {
    uint8_t bootloader_version : 8;
} bno055_bl_rev_id_reg_t;

typedef struct {
    uint8_t page_id : 8;
} bno055_page_id_reg_t;

typedef struct {
    int16_t acc_data_x : 16;
} bno055_acc_data_x_reg_t;

typedef struct {
    int16_t acc_data_y : 16;
} bno055_acc_data_y_reg_t;

typedef struct {
    int16_t acc_data_z : 16;
} bno055_acc_data_z_reg_t;

typedef struct {
    int16_t acc_data_x : 16;
    int16_t acc_data_y : 16;
    int16_t acc_data_z : 16;
} bno055_acc_data_reg_t;

typedef struct {
    int16_t mag_data_x : 16;
} bno055_mag_data_x_reg_t;

typedef struct {
    int16_t mag_data_y : 16;
} bno055_mag_data_y_reg_t;

typedef struct {
    int16_t mag_data_z : 16;
} bno055_mag_data_z_reg_t;

typedef struct {
    int16_t mag_data_x : 16;
    int16_t mag_data_y : 16;
    int16_t mag_data_z : 16;
} bno055_mag_data_reg_t;

typedef struct {
    int16_t gyr_data_x : 16;
} bno055_gyr_data_x_reg_t;

typedef struct {
    int16_t gyr_data_y : 16;
} bno055_gyr_data_y_reg_t;

typedef struct {
    int16_t gyr_data_z : 16;
} bno055_gyr_data_z_reg_t;

typedef struct {
    int16_t gyr_data_x : 16;
    int16_t gyr_data_y : 16;
    int16_t gyr_data_z : 16;
} bno055_gyr_data_reg_t;

typedef struct {
    int16_t yaw_data : 16;
} bno055_eul_data_x_reg_t;

typedef struct {
    int16_t roll_data : 16;
} bno055_eul_data_y_reg_t;

typedef struct {
    int16_t pitch_data : 16;
} bno055_eul_data_z_reg_t;

typedef struct {
    int16_t yaw_data : 16;
    int16_t roll_data : 16;
    int16_t pitch_data : 16;
} bno055_eul_data_reg_t;

typedef struct {
    int16_t qua_data_w : 16;
} bno055_qua_data_w_reg_t;

typedef struct {
    int16_t qua_data_x : 16;
} bno055_qua_data_x_reg_t;

typedef struct {
    int16_t qua_data_y : 16;
} bno055_qua_data_y_reg_t;

typedef struct {
    int16_t qua_data_z : 16;
} bno055_qua_data_z_reg_t;

typedef struct {
    int16_t qua_data_w : 16;
    int16_t qua_data_x : 16;
    int16_t qua_data_y : 16;
    int16_t qua_data_z : 16;
} bno055_qua_data_reg_t;

typedef struct {
    int16_t lia_data_x : 16;
} bno055_lia_data_x_reg_t;

typedef struct {
    int16_t lia_data_y : 16;
} bno055_lia_data_y_reg_t;

typedef struct {
    int16_t lia_data_z : 16;
} bno055_lia_data_z_reg_t;

typedef struct {
    int16_t lia_data_x : 16;
    int16_t lia_data_y : 16;
    int16_t lia_data_z : 16;
} bno055_lia_data_reg_t;

typedef struct {
    int16_t grv_data_x : 16;
} bno055_grv_data_x_reg_t;

typedef struct {
    int16_t grv_data_y : 16;
} bno055_grv_data_y_reg_t;

typedef struct {
    int16_t grv_data_z : 16;
} bno055_grv_data_z_reg_t;

typedef struct {
    int16_t grv_data_x : 16;
    int16_t grv_data_y : 16;
    int16_t grv_data_z : 16;
} bno055_grv_data_reg_t;

typedef struct {
    int16_t temp_data : 16;
} bno055_temp_data_reg_t;

typedef struct {
    uint8_t sys_calib_status : 2;
    uint8_t gyr_calib_status : 2;
    uint8_t acc_calib_status : 2;
    uint8_t mag_calib_status : 2;
} bno055_calib_status_reg_t;

typedef struct {
    uint8_t st_mcu : 1;
    uint8_t st_gyr : 1;
    uint8_t st_mag : 1;
    uint8_t st_acc : 1;
} bno055_st_result_reg_t;

typedef struct {
    uint8_t acc_nm : 1;
    uint8_t acc_am : 1;
    uint8_t acc_high_g : 1;
    uint8_t gyr_drdy : 1;
    uint8_t gyr_high_rate : 1;
    uint8_t gyr_am : 1;
    uint8_t mag_drdy : 1;
    uint8_t acc_bsx_drdy : 1;
} bno055_int_status_reg_t;

typedef struct {
    uint8_t st_main_clk : 1;
} bno055_sys_clk_status_reg_t;

typedef struct {
    uint8_t sys_status_code : 1;
} bno055_sys_status_reg_t;

typedef struct {
    uint8_t sys_error_code : 1;
} bno055_sys_err_reg_t;

typedef struct {
    uint8_t ori_android_windows : 1;
    uint8_t temp_unit : 1;
    uint8_t eul_unit : 1;
    uint8_t gyr_unit : 1;
    uint8_t acc_unit : 1;
} bno055_unit_sel_reg_t;

typedef struct {
    uint8_t power_mode : 2;
} bno055_opr_mode_reg_t;

typedef struct {
    uint8_t clk_sel : 1;
    uint8_t rst_int : 1;
    uint8_t rst_sys : 1;
    uint8_t self_test : 1;
} bno055_sys_trigger_reg_t;

typedef struct {
    uint8_t temp_source : 2;
} bno055_temp_source_reg_t;

typedef struct {
    uint8_t remapped_z_value : 2;
    uint8_t remapped_y_value : 2;
    uint8_t remapped_x_value : 2;
} bno055_axis_map_config_reg_t;

typedef struct {
    uint8_t remapped_x_sign : 1;
    uint8_t remapped_y_sign : 1;
    uint8_t remapped_z_sign : 1;
} bno055_axis_map_sign_reg_t;

typedef struct {
    int16_t sic_matrix[3][3];
} bno055_sic_matrix_reg_t;

typedef struct {
    int16_t acc_offset_x : 16;
} bno055_acc_offset_x_reg_t;

typedef struct {
    int16_t acc_offset_y : 16;
} bno055_acc_offset_y_reg_t;

typedef struct {
    int16_t acc_offset_z : 16;
} bno055_acc_offset_z_reg_t;

typedef struct {
    int16_t mag_offset_x : 16;
} bno055_mag_offset_x_reg_t;

typedef struct {
    int16_t mag_offset_y : 16;
} bno055_mag_offset_y_reg_t;

typedef struct {
    int16_t mag_offset_z : 16;
} bno055_mag_offset_z_reg_t;

typedef struct {
    int16_t gyr_offset_x : 16;
} bno055_gyr_offset_x_reg_t;

typedef struct {
    int16_t gyr_offset_y : 16;
} bno055_gyr_offset_y_reg_t;

typedef struct {
    int16_t gyr_offset_z : 16;
} bno055_gyr_offset_z_reg_t;

typedef struct {
    int16_t acc_radius : 16;
} bno055_acc_radius_reg_t;

typedef struct {
    int16_t mag_radius : 16;
} bno055_mag_radius_reg_t;

typedef struct {
    uint8_t acc_pwr_mode : 3;
    uint8_t acc_bw : 3;
    uint8_t acc_range : 2;
} bno055_acc_config_reg_t;

typedef struct {
    uint8_t mag_power_mode : 2;
    uint8_t mag_opr_mode : 2;
    uint8_t mag_do_rate : 3;
} bno055_mag_config_reg_t;

typedef struct {
    uint8_t gyr_bandwidth : 3;
    uint8_t gyr_range : 3;
    uint8_t gyr_power_mode : 3;
} bno055_gyr_config_reg_t;

typedef struct {
    uint8_t slp_duration : 4;
    uint8_t slp_mode : 1;
} bno055_acc_sleep_config_reg_t;

typedef struct {
    uint8_t auto_slp_duration : 3;
    uint8_t slp_duration : 3;
} bno055_gyr_sleep_config_reg_t;

typedef struct {
    uint8_t acc_nm : 1;
    uint8_t acc_am : 1;
    uint8_t acc_high_g : 1;
    uint8_t gyr_high_rate : 1;
    uint8_t gyr_am : 1;
    uint8_t mag_drdy : 1;
    uint8_t acc_bsx_drdy : 1;
} bno055_int_mask_reg_t;

typedef struct {
    uint8_t acc_nm : 1;
    uint8_t acc_am : 1;
    uint8_t acc_high_g : 1;
    uint8_t gyr_high_rate : 1;
    uint8_t gyr_am : 1;
    uint8_t mag_drdy : 1;
    uint8_t acc_bsx_drdy : 1;
} bno055_int_enable_reg_t;

typedef struct {
    uint8_t acc_am_thresh : 8;
} bno055_acc_am_thresh_reg_t;

typedef struct {
    uint8_t high_z_axis : 1;
    uint8_t high_y_axis : 1;
    uint8_t high_x_axis : 1;
    uint8_t an_nm_z_axis : 1;
    uint8_t an_nm_y_axis : 1;
    uint8_t an_nm_x_axis : 1;
    uint8_t am_dur : 2;
} bno055_acc_int_settings_reg_t;

typedef struct {
    uint8_t acc_hg_duration : 8;
} bno055_acc_hg_duration_reg_t;

typedef struct {
    uint8_t acc_hg_thresh : 8;
} bno055_acc_hg_thresh_reg_t;

typedef struct {
    uint8_t acc_nm_thresh : 8;
} bno055_acc_nm_thresh_reg_t;

typedef struct {
    uint8_t sm_nm_dur : 6;
    uint8_t sm_nm : 1;
} bno055_acc_nm_set_reg_t;

typedef struct {
    uint8_t hr_filt : 1;
    uint8_t am_filt : 1;
    uint8_t hr_z_axis : 1;
    uint8_t hr_y_axis : 1;
    uint8_t hr_x_axis : 1;
    uint8_t am_z_axis : 1;
    uint8_t am_y_axis : 1;
    uint8_t am_x_axis : 1;
} bno055_gyr_int_setting_reg_t;

typedef struct {
    uint8_t hr_x_thresh_hyst : 2;
    uint8_t hr_x_thresh : 5;
} bno055_gyr_hr_x_set_reg_t;

typedef struct {
    uint8_t hr_x_duration : 8;
} bno055_gyr_hr_x_dur_reg_t;

typedef struct {
    uint8_t hr_y_thresh_hyst : 2;
    uint8_t hr_y_thresh : 5;
} bno055_gyr_hr_y_set_reg_t;

typedef struct {
    uint8_t hr_y_duration : 8;
} bno055_gyr_hr_y_dur_reg_t;

typedef struct {
    uint8_t hr_z_thresh_hyst : 2;
    uint8_t hr_z_thresh : 5;
} bno055_gyr_hr_z_set_reg_t;

typedef struct {
    uint8_t hr_z_duration : 8;
} bno055_gyr_hr_z_dur_reg_t;

typedef struct {
    uint8_t gyr_am_thresh : 7;
} bno055_gyr_am_thresh_reg_t;

typedef struct {
    uint8_t awake_duration : 2;
    uint8_t slope_samples : 2;
} bno055_gyr_am_set_reg_t;

#ifdef __cplusplus
}
#endif

#endif // BNO055_BNO055_REGISTERS_H
