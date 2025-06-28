#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

// WiFi
#define STA_SSID1        "Cuong t3"
#define STA_PASS1        "cuong123"

// Enable Matter and BLE
#define USE_MATTER
#define USE_BLE_ESP32

// IR (2 chiều)
#define USE_IR_REMOTE
#define USE_IR_RECEIVE
#define USE_IR_HVAC

// LD2410
#define USE_HR_SENSOR
#define HR_SENSOR_UART_TX 4
#define HR_SENSOR_UART_RX 3
#define HR_SENSOR_OUT_PIN 2

// I2C - STH3x
#define USE_I2C
#define I2C_SDA_PIN 6
#define I2C_SCL_PIN 7
#define USE_SHT3X

#endif  // _USER_CONFIG_OVERRIDE_H_
