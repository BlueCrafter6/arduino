int carRed = 12; //replace 12 with first red LED pin
int carYellow = 11; //replace 11 with the yellow LED pin
int carGreen = 10; //replace 10 with your first green LED pin
int button = 9; //replace 9 with your button pin
int pedRed = 8; //replace 8 with your second red LED pin
int pedGreen = 7; //replace 7 with your second green LED pin
int crossTime = 5000;
long changeTime;

void setup() {
  pinMode(carRed, OUTPUT);
  pinMode(carGreen, OUTPUT);
  pinMode(carYellow, OUTPUT);
  pinMode(pedRed, OUTPUT);
  pinMode(pedGreen, OUTPUT);
  pinMode(button, INPUT);
  digitalWrite(carGreen, HIGH);
  digitalWrite(pedRed, LOW);

}

void loop() {
  int state = digitalRead(button);

  if (state == HIGH && (millis() - changeTime)> 5000) {
    changeLights();
  }

}

void changeLights() {
  digitalWrite(carGreen, LOW);
  digitalWrite(carYellow, HIGH);
  delay(2000);

  digitalWrite(carYellow, LOW);
  digitalWrite(carRed, HIGH);
  delay(1000);

  digitalWrite(pedRed, LOW);
  digitalWrite(pedGreen, HIGH);

  delay(crossTime);

  for (int x = 0; x < 10; x++) {
    digitalWrite(pedGreen, HIGH);
    delay(250);
    digitalWrite(pedGreen, LOW);
    delay(250);
  }

  digitalWrite(pedRed, HIGH);
  delay(500);

  digitalWrite(carRed, LOW);
  digitalWrite(carYellow, HIGH);
  delay(1000);
  digitalWrite(carYellow, LOW);
  digitalWrite(carGreen, HIGH);

  changeTime = millis();
  
}
