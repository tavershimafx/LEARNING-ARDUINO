// serial port basics

int volts = 240;
String info = "Current voltage = ";

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print("Hello, what do you want to do today?");
  Serial.println(info + volts);
  delay(delayTime);
}
