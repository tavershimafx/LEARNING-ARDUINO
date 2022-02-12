int xPin = A0;
int yPin = A1;
int switchPin = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(xPin, INPUT);
  pinMode(yPin, INPUT);
  pinMode(switchPin, INPUT);
  digitalWrite(switchPin, HIGH); // programmatically create an internal pull up resistor
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("x = ");
  Serial.print(analogRead(xPin));
  Serial.print(" y = ");
  Serial.print(analogRead(yPin));
  Serial.print(" switch = ");
  Serial.println(digitalRead(switchPin));
  delay(500);
}
