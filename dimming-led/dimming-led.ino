// dimming LED

int potentiometerPin = A0;
int delayTime = 500;
float volts = 0;
String info = "Current voltage = ";
int ledPin = 3;
float scaledValue = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(potentiometerPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  scaledValue = analogRead(potentiometerPin);
  volts = (5. / 1023.) * scaledValue;
  Serial.println(info + volts);
  analogWrite(ledPin, scaledValue/4);
  delay(delayTime);
}
