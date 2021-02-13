/*
#include <LiquidCrystal.h>
//                BS  E  D4 D5  D6 D7
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);
*/

#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <Vector.h>

LiquidCrystal_I2C lcd (0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);
char * messagePadded = "                    Kaufs dir doch und supporte die devs ;)                    ";

void setup()
{
  lcd.begin (20, 4);
  lcd.setCursor(0, 0);
  lcd.print("Running Text:");
}

void loop()
{
  for (int letter = 0; letter <= strlen(messagePadded) - 19; letter++) //From 0 to upto n-20 characters supply to below function
  {
    showLetters(0, letter);
  }
}

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
