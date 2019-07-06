/*
  Reads a digital input on pin 2, prints the result to the Serial Monitor
*/

// digital pin 2
int pushButton = 2;

// the setup routine runs once when you press reset:
void setup() {
  Serial.begin(9600); // initialize serial communication at 9600 bits per second
  pinMode(pushButton, INPUT); // make the pushbutton's pin an input
}

// main program
void loop() {
  int buttonState = digitalRead(pushButton); // read the input pin

  if(buttonState == 0) {
    Serial.println("OFF");
  }
  if(buttonState == 1) {
    Serial.println("ON");
  }  
  //Serial.println(buttonState); // print out the state of the button (1 or 0)
  delay(100); // 0.1s delay
}
