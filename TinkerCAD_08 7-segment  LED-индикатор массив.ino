// ������ ������� Arduino ��� ����������� � �������� a-g
// ��������������� ����������
int pins[8]={13,12,11,10,9,8,7,6};
// �������� ��� ������ ���� 0-9
byte numbers[10] = { B00010001, B11010111, B00110010,
B10010010, B11010100, B10011000, B00011000, B11010011,
B00010000, B10010000 };
int number=0; // ���������� ��� ������� �����
void setup() {
// ���������������� �������� ��� ������
for (int i=0; i<8; i++) 
    pinMode(pins[i],OUTPUT);
}
void loop() {
showNumber(number);
delay(2000);
number=(number+1)%10;   // ������� �� ������� �� 10
}
// ������� ������ ����� �� �������������� ���������
void showNumber(int num) {
for (int i=0; i<8; i++) {
  if (bitRead(numbers[num],7-i)==1) // ������ �������
      digitalWrite(pins[i], HIGH);
  else // �������� �������
      digitalWrite(pins[i], LOW);
}
}
