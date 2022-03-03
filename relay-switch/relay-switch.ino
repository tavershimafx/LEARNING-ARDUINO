int switchPin = 2;
bool lightState = false;

void setup() {
  pinMode(switchPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  lightState = !lightState;
  if (lightState)
  {
    digitalWrite(switchPin, HIGH);
  }
  else
  {
    digitalWrite(switchPin, LOW);
  }
  delay(2000);
}
