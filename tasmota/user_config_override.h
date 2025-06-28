#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

// Wi-Fi cấu hình sẵn
#define STA_SSID1        "Cuong t3"
#define STA_PASS1        "cuong123"

// Fallback AP nếu không kết nối được Wi-Fi
#define WIFI_CONFIG_TOOL WIFI_RETRY // thử lại Wi-Fi
#define WIFI_WAIT_TIME   120        // 2 phút trước khi vào AP mode

// Tắt BLE để tránh lỗi NimBLEDevice.h
#undef USE_ESP32_BLE

// Bật các thành phần cơ bản bạn cần
#define USE_IR_REMOTE
#define USE_LD2410
#define USE_SHT3X

#endif  // _USER_CONFIG_OVERRIDE_H_

