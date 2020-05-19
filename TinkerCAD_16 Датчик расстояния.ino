#include <LiquidCrystal.h>
int cm = 0; // расстояние в сантиметрах
 // инициализируем LCD
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
long readUltrasonicDistance(int pin) {
  pinMode(pin, OUTPUT);   // ставим пин на выход
  digitalWrite(pin, LOW); // обнуляем триггер
  delayMicroseconds(2);
   // устанавливаем pin на 10 мкс
  digitalWrite(pin, HIGH);
  delayMicroseconds(10);
  digitalWrite(pin, LOW);
  pinMode(pin, INPUT); // ставим пин на вход
   // читаем длительность сигнала в мкс
  return pulseIn(pin, HIGH);
}
void setup() {
  lcd.begin(16, 2); // устанавливаем кол-во строк и столбцов
  pinMode(7, INPUT);
}
void loop() {
  lcd.clear();
   // преобразование в см
  cm = 0.01723 * readUltrasonicDistance(7);
  lcd.setCursor(0, 0);
  lcd.print(cm); // печатаем на экране
  lcd.print(" cm");
  delay(1000);
}
