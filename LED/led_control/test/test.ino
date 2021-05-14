#define RED_LED 6
#define BLUE_LED 5
#define GREEN_LED 9

void setup() {
   pinMode(GREEN_LED, OUTPUT);
   pinMode(RED_LED, OUTPUT);
   pinMode(BLUE_LED, OUTPUT);
  
    analogWrite(RED_LED, 255);
    analogWrite(GREEN_LED, 128);
    analogWrite(BLUE_LED, 255);
    
}



void loop() {

  
}
