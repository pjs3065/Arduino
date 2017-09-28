void setup() {
  // put your setup code here, to run once:
pinMode(11,OUTPUT);
pinMode(10,OUTPUT);
pinMode(9,OUTPUT);

pinMode(4,INPUT);
pinMode(3,INPUT);
pinMode(2,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 int buttonState1 = digitalRead(4);
 int buttonState2 = digitalRead(3);
 int buttonState3 = digitalRead(2);
  digitalWrite(11, buttonState1);
  digitalWrite(10, buttonState2);
  digitalWrite(9, buttonState3);
}
