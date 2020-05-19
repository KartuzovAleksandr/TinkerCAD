/* LiquidCrystal Library - Hello World
 This sketch prints "Hello World!" to the LCD
 and shows the time.
   The circuit:
 * LCD RS pin to digital pin 12
 * LCD Enable pin to digital pin 11
 * LCD D4 pin to digital pin 5
 * LCD D5 pin to digital pin 4
 * LCD D6 pin to digital pin 3
 * LCD D7 pin to digital pin 2
 * LCD R/W pin to ground
 * LCD VSS pin to ground
 * LCD VCC pin to 5V
 * 10K potenciometer (resistor):
 * ends to +5V and ground
 * wiper to LCD VO pin (pin 3)
 */
#include <LiquidCrystal.h> // подключаем библиотеку
// инициализируем дисплей подключенными пинами
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
void setup() {
   // устанавливаем кол-во строк и столбцов
  lcd.begin(16, 2);
   // выводим сообщение на экран
  lcd.print("Hello, world!");
}
void loop() {
  // устанавливаем курсор на вторую строчку в начало
  lcd.setCursor(0, 1);
  // выводим кол-во секунд с начала работы
  lcd.print(millis() / 1000);
}
