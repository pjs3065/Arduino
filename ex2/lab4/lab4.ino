void setup() {
  // put your setup code here, to run once:
pinMode(12,OUTPUT);
pinMode(9,INPUT);
}  

void loop() {
  // put your main code here, to run repeatedly:
  int buttonState = digitalRead(9);
  digitalWrite(12, buttonState);
}
