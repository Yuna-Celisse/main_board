/******************************************************************************
 * Mainboard status uplink protocol constants.
 *
 * The protocol reuses bytes 6..22 of the existing 25-byte uplink frame.
 ******************************************************************************/
#ifndef __MAINBOARD_STATUS_PROTOCOL_H__
#define __MAINBOARD_STATUS_PROTOCOL_H__

#define MAINBOARD_STATUS_PAGE_MOTOR       0xA1
#define MAINBOARD_STATUS_PAGE_IMU         0xA2

#define MAINBOARD_STATUS_MOTOR_SCALE      1000    /* m/s -> mm/s */
#define MAINBOARD_STATUS_GYRO_SCALE       10      /* deg/s -> 0.1 deg/s */
#define MAINBOARD_STATUS_ACCEL_SCALE      1000    /* g -> 0.001 g */

#define MAINBOARD_STATUS_POWER_CAP_LOW   0x01
#define MAINBOARD_STATUS_POWER_BAT_LOW   0x02

#endif
