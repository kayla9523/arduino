#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);
void setup() {
pinMode(A1,INPUT);
pinMode(A0,INPUT);
lcd.init(); // lcd 초기화
lcd.backlight();
}

void loop() {
lcd.setCursor(0,0);
lcd.print("photo:");
lcd.setCursor(6,0);
lcd.print(analogRead(A1));
lcd.setCursor(0,1);
lcd.print("slide:");
lcd.setCursor(6,1);
lcd.print(analogRead(A0));
delay(300);
lcd.clear();
}
