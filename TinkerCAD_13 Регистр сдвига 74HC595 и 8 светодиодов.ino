int latch_Pin = 12;
int clock_Pin = 11;
int data_Pin = 13;
byte leds = 0; // �������� ����
int curLED = 0; // ������� ������� ���������
void setup() {
    pinMode(latch_Pin, OUTPUT);
    pinMode(data_Pin, OUTPUT);
    pinMode(clock_Pin, OUTPUT);
}
void loop() {
    leds = 0; // �������� �����
    if (curLED == 7) 
        curLED = 0; // ������� �� ����� ����
    else curLED++; // ����������� �������
    bitSet(leds, curLED); // ��������� �����
    digitalWrite(latch_Pin, LOW); // ���������� �������
      // ������� ������� ���� leds, ������� � ��������
    shiftOut(data_Pin, clock_Pin, LSBFIRST, leds);
    digitalWrite(latch_Pin, HIGH); // ����������� �������
    delay(1000);
}
