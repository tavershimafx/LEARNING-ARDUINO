int tempPin = A0;

void setup() {
   pinMode(tempPin, INPUT);
   Serial.begin(9600);
   
}

void loop() {
  Serial.println(analogRead(tempPin));
  delay(1000);

}
