
/* This is a simple program to make an led blink
  The delay value can be cahnged to increase or decrease the amount of blinks per second
*/

void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

   digitalWrite(13, HIGH);   // Turn on the LED

  delay(1000);              // Wait for one second
  
  digitalWrite(13, LOW);    // Turn off the LED
  
  delay(1000);              // Wait for one second

}
