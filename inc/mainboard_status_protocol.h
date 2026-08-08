/******************************************************************************
 * Mainboard status uplink protocol constants.
 *
 * The protocol reuses bytes 6..22 of the existing 25-byte uplink frame.
 * MPU6050/IMU data is intentionally not included in the uplink protocol.
 ******************************************************************************/
#ifndef __MAINBOARD_STATUS_PROTOCOL_H__
#define __MAINBOARD_STATUS_PROTOCOL_H__

#define MAINBOARD_STATUS_PAGE_MOTOR       0xA1

#define MAINBOARD_STATUS_MOTOR_SCALE      1000    /* m/s -> mm/s */

/* Downlink feedback confirmation carried by the three robot slots. */
#define MAINBOARD_CONTROL_FEEDBACK_OFFSET   22
#define MAINBOARD_CONTROL_FEEDBACK_UNKNOWN  0xFF
#define MAINBOARD_CONTROL_FEEDBACK_INFRARED 0x40
#define MAINBOARD_CONTROL_FEEDBACK_FLAT     0x20
#define MAINBOARD_CONTROL_FEEDBACK_CHIP     0x10

#endif
