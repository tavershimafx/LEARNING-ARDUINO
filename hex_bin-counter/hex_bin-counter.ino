int i = 0x2f;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("BIN: ");
  Serial.print(i, BIN);
  Serial.print(";\tHEX: ");
  Serial.print(i, HEX);
  Serial.print(";\tDEC: ");
  Serial.println(i, DEC);
  i++;
  delay(1000);
}
