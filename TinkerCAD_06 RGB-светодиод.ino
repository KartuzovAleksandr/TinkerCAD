const int RED=11; // pin R
const int GREEN=10; // pin G
const int BLUE=9; // pin B
int red; // ���������� R-������������ �����
int green; // ���������� G-������������ �����
int blue; // ���������� B-������������ �����
void setup() { }
void loop() {
red=255;green=0;blue=0; // ���������� ������� ����
for (green=0;green<=255;green++) // �� �������� � �������
     setRGB(red,green,blue);
for (red=255;red>=0;red--) // �� ������� � ��������
     setRGB(red,green,blue);
for (blue=0;blue<=255;blue++) // �� �������� � ��������
     setRGB(red,green,blue);
for (green=255;green>=0;green--) // �� �������� � ������
     setRGB(red,green,blue);
for (red=0;red<=255;red++) // �� ������ � �����������
     setRGB(red,green,blue);
delay(1000);
}
// ��������� ����� RGB-���������� ����� ���
void setRGB(int r,int g,int b) {
analogWrite(RED,r);
analogWrite(GREEN,g);
analogWrite(BLUE,b);
delay(20);
}
