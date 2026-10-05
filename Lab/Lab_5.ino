const int micpin=A0;
int adc=0;


void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
while(!Serial);
analogReadResolution(12);
Serial.println("Max4466 microphoen is polling");
}

void loop() {
  // put your main code here, to run repeatedly:
adc=analogRead(micpin);
Serial.print("ADC Value :");
Serial.println(adc);
delay(1000);
}
