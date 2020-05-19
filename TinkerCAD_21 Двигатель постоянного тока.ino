#include <Keypad.h>
int motorPin1 = 5;   // ���� ��� ����������� ���������
int motorPin2 = 6;   
const byte ROWS = 2; // 2 ������ 
const byte COLS = 1; // 1 �������
// ������ �������� ��� ������
char hexaKeys[ROWS][COLS] = { {'2'}, {'1'} };
byte rowPins[ROWS] = {3, 2}; // ����������� ����� keypad
byte colPins[COLS] = {4};    // ����������� �������� keypad
// ������������� ������ Keypad
Keypad customKeypad = Keypad( makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS); 
void setup(){
  Serial.begin(9600);
}
void loop(){
  char customKey = customKeypad.getKey();
  switch (customKey) {
    case '1':
      Serial.println("�������� �����");
      rotateLeft();
      break;
    case '2':
      Serial.println("�������� ������");
      rotateRight();
      break;
  }
}
void rotateLeft(){
  digitalWrite(motorPin1, HIGH);   // ���� ��� ��������
  digitalWrite(motorPin2, LOW);    // ������ ���������
}
void rotateRight(){
  digitalWrite(motorPin2, HIGH);   
  digitalWrite(motorPin1, LOW);    
}
