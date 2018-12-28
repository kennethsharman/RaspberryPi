/*
  DigitalReadSerial
  Date: December 27, 2018
  Followed tutorial by Programming Electronics Academy on YouTube
  Reads a digital input on pin 2, prints the result to the Serial Monitor

  This example code is in the public domain.
  http://www.arduino.cc/en/Tutorial/DigitalReadSerial
*/

// digital pin 2 has a pushbutton attached to it
int pushButton = 2;

void setup() {
  // initialize communication between Pi and Arduino board
  // @ 9600 bits per second (baud)
  Serial.begin(9600);
  // Set pin connected to pushbutton as an input
  pinMode(pushButton, INPUT);
}

void loop() {
  // reads the state of pin 2
  // 1 if button is pressed, 0 if not
  int buttonState = digitalRead(pushButton);
  // print out the state of the button:
  Serial.println(buttonState); // prints either 1 or 0
  delay(1);        // delay in between reads for stability
}
