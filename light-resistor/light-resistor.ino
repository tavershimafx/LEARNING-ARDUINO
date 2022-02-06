int lightPin = A0;
int streetLight1 = 2;
int streetLight2 = 3;
int streetLight3 = 4;
int streetLightDelayTime = 700;

void setup() {
  // put your setup code here, to run once:
  pinMode(lightPin, INPUT);
  pinMode(streetLight1, OUTPUT);
  pinMode(streetLight2, OUTPUT);
  pinMode(streetLight3, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int intensity = analogRead(lightPin);
  Serial.print("Light intensity ");
  Serial.println(intensity);
  delay(1000);
  // A street light turns off whenever a certain amount of light intensity
  // have been recorded. That is day time.
  // Whenever the intensity drops below a certain intensity, the light turns
  // on
  // let us assume day time is any intensity greater than 100
  if (intensity > 100)
  {
    // turn off the street lights because there is hight light noticed
    digitalWrite(streetLight1, LOW);
    delay(streetLightDelayTime);
    digitalWrite(streetLight2, LOW);
    delay(streetLightDelayTime);
    digitalWrite(streetLight3, LOW);
  }
  else
  {
    // turn street lights on
    digitalWrite(streetLight1, HIGH);
    delay(streetLightDelayTime);
    digitalWrite(streetLight2, HIGH);
    delay(streetLightDelayTime);
    digitalWrite(streetLight3, HIGH);
  }
}
