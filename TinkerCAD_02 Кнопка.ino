int buttonState = 0;
void setup() {
  pinMode(2, INPUT);
  pinMode(13, OUTPUT);
}
void loop() {
  buttonState=digitalRead(2); // ��������� ��������� ������
  if (buttonState==HIGH) {
    digitalWrite(13, HIGH); // �������� LED
  } else {
    digitalWrite(13, LOW); // ��������� LED
  }
  delay(10); // ��������� �����
}
