#
# Example. Using I2C at P9, P10
#
import machine
from machine import Pin, SoftI2C
import bme280_float as bme280
from time import sleep

i2c = SoftI2C(scl=Pin(22), sda=Pin(21), freq=10000) 
bme = bme280.BME280(i2c=i2c)

while True:
    print(bme.values)
    sleep(1)

