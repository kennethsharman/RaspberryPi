// connect arduino Rx pin AFTER uploading sketch
// Rx on arduino conntected to Tx on Bluetooth
// Pin 8 connected to LED

int ledPin = 8;
String readString;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);

}

void loop() {
  while(Serial.available()) {
    delay(3);
    char c = Serial.read();
    readString +=c;
  }
  if (readString.length() > 0) {
    Serial.println(readString);
    if(readString == "o") {
      digitalWrite(ledPin, HIGH);
    }
    if(readString == "f") {
      digitalWrite(ledPin, LOW);
    }
    readString = "";
  }
}
