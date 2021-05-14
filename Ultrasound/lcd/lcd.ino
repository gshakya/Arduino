#include <LiquidCrystal.h> //Please replace the single quote characters ('') with the parenthesis character (<>)

LiquidCrystal lcd(1, 2, 4, 5, 6, 7); // Creates an LCD object. Parameters: (rs, enable, d4, d5, d6, d7)

const int trigPin = 9;
const int echoPin = 10;
long duration;
int distanceCm, distanceInch;

void setup() {
  
lcd.begin(16,2); 
}

void loop() {
  


lcd.setCursor(0,0); // Sets the location at which subsequent text written to the LCD will be displayed
lcd.print("Distance: "); // Prints string "Distance" on the LCD
//lcd.print(distanceCm); // Prints the distance value from the sensor
lcd.print("  cm");
delay(10);
lcd.setCursor(0,1);
lcd.print("Distance: ");
//lcd.print(distanceInch);
lcd.print("inch");
delay(10);

}
