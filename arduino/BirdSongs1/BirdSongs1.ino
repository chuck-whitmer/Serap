
int ledPin = 13;
int irPin1 = 2;


void setup() {
  pinMode(ledPin,OUTPUT);
  pinMode(irPin1,INPUT); 
}

void loop() {
  int val = digitalRead(irPin1);
  digitalWrite(ledPin,val);
}
