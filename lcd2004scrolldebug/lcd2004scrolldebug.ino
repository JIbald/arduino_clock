#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <Vector.h>

LiquidCrystal_I2C lcd (0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);
char * messagePadded = "                    Test                    ";




void showLetters(int printStart, int startLetter)
{
  lcd.setCursor(printStart, 1);
  for (int letter = startLetter; letter <= startLetter + 19; letter++) // Print only 20 chars in Line #2 starting 'startLetter'
  {
    lcd.print(messagePadded[letter]);
  }
  lcd.print(" ");
  delay(200);
}

void setup() {
  lcd.clear();
  // put your setup code here, to run once:
  showLetters(0, 0);

}

void loop() {
  // put your main code here, to run repeatedly:

}
