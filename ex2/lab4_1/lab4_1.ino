void setup() {
pinMode(12,OUTPUT);
pinMode(9, INPUT_PULLUP);
}  

void loop() {
  // put your main code here, to run repeatedly:
  int buttonState = digitalRead(9);
  if(buttonState == HIGH)
  {
    digitalWrite(12, LOW);
  }
  else if(buttonState == LOW)
  {
    digitalWrite(12, HIGH);
  }
}
