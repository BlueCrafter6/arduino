float sinVal;
int toneVal;
int pin = 8;

void setup(){
pinMode(pin, OUTPUT);
}

void loop(){
for (int x=0; x<180; x++) {
  sinVal = (sin(x*(3.1412/180)));
  toneVal = 2000+(int(sinVal*1000));
  tone(pin, toneVal);
  delay(2);
   }
}
