// reading numbers from serial monitor
String request = "Enter number of blinks to blink the LED";
int number;
int delayTime = 500;
int ledPin = 3;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(request);
  while(Serial.available() == 0)
  {
    
  }

  number = Serial.parseInt();
  Serial.print("Blinking LED ");Serial.print(number) ; Serial.println(" times");
  for(int i = 0; i < number; i++)
  {
    digitalWrite(ledPin, HIGH);
    delay(delayTime);
    
    digitalWrite(ledPin, LOW);
    delay(delayTime);
    
  }
}
