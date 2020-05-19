void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}
void loop() {
  digitalWrite(13, HIGH);
  delay(5000); // пауза 5 с
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  delay(2000); // пауза 2 с
  digitalWrite(12, LOW);
  digitalWrite(11, HIGH);
  delay(7000); // пауза 7 с
}
