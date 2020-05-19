int curState = 0; // текущее состояние кнопки
int prevState = 0; // предыдущее состояние кнопки
boolean ledOn = false; // текущее состояние
void setup() {
  pinMode(2, INPUT);
  pinMode(13, OUTPUT);
}
boolean jitter(boolean prev) {
  boolean cur=digitalRead(2);
  if (cur!=prev) { // если изменилось
      delay(5); 
      cur=digitalRead(2); // заново считываем
      return cur;
  }
}
void loop() {
  curState=jitter(prevState); // состояние без дребезга
  if (curState==HIGH && prevState==LOW) {
    ledOn=!ledOn; // изменяем текущее состояние 
  } 
  prevState=curState; // предыдущее состояние запоминаем
  digitalWrite(13, ledOn);
}
