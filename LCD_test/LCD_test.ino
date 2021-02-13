#include <Wire.h> 
#include <LiquidCrystal_I2C.h>


LiquidCrystal_I2C lcd (0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);

void setup() {
  // put your setup code here, to run once:
  
  lcd.begin(30, 4);
  
  /*
  lcd.setCursor(3, 0);
  lcd.print("Testing :)");
  lcd.setCursor(0, 1);
  lcd.print("-*-*-*-*-*-*-");
  for(auto i : text)
  {
    vec1.push_back(i);
  }
  */
}

void loop() 
{  
  
  int i;
  for( i = 19; i >= 0; --i )
  {
    Serial.print("gerald");
    lcd.setCursor(i, 0);
    lcd.print("Gerald");
    delay(500);
    lcd.clear();
  }
  
  /*
  for( i = 19; i >= 0; --i )
  {
    lcd.setCursor(i, 0);
    lcd.print(" ");
    delay(100);    
  }
  */
   
  
}
