void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}
void loop() {
  digitalWrite(13, HIGH);
  delay(5000); // ����� 5 �
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  delay(2000); // ����� 2 �
  digitalWrite(12, LOW);
  digitalWrite(11, HIGH);
  delay(7000); // ����� 7 �
}
