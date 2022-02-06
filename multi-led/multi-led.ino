int redPin = 2;
int greenPin = 3;
int bluePin = 4;
int delaySecs = 400;

void setup() {
  // put your setup code here, to run once:
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(redPin, 150);
  delay(delaySecs);

  digitalWrite(redPin, LOW);
  delay(delaySecs);

  // GREEN LED
  analogWrite(greenPin, 150);
  delay(delaySecs);

  digitalWrite(greenPin, LOW);
  delay(delaySecs);

  // BLUE LED
  analogWrite(bluePin, 150);
  delay(delaySecs);

  digitalWrite(bluePin, LOW);
  delay(delaySecs);
}
