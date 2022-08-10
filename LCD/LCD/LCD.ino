#include<LiquidCrystal.h>
const int en=3,rs=2,d4=4,d5=5,d6=6,d7=7;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);
void setup() {
  // put your setup code here, to run once:
lcd.begin(16,2);
lcd.setCursor(0,0);
lcd.print("Rushikesh");
}

void loop() {
  // put your main code here, to run repeatedly:
lcd.setCursor(0,1);
lcd.print(millis());
}
