#include <Servo.h> // ���������� ����������
int pos = 0;
Servo servo_7; // ������� ������ Servo
void setup() {
  servo_7.attach(7);
}
void loop() {
  // ������� ����������� �� 0 �� 180 ��������
  for (pos = 0; pos <= 180; pos++) {
    servo_7.write(pos);
    delay(15); 
  }
    // ������� ����������� � �������� �������
  for (pos = 180; pos >= 0; pos --) {
    servo_7.write(pos);
    delay(15); 
  }
}
