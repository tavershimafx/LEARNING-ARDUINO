#include<IRremote.h>

int receiverPin = 3;
decode_results results;

IRrecv receiver(receiverPin)
void setup() {
  Serial.begin(9600);
  receiver.enableIRIn();
  
}

void loop() {
  if (receiver.decode(&results){
    Serial.println(results);
    receiver.resume();
  }

}
