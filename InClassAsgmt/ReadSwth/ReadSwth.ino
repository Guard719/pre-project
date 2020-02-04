/*
  ReadSwth

  When the push-button is pressed, LED ON, else LED OFF.
*/

#define ExtLED 2
#define PUSHSW 4

// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(ExtLED, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  if (!digitalRead(PUSHSW))       // if push-button is pressed (logic LOW)
    digitalWrite(ExtLED, HIGH);   // turn the LED on (HIGH is the voltage level)
  else                       
    digitalWrite(ExtLED, LOW);    // turn the LED off by making the voltage LOW
}
