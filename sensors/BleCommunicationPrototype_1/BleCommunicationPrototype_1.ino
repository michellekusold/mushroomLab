
/*
 *    BLE connection test to the RedBear Chat android app
 */

#include <SPI.h>
#include <boards.h>
#include <RBL_nRF8001.h>

void setup()
{
  
  // Set your BLE advertising name here, max. length 10
  ble_set_name("Test Sensor");
  
  // Init. and start BLE library.
  ble_begin();
  
  // Enable serial debug
  Serial.begin(57600);
}

unsigned char buf[16] = {0};
unsigned char len = 0;

void loop()
{
  if ( ble_connected() )
  {
    // sensor value example
    int value = 123;
    String valueStr = String(value);
    byte valueBytes[valueStr.length()+1];
    valueStr.getBytes(valueBytes, valueStr.length() + 1);
 
    ble_write_bytes(valueBytes, sizeof(valueBytes));
  }

  ble_do_events();
  
  if ( ble_available() )
  {
    while ( ble_available() )
    {
      Serial.write(ble_read());
    }
    
    Serial.println();
  }
 
  delay(1000);  
}
