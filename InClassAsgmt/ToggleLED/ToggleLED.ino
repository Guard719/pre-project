/*
  ToggleLED

  Toggle the LED every time the push-button is pressed.  
*/

#define ExtLED 2
#define PUSHSW 4

bool pressed = false;
bool oldState = false;

// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(ExtLED, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  pressed = !digitalRead(PUSHSW);       // if push-button is pressed (logic LOW)
  if (!oldState && pressed) {
    digitalWrite(ExtLED, !digitalRead(ExtLED)); // toggle the LED 
  }
  oldState = pressed;   
}
