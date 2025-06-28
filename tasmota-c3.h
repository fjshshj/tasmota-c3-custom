// tasmota-c3.h

#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

#define STA_SSID1        "Cuong t3"
#define STA_PASS1        "cuong123"

#define WIFI_CONFIG_TOOL WIFI_RETRY

#define USE_IR_REMOTE
#define USE_SML_MQTT
#define USE_LIGHT_SENSOR

#define USE_BLE_ESP32
#define USE_MI_ESP32
#define USE_MATTER

#define SENSOR_I2C_SHT3X
#define USE_LD2410

// LD2410 GPIO config
#define GPIO_SENSOR_PRESENCE 2      // OUT chân LD2410 nối vào GPIO2
#define GPIO_UART1_TXD       3      // TX của LD2410 → GPIO3 (RX của ESP)
#define GPIO_UART1_RXD       4      // RX của LD2410 ← GPIO4 (TX của ESP)

#endif  // _USER_CONFIG_OVERRIDE_H_
