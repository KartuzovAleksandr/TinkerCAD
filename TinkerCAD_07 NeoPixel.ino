#include <Adafruit_NeoPixel.h>
#define PIN 2 // pin, куда подключен Neopixel
#define NUMPIXELS 12 // кол-во €чеек в кольце Neopixel
int const POT=0; // pin, куда подключен потенциометр
int valpot, countpix; // значение ј÷ѕ и кол-во пикселов
 // создание объекта NeoPixel 
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
int delayval = 100; // задержка небольша€
 // глобальные переменные дл€ задани€ цвета
int redColor = 0;
int greenColor = 0;
int blueColor = 0;
void setup() {
pixels.begin(); // инициализаци€ библиотеки NeoPixel
Serial.begin(9600);
}
void loop() {
setColor();
valpot=analogRead(POT); // читаем вход потенциометра
 // масштабируем вход с потенциометра
countpix=map(valpot, 0, 1023, 0, 12);
 // выводим кол-во пикселов
Serial.println(countpix);
// стираем все пикселы
for(int i=0;i < NUMPIXELS;i++){
pixels.setPixelColor(i, pixels.Color(0, 0, 0));
}
 // рисуем пикселы согласно кол-ву
for(int i=0;i < 13-countpix;i++){
  if (i<11) { // смещаем пикселы на 1 вправо
  	pixels.setPixelColor(i+1, pixels.Color(redColor, greenColor, blueColor));
 }
  else { // это 11 пиксел - он стал нулевым
    pixels.setPixelColor(0, pixels.Color(redColor, greenColor, blueColor));
}
pixels.show(); // отображение пикселов
delay(delayval); // задержка
}
}
 // генераци€ случайного цвета RGB
void setColor(){
redColor = random(0, 255);
greenColor = random(0,255);
blueColor = random(0, 255);
}
