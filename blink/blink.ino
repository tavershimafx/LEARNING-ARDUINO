
int ledPin = 13;


void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT); // set pin 13 as an output pin
  
}

void loop() {
  digitalWrite(ledPin, LOW); 
  delay(1000);
 
  digitalWrite(ledPin, HIGH); 
  delay(1000);


}
