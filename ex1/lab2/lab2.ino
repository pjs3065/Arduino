void setup() {
  // put your setup code here, to run once:
  pinMode(3,OUTPUT);
  pinMode(5,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(3, HIGH);
  delay(100);
  digitalWrite(3,0);
  digitalWrite(5, HIGH);
  delay(100);
  digitalWrite(5, 0);
}
