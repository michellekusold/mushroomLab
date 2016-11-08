/*************************************************/

const int photocellPin = A0;

int outputVoltage = 0;
/*************************************************/
void setup()
{
  Serial.begin(9600);
}
/*************************************************/
void loop()
{
  outputVoltage = analogRead(photocellPin);
  float lightIntensity = 0.0;
  if(outputVoltage > 0){
    lightIntensity = (500.0 / outputVoltage);
  }
  else{
    lightIntensity = 0;
  }
  Serial.print("Light Intensity: ");
  Serial.println(lightIntensity);
  delay(500);
}
/*************************************************/
