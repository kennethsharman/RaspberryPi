
/*
 * LCD_Basics
 * Date: Jan 7,2019
 * 
 * Followed Arduino LCD Tutorial on howtomechatronics.com
 * 
 * Displays Happy Birthday Message
 * 
 */

/*
 * Pins of LCD:
 * PIN1: VSS - Ground pin
 * PIN2: VDD - 5 Volts input
 * PIN3: V0 - can attached pot to adjust contrast
 * PIN4: RS - Register select (0 state: send cmds 5V: data/chars to LCD)
 * PIN5: RW - Read or write to LCD
 * PIN6: E - enable writing to registers 
 * PINS7-14: D0-D7 - Data pins (write to registers)
 * PIN15: A -anode 
 * PIN16: K - Cathode
 * 
 */

#include <LiquidCrystal.h>

// Params are pin connections: (RS, Enable, D4, D5, D6, D7)
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16,2);
}

void loop() {

  lcd.print("Hi Dad");
  lcd.setCursor(0,1); // params: col, row
  delay(3000);
  lcd.clear();

  lcd.print("Hope you have a");
  lcd.setCursor(0,1);
  lcd.print("HAPPY BIRTHDAY");
  delay(3000);
  lcd.clear();

  lcd.print("HAPPY BIRTHDAY");
  lcd.blink();
  int i = 0;
  while(i<=16){
    lcd.setCursor(i,1);
    lcd.print("!");
    delay(500);
    i++;
  }

  lcd.clear();
  delay(3000);

} // end loop
