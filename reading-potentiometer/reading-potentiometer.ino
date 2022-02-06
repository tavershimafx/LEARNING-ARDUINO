
int readPin = A3;
int delayTime = 500;
float volts = 0;
String info = "Current voltage = ";

void setup() {
  // put your setup code here, to run once:
  pinMode(readPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  volts = (5. / 1023.) * analogRead(readPin);
  Serial.println(info + volts);
  delay(delayTime);
}
