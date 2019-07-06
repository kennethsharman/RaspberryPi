// connect arduino Tx pin BEFORE uploading sketch
// Tx on arduino connected to Rx on Bluetooth
// iOS app only recieves "test"
// Windows gets all lines
// must be a timing issue

String writeString;

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print("test\n");
  Serial.println("1");
  Serial.println("2");
  Serial.println("3");
  //Serial.print(8);
  delay(400);
}
