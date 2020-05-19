int latch_Pin = 12;
int clock_Pin = 11;
int data_Pin = 13;
byte leds = 0; // выходной байт
int curLED = 0; // текущий горящий светодиод
void setup() {
    pinMode(latch_Pin, OUTPUT);
    pinMode(data_Pin, OUTPUT);
    pinMode(clock_Pin, OUTPUT);
}
void loop() {
    leds = 0; // обнуляем выход
    if (curLED == 7) 
        curLED = 0; // переход на новый цикл
    else curLED++; // увеличиваем счетчик
    bitSet(leds, curLED); // установка битов
    digitalWrite(latch_Pin, LOW); // сбрасываем защелку
      // выводит побитно байт leds, начиная с младшего
    shiftOut(data_Pin, clock_Pin, LSBFIRST, leds);
    digitalWrite(latch_Pin, HIGH); // защелкиваем регистр
    delay(1000);
}
