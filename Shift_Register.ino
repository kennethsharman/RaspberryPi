/*
 * 74HC595 8 bit shift register
 */

int dataPin = 4;
int latchPin = 5;
int clockPin = 6;

byte leds = 0;

void setup() {
  Serial.begin(9600);
  pinMode(dataPin, OUTPUT);
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
}

void loop() {
  leds = 0;
  updateShiftRegister();
  delay(500);
  for (int i = 0; i < 8; i++) {
    bitSet(leds, i);
    //Serial.println(leds);
    updateShiftRegister();
    delay(500);
    //bitClear(leds, i);
    //updateShiftRegister();
  }
}

void updateShiftRegister() {
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, leds);
  digitalWrite(latchPin, HIGH);
}
