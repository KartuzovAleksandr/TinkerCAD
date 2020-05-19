int LEDS[4] = {7,6,5,4}; // ������ �����������
void setup() {
  Serial.begin(9600);
  for (int i=0; i < 4; i++)
       pinMode(LEDS[i], OUTPUT);
}
void loop() {
  int val = analogRead(A0);
  Serial.println(val);
    // �������������� � �������� 0..3
  int light = map(val, 6, 679, 1, 4);
   // �������� ����������
  for (int i=0; i <= light; i++) 
       digitalWrite(LEDS[i], HIGH);
   // ����� ���������
  for (int i=light; i < 4; i++) 
       digitalWrite(LEDS[i], LOW);
  delay(100); 
}
