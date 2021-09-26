void setup() {
  pinMode(1, OUTPUT); //replace 1 with your *red* light pin
  pinMode(2, OUTPUT); //replace 2 with your *yellow* light pin
  pinMode(3, OUTPUT); //replace 3 with your *green* light pin
  //--------------------Do the above for all 1's, 2's and 3's
  }

void loop() {
  digitalWrite(1, HIGH);
  delay(5000); //NB: We count in milliseconds
  digitalWrite(1, LOW);
  digitalWrite(3, HIGH);
  delay(10000);
  digitalWrite(3, LOW);
  digitalWrite(2, HIGH);
  delay(2000);
  digitalWrite(2, LOW);
}
