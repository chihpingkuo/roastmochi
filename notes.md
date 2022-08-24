esp32

max6675:  temperature,  k type thermocouple
GY-BME280-5V : relative humidity, barometric pressure and ambient temperature
ky-040: rotary encoder
b3f-4055: tactile switch
lcd2004 i2c (PCF8574) 

web server https://github.com/me-no-dev/ESPAsyncWebServer
websocket
react
chart.js
fastapi ?



install CP210x windows driver
COM4


esp32 board manager
https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json


bme280 : I2C address: 0x76

max6675 : SPI protocol
用 CS 分別不同SPI slave模組


2004 LCD I2C address: 0x27

## platformio.ini  
# Using Arduino Framework with Staging version

platform_packages =
    platformio/framework-arduinoespressif32 @ https://github.com/espressif/arduino-esp32.git

lib_ldf_mode=deep

lib_deps = marcoschwartz/LiquidCrystal_I2C@^1.1.4
lib_deps = adafruit/MAX6675 library@^1.1.0
lib_deps = adafruit/Adafruit BME280 Library@^2.2.2
lib_deps = me-no-dev/ESP Async WebServer @ ^1.2.3
