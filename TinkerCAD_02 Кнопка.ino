int buttonState = 0;
void setup() {
  pinMode(2, INPUT);
  pinMode(13, OUTPUT);
}
void loop() {
  buttonState=digitalRead(2); // считываем состояние кнопки
  if (buttonState==HIGH) {
    digitalWrite(13, HIGH); // включаем LED
  } else {
    digitalWrite(13, LOW); // выключаем LED
  }
  delay(10); // небольшая пауза
}
