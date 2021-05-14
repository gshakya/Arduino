const int trigPin = 11;
const int echoPin = 12;

long duration;
int distance;

void setup() {
  // put your setup code here, to run once:
   
    pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
    pinMode(echoPin, INPUT); // Sets the echoPin as an Input
    Serial.begin(9600); // Starts the serial communication
}

void loop() {
long duration, distance;
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);  
  digitalWrite(trigPin, LOW);
  
  duration=pulseIn(echoPin, HIGH);
  distance =duration*0.034/2;
  Serial.print("Distance: ");
  Serial.println(distance);    
}
