==============================
SENSORS:
==============================
All sensors are hooked up to a RedBear BLEduino microcontroller
(http://redbearlab.com/blendmicro/)

--------------------
Temperature sensor:
--------------------
18B20 Temperature sensor
check Sensor Documentation
------
|     --- Signal
| D   --- +5V
|     --- GND
------

Hook Signal up to pin 10
Hook 5V up to the Vout
Hook GND to GND

Uses OneWire. Documentation: http://www.pjrc.com/teensy/td_libs_OneWire.html
Currently ouputs in Farenheit and Celsius

--------------------
Light sensor:
--------------------