#include <LiquidCrystal.h>
int cm = 0; // ���������� � �����������
 // �������������� LCD
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
long readUltrasonicDistance(int pin) {
  pinMode(pin, OUTPUT);   // ������ ��� �� �����
  digitalWrite(pin, LOW); // �������� �������
  delayMicroseconds(2);
   // ������������� pin �� 10 ���
  digitalWrite(pin, HIGH);
  delayMicroseconds(10);
  digitalWrite(pin, LOW);
  pinMode(pin, INPUT); // ������ ��� �� ����
   // ������ ������������ ������� � ���
  return pulseIn(pin, HIGH);
}
void setup() {
  lcd.begin(16, 2); // ������������� ���-�� ����� � ��������
  pinMode(7, INPUT);
}
void loop() {
  lcd.clear();
   // �������������� � ��
  cm = 0.01723 * readUltrasonicDistance(7);
  lcd.setCursor(0, 0);
  lcd.print(cm); // �������� �� ������
  lcd.print(" cm");
  delay(1000);
}
