#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);
void setup() {
 pinMode(8,INPUT);
 pinMode(A0,INPUT);
 Serial.begin(9600);
 lcd.init();//lcd초기화
 lcd.backlight();
}

void loop() {
 if (digitalRead(8) == 1){
  lcd.setCursor(2,1);
  lcd.print("Slide:");
  lcd.setCursor(8,1);
  lcd.print(analogRead(A0));
  delay(500);
  lcd.clear();
  }
 else{
  lcd.clear(); 
  }
}
