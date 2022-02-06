int redPin = 3;
int bluePin = 2;
int delayTime = 750;

void setup() {
  // put your setup code here, to run once:
  pinMode(redPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 0; i < 3; i++)
  {
    digitalWrite(bluePin, HIGH);
    delay(delayTime);
    digitalWrite(bluePin, LOW);
    delay(delayTime);
  }

  for(int i = 0; i < 5; i++)
  {
    digitalWrite(redPin, HIGH);
    delay(delayTime);
    digitalWrite(redPin, LOW);
    delay(delayTime);
  }
}
