int SRCLK_Pin = 13; // pin 11 75HC595
int RCLK_Pin = 8;   // pin 12 75HC595
int SER_Pin = 11;   // pin 14 75HC595
#define Count_74hc595 2 // колическтво регистров сдвига
boolean Registers[Count_74hc595*8];//массив светодиодов (16)
void setup() { 
  pinMode(SER_Pin, OUTPUT);
  pinMode(RCLK_Pin, OUTPUT);
  pinMode(SRCLK_Pin, OUTPUT);
  ClearRegisters();  
}               
void WriteRegisters() { 
  digitalWrite(RCLK_Pin, LOW);  // сброс защелки
  // установка разрядов регистров
  for(int i = Count_74hc595 * 8 - 1; i >=  0; i--) { 
     digitalWrite(SRCLK_Pin, LOW);  //clock low
     int val = Registers[i];
     digitalWrite(SER_Pin, val);    // пишем данные
     digitalWrite(SRCLK_Pin, HIGH); // устанавливаем счетчик
   } 
   digitalWrite(RCLK_Pin, HIGH);  // защелкиваем
}
void ClearRegisters() { // обнуляем регистры
  for(int i = Count_74hc595 * 8 - 1; i >=  0; i--)
      Registers[i] = LOW;
  WriteRegisters();
} 
// установка регистров
void SetRegister(int index, int value) { 
  Registers[index] = value;  // записываем массив
  WriteRegisters();          // пишем в регистры
}
void loop() {
  SetRegister(7, HIGH); delay (200); // зажигаем светодиоды
  SetRegister(6, HIGH); delay (200); 
  SetRegister(5, HIGH); delay (200); 
  SetRegister(4, HIGH); delay (200); 
  SetRegister(3, HIGH); delay (200); 
  SetRegister(2, HIGH); delay (200); 
  SetRegister(1, HIGH); delay (200); 
  SetRegister(0, HIGH); delay (200); 
  SetRegister(15,HIGH); delay (200); 
  SetRegister(14,HIGH); delay (200); 
  SetRegister(13,HIGH); delay (200); 
  SetRegister(12,HIGH); delay (200); 
  SetRegister(11,HIGH); delay (200); 
  SetRegister(10,HIGH); delay (200); 
  SetRegister(9, HIGH); delay (200); 
  SetRegister(8, HIGH); delay (200); 
  delay(500);
  SetRegister(8, LOW); delay (200); // гасим светодиоды
  SetRegister(9, LOW); delay (200); 
  SetRegister(10,LOW); delay (200); 
  SetRegister(11,LOW); delay (200); 
  SetRegister(12,LOW); delay (200); 
  SetRegister(13,LOW); delay (200); 
  SetRegister(14,LOW); delay (200); 
  SetRegister(15,LOW); delay (200); 
  SetRegister(0, LOW); delay (200); 
  SetRegister(1, LOW); delay (200); 
  SetRegister(2, LOW); delay (200); 
  SetRegister(3, LOW); delay (200); 
  SetRegister(4, LOW); delay (200); 
  SetRegister(5, LOW); delay (200); 
  SetRegister(6, LOW); delay (200); 
  SetRegister(7, LOW); delay (200); 
  delay(500);
}
