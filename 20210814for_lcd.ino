#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);

void setup() {
  lcd.init();//초기화
  lcd.backlight();
  
}


void loop(){
  for(int a = 0;a<14;a++){
    lcd.setCursor(a,0);
    lcd.print("red");
    delay(600);
    lcd.clear();
    }
  for(int a =12;a>0;a--){
    lcd.setCursor(a,0);
    lcd.print("red");
    delay(600);
    lcd.clear();
    }
  }
