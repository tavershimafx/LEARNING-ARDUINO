int dataPin = A0;
void setup() {
  Serial.begin(9600);
  pinMode(dataPin, INPUT);

}

void loop() {
  Serial.print("Water level ");
  Serial.println(analogRead(dataPin));
  delay(700);
}
