/*
  PotAsSwitch
  Jan 16, 2019

  This example effectively turns a potentiometer into an on/ off switch
  It reads the state of a potentiometer (an analog input) and turns on an LED
  only if the potentiometer goes above a certain threshold level. It prints the
  analog value regardless of the level.

  Center pin of pot connected to A0 pin
  LED connected to digital pin
*/

// Constants
const int analogPin = A0;    // pin that the sensor is attached to
const int ledPin = 12;       // pin that the LED is attached to
                             // adruindo LED can be used if set to pin 13
const int threshold = 400;   // an arbitrary threshold level that's in the range of the analog input

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  // initialize serial communications:
  Serial.begin(9600);
}

void loop() {
  // read the value of the potentiometer:
  int analogValue = analogRead(analogPin);

  // if the analog value is high enough, turn on the LED:
  if (analogValue > threshold) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }

  // print the analog value:
  Serial.println(analogValue);
  delay(1);        // delay in between reads for stability
}
