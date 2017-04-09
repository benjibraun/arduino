#include <LiquidCrystal.h> 
LiquidCrystal lcd(12, 11, 5, 4, 3, 2); 
void setup() {
  lcd.begin(16, 2);
}
void loop() {
  lcd.setCursor(0, 0);
  lcd.print("I STAND WITH CEU"); // nem hadjuk! 
  lcd.setCursor(0, 1);
  lcd.print("  YBL TER 17:00  "); // A várkert bazár elött találkozunk 5-kor!
}
