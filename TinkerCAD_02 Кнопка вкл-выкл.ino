int curState = 0; // текущее состояние кнопки
int prevState = 0; // предыдущее состояние кнопки
boolean ledOn = false; // текущее состояние
void setup() {
  pinMode(2, INPUT);
  pinMode(13, OUTPUT);
}
void loop() {
  curState=digitalRead(2); // считываем состояние кнопки
  if (curState==HIGH && prevState==LOW) {
    ledOn=!ledOn; // изменяем текущее состояние 
    digitalWrite(13, ledOn);
  } 
  prevState=curState; // предыдущее состояние запоминаем
}
