#include <LiquidCrystal.h>

// lcd (rs,e,d4,d5,d6,d7);

LiquidCrystal lcd(8,7,6,5,4,3);

void setup() {

  lcd.begin(16,2);
  lcd.print("Game Over !!!");
}

void loop() {

}
