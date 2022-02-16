int latchPin = 11;
int clockPin = 9;
int dataPin = 12;

byte digit = 0x00;
void setup() {
  // put your setup code here, to run once:
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, digit);
  digitalWrite(latchPin, HIGH);
  digit++;
  delay(500);
}
