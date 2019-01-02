/*
  ReadVoltage
  Date: January 1, 2019
  
  Followed tutorial by Programming Electronics Academy on YouTube
  
  Reads voltage input on pin 0, prints the result to the Serial Monitor.
  Graphical representation is available using Serial Plotter (Tools > Serial Plotter menu).
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.
  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/AnalogReadSerial
*/

void setup() {
  // initialize communication between Pi and Arduino board
  // @ 9600 bits per second (baud)
  Serial.begin(9600);
}

// the loop routine runs over and over again forever
void loop() {
  // read the input on analog pin 0
  int sensorValue = analogRead(A0);
  // Convert the analog reading (which range from 0 to 1023) to voltage (0-5V)
  float voltage = sensorValue * (5.0 / 1023.0);
  // print the voltage read
  Serial.print(voltage);
  Serial.println(" V");
  delay(1);
}
