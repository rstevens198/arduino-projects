/* Code for using a potentiometer to adjust the speed of the blinking led. */


  int sensorPin = 0;    // The potentiometer
  int ledPin = 13;      // The LED
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);

  
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorValue;
  
  sensorValue = analogRead(sensorPin); 
  
  digitalWrite(ledPin, HIGH);     // Turn the LED on
  
  delay(sensorValue);             // Pause for sensorValue in milliseconds
  
  digitalWrite(ledPin, LOW);      // Turn the LED off

  delay(sensorValue);             // Pause for sensorValue in milliseconds

  
}
