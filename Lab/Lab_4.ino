
#include <BH1750.h>
#include <Wire.h>
BH1750 light;


void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
Wire.begin();
if(!light.begin()){
  Serial.println("Error initializing BH1750");
  while(1);
}

  Serial.println("BH1750 Light Sensor - Polling mode");


}

void loop() {
  // put your main code here, to run repeatedly:

float lux=light.readLightLevel();
  Serial.print("Light Level :");
  Serial.print(lux);
  Serial.print("lx");
  delay(1000);
}
