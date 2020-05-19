#include <Adafruit_NeoPixel.h>
#define PIN 2 // pin, ���� ��������� Neopixel
#define NUMPIXELS 12 // ���-�� ����� � ������ Neopixel
int const POT=0; // pin, ���� ��������� ������������
int valpot, countpix; // �������� ��� � ���-�� ��������
 // �������� ������� NeoPixel 
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
int delayval = 100; // �������� ���������
 // ���������� ���������� ��� ������� �����
int redColor = 0;
int greenColor = 0;
int blueColor = 0;
void setup() {
pixels.begin(); // ������������� ���������� NeoPixel
Serial.begin(9600);
}
void loop() {
setColor();
valpot=analogRead(POT); // ������ ���� �������������
 // ������������ ���� � �������������
countpix=map(valpot, 0, 1023, 0, 12);
 // ������� ���-�� ��������
Serial.println(countpix);
// ������� ��� �������
for(int i=0;i < NUMPIXELS;i++){
pixels.setPixelColor(i, pixels.Color(0, 0, 0));
}
 // ������ ������� �������� ���-��
for(int i=0;i < 13-countpix;i++){
  if (i<11) { // ������� ������� �� 1 ������
  	pixels.setPixelColor(i+1, pixels.Color(redColor, greenColor, blueColor));
 }
  else { // ��� 11 ������ - �� ���� �������
    pixels.setPixelColor(0, pixels.Color(redColor, greenColor, blueColor));
}
pixels.show(); // ����������� ��������
delay(delayval); // ��������
}
}
 // ��������� ���������� ����� RGB
void setColor(){
redColor = random(0, 255);
greenColor = random(0,255);
blueColor = random(0, 255);
}
