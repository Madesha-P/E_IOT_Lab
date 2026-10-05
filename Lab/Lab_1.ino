//To count the number of times blinked
int count=0;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(PB14,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(PB14,HIGH);
delay(1000);
digitalWrite(PB14,LOW);
delay(1000);
count++;

Serial.println("The number of times the LED blinked : ");
Serial.println(count);

}
