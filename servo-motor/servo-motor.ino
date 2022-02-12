#include<Servo.h>

int servoPin = 4;
Servo myServo;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  myServo.attach(servoPin);
}

void loop() {
  Serial.print("Enter a navigation angle ");
  while(Serial.available() == 0)
  {
    
  }
  int userAngle = Serial.parseInt();
  Serial.print("Your angle is ");
  Serial.println(userAngle);
  myServo.write(userAngle);
  delay(1000);
}
