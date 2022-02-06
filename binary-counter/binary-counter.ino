
int led1 = 2;
int led2 = 3;
int led3 = 4;
int led4 = 5;


void setup() {
  // put your setup code here, to run once:
  pinMode(led1, OUTPUT); // set pin 2 as an output pin
  pinMode(led2, OUTPUT); // set pin 3 as an output pin
  pinMode(led3, OUTPUT); // set pin 4 as an output pin
  pinMode(led4, OUTPUT); // set pin 5 as an output pin
  
}

void loop() {
  // binary 0
  digitalWrite(led1, LOW); 
  digitalWrite(led2, LOW); 
  digitalWrite(led3, LOW); 
  digitalWrite(led4, LOW); 
  delay(1000);

  // binary 1
  digitalWrite(led1, LOW); 
  digitalWrite(led2, LOW); 
  digitalWrite(led3, LOW); 
  digitalWrite(led4, HIGH); 
  delay(1000);

  // binary 2
  digitalWrite(led1, LOW); 
  digitalWrite(led2, LOW); 
  digitalWrite(led3, HIGH); 
  digitalWrite(led4, LOW); 
  delay(1000);

  // binary 3
  digitalWrite(led1, LOW); 
  digitalWrite(led2, LOW); 
  digitalWrite(led3, HIGH); 
  digitalWrite(led4, HIGH); 
  delay(1000);

  // binary 4
  digitalWrite(led1, LOW); 
  digitalWrite(led2, HIGH); 
  digitalWrite(led3, LOW); 
  digitalWrite(led4, LOW); 
  delay(1000);

  // binary 5
  digitalWrite(led1, LOW); 
  digitalWrite(led2, HIGH); 
  digitalWrite(led3, LOW); 
  digitalWrite(led4, HIGH); 
  delay(1000);

  // binary 6
  digitalWrite(led1, LOW); 
  digitalWrite(led2, HIGH); 
  digitalWrite(led3, HIGH); 
  digitalWrite(led4, LOW); 
  delay(1000);

  // binary 7
  digitalWrite(led1, LOW); 
  digitalWrite(led2, HIGH); 
  digitalWrite(led3, HIGH); 
  digitalWrite(led4, HIGH); 
  delay(1000);

  // binary 8
  digitalWrite(led1, HIGH); 
  digitalWrite(led2, LOW); 
  digitalWrite(led3, LOW); 
  digitalWrite(led4, LOW); 
  delay(1000);

  // binary 9
  digitalWrite(led1, HIGH); 
  digitalWrite(led2, LOW); 
  digitalWrite(led3, LOW); 
  digitalWrite(led4, HIGH); 
  delay(1000);
}
