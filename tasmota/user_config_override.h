#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

// Wi-Fi mặc định
#define STA_SSID1        "Cuong t3"
#define STA_PASS1        "cuong123"

// Nếu không kết nối được thì phát AP để thêm Wi-Fi
#define WIFI_CONFIG_TOOL WIFI_RETRY

// Bật BLE (cho LD2410, cảm biến Mijia)
#define USE_BLE_ESP32

// Bật Matter
#define USE_MATTER

// Bật IR 2 chiều
#define USE_IR_REMOTE
#define USE_IR_RECEIVE

// LD2410
#define USE_HR_SENSOR
#define USE_LD2410

#endif  // _USER_CONFIG_OVERRIDE_H_
