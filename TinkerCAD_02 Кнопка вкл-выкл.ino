int curState = 0; // ������� ��������� ������
int prevState = 0; // ���������� ��������� ������
boolean ledOn = false; // ������� ���������
void setup() {
  pinMode(2, INPUT);
  pinMode(13, OUTPUT);
}
void loop() {
  curState=digitalRead(2); // ��������� ��������� ������
  if (curState==HIGH && prevState==LOW) {
    ledOn=!ledOn; // �������� ������� ��������� 
    digitalWrite(13, ledOn);
  } 
  prevState=curState; // ���������� ��������� ����������
}
