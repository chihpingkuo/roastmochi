from max6675 import MAX6675
from machine import Pin
import time

so1 = Pin(19, Pin.IN)
sck1 = Pin(18, Pin.OUT)
cs1 = Pin(5, Pin.OUT)

so2 = Pin(12, Pin.IN)
sck2 = Pin(14, Pin.OUT)
cs2 = Pin(13, Pin.OUT)

max1 = MAX6675(sck1, cs1, so1)
max2 = MAX6675(sck2, cs2, so2)

for _ in range(100):
    print("T1 " + str(max1.read()))
    print("T2 " + str(max2.read()))
    time.sleep(1)