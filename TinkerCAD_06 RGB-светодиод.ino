const int RED=11; // pin R
const int GREEN=10; // pin G
const int BLUE=9; // pin B
int red; // переменна€ R-составл€ющей цвета
int green; // переменна€ G-составл€ющей цвета
int blue; // переменна€ B-составл€ющей цвета
void setup() { }
void loop() {
red=255;green=0;blue=0; // изначально красный цвет
for (green=0;green<=255;green++) // от красного к желтому
     setRGB(red,green,blue);
for (red=255;red>=0;red--) // от желтому к зеленому
     setRGB(red,green,blue);
for (blue=0;blue<=255;blue++) // от зеленого к голубому
     setRGB(red,green,blue);
for (green=255;green>=0;green--) // от голубого к синему
     setRGB(red,green,blue);
for (red=0;red<=255;red++) // от синего к фиолетовому
     setRGB(red,green,blue);
delay(1000);
}
// установка цвета RGB-светодиода через Ў»ћ
void setRGB(int r,int g,int b) {
analogWrite(RED,r);
analogWrite(GREEN,g);
analogWrite(BLUE,b);
delay(20);
}
