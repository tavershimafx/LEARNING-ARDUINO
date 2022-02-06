

void setup() {
  // put your setup code here, to run once:
  pinMode(increasePin, INPUT);
  pinMode(decreasePin, INPUT);
  Serial.begin(9600);
}

void loop() {


  // PROGRAM FOR VOLUME CONTROL
  //int increasePin = 2;
  //int decreasePin = 3;
  //int delayTime = 400;
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
