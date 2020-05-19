int LEDS[4] = {7,6,5,4}; // выходы светодиодов
void setup() {
  Serial.begin(9600);
  for (int i=0; i < 4; i++)
       pinMode(LEDS[i], OUTPUT);
}
void loop() {
  int val = analogRead(A0);
  Serial.println(val);
    // преобразование в диапазон 0..3
  int light = map(val, 6, 679, 1, 4);
   // зажигаем светодиоды
  for (int i=0; i <= light; i++) 
       digitalWrite(LEDS[i], HIGH);
   // гасим остальные
  for (int i=light; i < 4; i++) 
       digitalWrite(LEDS[i], LOW);
  delay(100); 
}
