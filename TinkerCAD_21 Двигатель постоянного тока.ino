#include <Keypad.h>
int motorPin1 = 5;   // пины для подключения двигателя
int motorPin2 = 6;   
const byte ROWS = 2; // 2 строки 
const byte COLS = 1; // 1 колонка
// массив символов для кнопок
char hexaKeys[ROWS][COLS] = { {'2'}, {'1'} };
byte rowPins[ROWS] = {3, 2}; // подключение строк keypad
byte colPins[COLS] = {4};    // подключение столбцов keypad
// инициализация класса Keypad
Keypad customKeypad = Keypad( makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS); 
void setup(){
  Serial.begin(9600);
}
void loop(){
  char customKey = customKeypad.getKey();
  switch (customKey) {
    case '1':
      Serial.println("Вращение влево");
      rotateLeft();
      break;
    case '2':
      Serial.println("Вращение вправо");
      rotateRight();
      break;
  }
}
void rotateLeft(){
  digitalWrite(motorPin1, HIGH);   // один пин включаем
  digitalWrite(motorPin2, LOW);    // другой выключаем
}
void rotateRight(){
  digitalWrite(motorPin2, HIGH);   
  digitalWrite(motorPin1, LOW);    
}
