#include <Keypad.h> // Подключаем библиотеку 
const byte ROWS = 4; // 4 строки
const byte COLS = 4; // 4 столбца
const int leds[]={10,11,12,13};
char keys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'} }; 
byte rowPins[ROWS] = {9, 8, 7, 6}; 
byte colPins[COLS] = {5, 4, 3, 2}; 
Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);
void setup() {
  Serial.begin(9600);
  // Сконфигурировать контакты светодиодов как выход
  for(int i=0;i<=3;i++){
      pinMode(leds[i],OUTPUT);
  }
}
void loop() {
char key = keypad.getKey();
  if (key == '1') {
    digitalWrite(leds[0],HIGH);
    digitalWrite(leds[1],LOW);
    digitalWrite(leds[2],LOW);
    digitalWrite(leds[3],LOW);
    Serial.println("1 = 0001");
    delay(100);
  }
    if (key == '2') {
    digitalWrite(leds[0],LOW);
    digitalWrite(leds[1],HIGH);
    digitalWrite(leds[2],LOW);
    digitalWrite(leds[3],LOW);
    Serial.println("2 = 0010");
    delay(100);
  }
    if (key == '3') {
    digitalWrite(leds[0],HIGH);
    digitalWrite(leds[1],HIGH);
    digitalWrite(leds[2],LOW);
    digitalWrite(leds[3],LOW);
    Serial.println("3 = 0011");
    delay(100);
  }
    if (key == '4') {
    digitalWrite(leds[0],LOW);
    digitalWrite(leds[1],LOW);
    digitalWrite(leds[2],HIGH);
    digitalWrite(leds[3],LOW);
    Serial.println("4 = 0100");
    delay(100);
  }
    if (key == '5') {
    digitalWrite(leds[0],HIGH);
    digitalWrite(leds[1],LOW);
    digitalWrite(leds[2],HIGH);
    digitalWrite(leds[3],LOW);
    Serial.println("5 = 0101");
    delay(100);
  }
    if (key == '6') {
    digitalWrite(leds[0],LOW);
    digitalWrite(leds[1],HIGH);
    digitalWrite(leds[2],HIGH);
    digitalWrite(leds[3],LOW);
    Serial.println("6 = 0110");
    delay(100);
  }
    if (key == '7') {
    digitalWrite(leds[0],HIGH);
    digitalWrite(leds[1],HIGH);
    digitalWrite(leds[2],HIGH);
    digitalWrite(leds[3],LOW);
    Serial.println("7 = 0111");
    delay(100);
  }
    if (key == '8') {
    digitalWrite(leds[0],LOW);
    digitalWrite(leds[1],LOW);
    digitalWrite(leds[2],LOW);
    digitalWrite(leds[3],HIGH);
    Serial.println("8 = 1000");
    delay(100);
  }
    if (key == '9') {
    digitalWrite(leds[0],HIGH);
    digitalWrite(leds[1],LOW);
    digitalWrite(leds[2],LOW);
    digitalWrite(leds[3],HIGH);
    Serial.println ("9 = 1001");
    delay(100);
  }
    if (key == '0') {
    digitalWrite(leds[0],LOW);
    digitalWrite(leds[1],LOW);
    digitalWrite(leds[2],LOW);
    digitalWrite(leds[3],LOW);
    Serial.println ("0 = 0000");
    delay(100);
  }
}
