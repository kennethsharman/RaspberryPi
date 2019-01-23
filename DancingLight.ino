/*
  DancingLight

  Light 6 LEDs, one at a time

  The circuit:
  - LEDs from pins 2 through 7 to ground

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/ForLoop
*/

int timer = 100;           // Time between lights

void setup() {
  // initialize each pin as an output:
  for (int thisPin = 2; thisPin < 8; thisPin++) {
    pinMode(thisPin, OUTPUT);
  }
} // end setup

void loop() {
  // loop from the lowest pin to the highest:
  for (int thisPin = 2; thisPin < 8; thisPin++) {
    // turn the pin on:
    digitalWrite(thisPin, HIGH);
    delay(timer);
    // turn the pin off:
    digitalWrite(thisPin, LOW);
  } // end loop

  // loop from the highest pin to the lowest:
  for (int thisPin = 7; thisPin >= 2; thisPin--) {
    // turn the pin on:
    digitalWrite(thisPin, HIGH);
    delay(timer);
    // turn the pin off:
    digitalWrite(thisPin, LOW);
  }
}
