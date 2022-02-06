int ledPin = 2;
int switchPin = 3;
bool ledState = false;
 int delayTime = 400;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(switchPin, INPUT);
}

void loop() {
  
  // PROGRAM TO TURN AN LED ON OR OFF
  if (digitalRead(switchPin) == 1)
  {
    ledState = !ledState;
    delay(delayTime);
  }

  if (ledState)
  {
    digitalWrite(ledPin, HIGH);
  }
  else
  {
    digitalWrite(ledPin, LOW);
  }



  
  // PROGRAM FOR VOLUME CONTROL
  //int increasePin = 2;
  //int decreasePin = 3;
  //int currentVol = 0;
  //int maxVol = 20;
   //if(digitalRead(increasePin) == 1 && currentVol < maxVol)
   //{
      //currentVol ++;
      //Serial.print("Volume ");
      //Serial.println(currentVol);
      //delay(delayTime);
   //}

   //if(digitalRead(decreasePin) == 1 && currentVol > 0)
   //{
      //currentVol --;
      //Serial.print("Volume ");
      //Serial.println(currentVol);
      //delay(delayTime);
   //}
}
