//unsigned long time;
int analogPin = A3;
int val = 0;

void setup() {
  Serial.begin(9600);
  Serial.println("CLEARDATA");
  Serial.println("LABEL,Time,Timer, sensor");
  Serial.println("RESETTIMER");
}

void loop() {
  //time = millis();
  val = analogRead(analogPin);

  Serial.print("DATA,TIME,TIMER,");
  Serial.print(val);
  Serial.println("");
  delay(10); 
}
