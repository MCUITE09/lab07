#include <LiquidCrystal.h>


#include <LiquidCrystal.h> // include the library code
LiquidCrystal lcd(12, 11, 5, 4, 3, 2); // initialize interface pins
char ch;

void setup() {
lcd.begin(20, 2); // set up the LCD's number of columns and rows: Print a message to the LCD.

lcd.print("03052422 04050555");
lcd.setCursor(0, 1);
lcd.print("Mary XYX"); // print the number of secondssince reset:
Serial.begin(9600);
}

void loop() {
// set the cursor to column 0, line 1
// (note: line 1 is the second row, since countingbegins with 0):

if(Serial.available()){ 
 lcd.clear();

  while(Serial.available())
  {
  ch=Serial.read();
  if(ch=='\r')
  {
    Serial.println();
    break;
  }
  if(ch>0)
  {
  Serial.print(ch);
  lcd.print(ch);
  }
  }
  
}
}
