/*
  The circuit:
 * LCD RS pin to digital pin 12
 * LCD Enable pin to digital pin 11
 * LCD D4 pin to digital pin 5
 * LCD D5 pin to digital pin 4
 * LCD D6 pin to digital pin 3
 * LCD D7 pin to digital pin 2
 * LCD R/W pin to ground
 * LCD VSS pin to ground
 * LCD VCC pin to 5V
 * 10K resistor:
 * ends to +5V and ground
 * wiper to LCD VO pin (pin 3)


 */

int AB = A0; //A+B in pin A0
int B = A1;  //B in pin A1
int abValue; //a+b reading value
int bValue;  // b reading value

// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  // initialize all the readings to 0:

}
LCD
void loop() {

  temp_measure();
}
 
float read(){
  abValue = analogRead(AB);
  bValue = analogRead(B);
  return abValue - bValue;
}



void temp_measure(){
  float voltage = 5.0 /1024 * read() ;
  float temp = (voltage-0.5) * 100; 
  lcd.setCursor(0, 0);
  lcd.print("Voltage:");
  lcd.setCursor(9, 0);
  lcd.print(voltage);
  lcd.setCursor(14, 0);
  lcd.print("V");
  delay(1);        // delay in between reads for stability
}