void setup() {
pinMode(7, INPUT_PULLUP);
pinMode(6, INPUT_PULLUP);
pinMode(5, INPUT_PULLUP);
pinMode(4, INPUT_PULLUP);
Serial.begin(9600);
}
void loop() {
Serial.println("DIP");
int s1state = digitalRead(7);
int s2state = digitalRead(6);  
int s3state = digitalRead(5);  
int s4state = digitalRead(4);  
Serial.print(s1state);
Serial.print(s2state);
Serial.print(s3state);
Serial.print(s4state);
Serial.println();
delay(1000);
}
