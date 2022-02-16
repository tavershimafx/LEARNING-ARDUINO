int latchPin = 11;
int clockPin = 9;
int dataPin = 12;

byte digit = 0b11001101;
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
  //digit*=2; logical right
  digit*=2; // logical left
  Serial.println(digit, BIN);
  delay(700);
  
}
