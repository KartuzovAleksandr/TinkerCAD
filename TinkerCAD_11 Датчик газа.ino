int const PIN_GAS = A2;
int LED_GREEN = 7;
int LED_YELLOW = 6;
int LED_RED = 5;
void setup(){
    pinMode(LED_GREEN, OUTPUT);
    pinMode(LED_YELLOW, OUTPUT);
    pinMode(LED_RED, OUTPUT);
    Serial.begin(9600);
}
void loop(){
    int gas = analogRead(PIN_GAS);
    Serial.println(gas);
    gas = map(gas, 300, 750, 0, 100);
    Serial.println(gas); // значение дыма в процентах 
    if (gas < 35) {
        digitalWrite(LED_GREEN, HIGH);
        digitalWrite(LED_YELLOW, LOW);
        digitalWrite(LED_RED, LOW);
    } else if (gas < 75) {
        digitalWrite(LED_GREEN, LOW);
        digitalWrite(LED_YELLOW, HIGH);
        digitalWrite(LED_RED, LOW);
    } else {
        digitalWrite(LED_GREEN, LOW);
        digitalWrite(LED_YELLOW, LOW);
        digitalWrite(LED_RED, HIGH);
    }
    delay(250);
}
