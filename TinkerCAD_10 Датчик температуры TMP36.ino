#include <LiquidCrystal.h> // подключаем библиотеку
// инициализируем дисплей подключенными пинами
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
void setup() {
   // устанавливаем кол-во строк и столбцов
  lcd.begin(16, 2);
  Serial.begin(9600);
}
float fmap(long x, long in_min, long in_max, 
           long out_min, long out_max) {
  return (float)(x - in_min) * (out_max - out_min) /
    (float)(in_max - in_min) + out_min;
}
void loop() {
  int val=analogRead(A0);
  Serial.println(val);
  float C = fmap(((val - 20 ) * 3.04), 0, 1023, -40, 125);
  float F = C * 9 / 5 + 32;  // Фаренгейт
  lcd.clear();
  lcd.setCursor(0, 0); // ставим курсор в первую строку
  lcd.print(C); lcd.print(" C");
  lcd.setCursor(0, 1); ставим курсор во вторую строку
  lcd.print(F); lcd.print(" F");
  delay(2000);
}
