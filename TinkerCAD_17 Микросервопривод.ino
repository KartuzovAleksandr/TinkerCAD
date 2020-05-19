#include <Servo.h> // подключаем библиотеку
int pos = 0;
Servo servo_7; // создаем объект Servo
void setup() {
  servo_7.attach(7);
}
void loop() {
  // вращаем сервопривод от 0 до 180 градусов
  for (pos = 0; pos <= 180; pos++) {
    servo_7.write(pos);
    delay(15); 
  }
    // вращаем сервопривод в обратную сторону
  for (pos = 180; pos >= 0; pos --) {
    servo_7.write(pos);
    delay(15); 
  }
}
