char command;
void setup() {
  pinMode(PB14,OUTPUT);
  Serial.begin(9600);
  Serial.println("Enter 1 to turn LED ON");
  Serial.println("Enter 0 to turn LED OFF");
}

void loop() {
  if(Serial.available() > 0){
    command = Serial.read();
    if (command == '1'){
      digitalWrite(PB14,HIGH);
      Serial.println("LED Status : ON");
    }
    else if(command == '0'){
      digitalWrite(PB14,LOW);
      Serial.println("LED Status : OFF");
    }
    // else{
    //   Serial.println("Enter an Appropriate output for LED command\n1-ON\n0-OFF");
    // }
  }

}
