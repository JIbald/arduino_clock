#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <Vector.h>

LiquidCrystal_I2C lcd (0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);

void setup() {
  // put your setup code here, to run once:
  lcd.begin(20, 4);
  lcd.setCursor(0, 0);
  lcd.print("01234567890123456789");
  lcd.setCursor(0, 1);
  lcd.print("01234567890123456789");
  lcd.setCursor(0, 2);
  lcd.print("01234567890123456789");
  lcd.setCursor(0, 3);
  lcd.print("01234567890123456789");
}

void loop() 
{
  // put your main code here, to run repeatedly:
  lcd.scrollDisplayLeft();
  delay(1000);
}
