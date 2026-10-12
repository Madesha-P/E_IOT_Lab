
int SensorPin=A0;
int value;


void setup() {
  // put your setup code here, to run once:
  pinMode(PB14,OUTPUT);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
value=analogRead(SensorPin);
if (value>=350){
  Serial.print("Raw Value :");
  Serial.println(value);
  Serial.println(" This is WET soil ! ");

}

else {
  Serial.print("Raw Value :");
  Serial.println(value);
  Serial.println("This is DRY soil ! ");

}
delay (1000);
}
