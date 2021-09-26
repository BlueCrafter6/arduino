void setup() {
 pinMode(0, OUTPUT);
 //replace 0 with your pin number
}


void loop() {
  digitalWrite(0, HIGH);
  delay(1000);
  digitalWrite(0, LOW);
  delay(1000);
}
