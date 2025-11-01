// include the library code:
#include <LiquidCrystal.h>
 
// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(26, 25, 27, 14, 12, 13);
 
void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
}
void loop() {
  // set the cursor to column 0, line 0 and print a message.
  lcd.setCursor(0, 0);
  lcd.print("Hello World!");  // you can change it into any text
  // set the cursor to column 0, line 1 and print a message.
  lcd.setCursor(0, 1);
  lcd.print("I am Good");    // you can change it into any text
}