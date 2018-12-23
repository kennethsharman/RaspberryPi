/*
 * Program 
 * Code modified from tutorial https://www.instructables.com/id/Connect-Your-Raspberry-Pi-and-Arduino-Uno/
 */

char receivedChar;
boolean newData = false;

void setup() {
  
  // sets the data rate in bits per second (baud) for serial data transmission
  Serial.begin(9600);
  // configures the specified pin to behave as an input
  pinMode(3, OUTPUT);
  
}

/*
 * Ensures port is available and lights LED if it is 
 */
void loop() {

  recvInfo();
  lightLED();
  
} // end loop

void recvInfo() {

  // checks the number of bytes (characters) available for 
  // reading from the serial port
  if (Serial.available() > 0) {

    // reads incoming serial data
    receivedChar = Serial.read();
    newData = true;
    
  }
  
} // end recvInfo

void lightLED() {

  int led = (receivedChar - '0');

  while(newData == true) {

    digitalWrite(led, HIGH);
    delay(3000);
    digitalWrite(led, LOW);

    newData = false;
    
  }
  
} // end lightLED
