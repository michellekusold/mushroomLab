
#SENSORS:
All sensors are hooked up to a RedBear BLEduino microcontroller
(http://redbearlab.com/blendmicro/)

##Temperature sensor:

18B20 Temperature sensor
```
------
|     --- Signal
| D   --- +5V
|     --- GND
------
```
Hook Signal up to pin 10
Hook 5V up to the Vout
Hook GND to GND

Uses the OneWire Library. Documentation: http://www.pjrc.com/teensy/td_libs_OneWire.html
Currently ouputs in Farenheit and Celsius

##Light sensor:
Photoresistor sensor. (type unknown)
-measures resistance created due to light presence. Can not provide a scientifically accurate light measurement; However, it should give a good indicator of light presence.
```
------
|     --- Signal
| O   --- +5V
|     --- GND
------
```
** Note that this schematic is not the same as the documentation **
Hook Signal up to pin A0
Hook 5V up to the Vout
Hook GND to GND

Uses an approximation calculation for conversion to Lux (but can't be trusted to be accurate)

##Humidity sensor:

DHT11 Digital Temperature & Humidity sensor
-measures relative humidity: ratio of water vapor in the air to the saturation point of water vapor in the air
```
------
| | | --- GND
| | | --- +5V
| | | --- Signal
------
```
Hook Signal up to pin 10
Hook 5V up to the Vout
Hook GND to GND

Uses the DHT Library.
Code and tutorial: http://www.circuitbasics.com/how-to-set-up-the-dht11-humidity-sensor-on-an-arduino/
