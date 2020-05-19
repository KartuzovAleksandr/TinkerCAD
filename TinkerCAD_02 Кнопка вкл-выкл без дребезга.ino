int curState = 0; // ������� ��������� ������
int prevState = 0; // ���������� ��������� ������
boolean ledOn = false; // ������� ���������
void setup() {
  pinMode(2, INPUT);
  pinMode(13, OUTPUT);
}
boolean jitter(boolean prev) {
  boolean cur=digitalRead(2);
  if (cur!=prev) { // ���� ����������
      delay(5); 
      cur=digitalRead(2); // ������ ���������
      return cur;
  }
}
void loop() {
  curState=jitter(prevState); // ��������� ��� ��������
  if (curState==HIGH && prevState==LOW) {
    ledOn=!ledOn; // �������� ������� ��������� 
  } 
  prevState=curState; // ���������� ��������� ����������
  digitalWrite(13, ledOn);
}
