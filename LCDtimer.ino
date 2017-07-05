#include <LiquidCrystal.h> // load a liquid display library
LiquidCrystal LCD(10,9,5,4,3,2); // create the LiquidCrystal object
                                // named LCD
/* LCD pin => Arduino pin no.
 * RS => pin 10
 * E => pin 9
 * DB4 => pin 5
 * DB5 => pin 4
 * DB6 => pin 3
 * DB7 => pin 2
 */
int myCounter = 0; // variable counter

void setup() {
  // put your setup code here, to run once:
  LCD.begin(16,2); // tell Arduino our LCD has 16 columns and 2 rows
  LCD.setCursor(0,0);// set LCD cursor to upper left corner of display
  LCD.print("My Timer"); //  Print first line
}

void loop() {
  // put your main code here, to run repeatedly:
  for(myCounter=1; myCounter<=10; myCounter++)
  {
    LCD.setCursor(0,1);// set LCD cursor to column 0, row 1
    LCD.print("                "); // clear row 1
    
    LCD.setCursor(0,1);//set LCD cursor to column 0, row 1
    LCD.print(myCounter); // print counter
    LCD.print(" seconds"); // print units
    delay(1000); // delay by 1000ms
  }
}
