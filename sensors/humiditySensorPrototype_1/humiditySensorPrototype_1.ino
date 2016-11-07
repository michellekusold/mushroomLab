/*
 * Write Humidity Sensor Output to Console
 * usage: for monitoring and recording relative humidity in a mushroom grow space
 * author: Michelle Kusold 
 */
 
#include <dht.h>

dht DHT;

#define DHT11_PIN 10

void setup(){
  Serial.begin(9600);
}

void loop()
{
  int chk = DHT.read11(DHT11_PIN);
  //Serial.print("Temperature = ");
  //Serial.println(DHT.temperature);
  if(DHT.humidity >=0 && DHT.humidity <=100){
    Serial.print("Humidity = ");
    Serial.print(DHT.humidity);
    Serial. println("%");
  }
  delay(1000);
}

