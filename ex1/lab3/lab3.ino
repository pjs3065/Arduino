 void setup() {
  // put your setup code here, to run once:
  pinMode(3,OUTPUT);
  pinMode(5,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0; i<256; i++)
  {
    analogWrite(3,i);
    analogWrite(5,256-i);
    delay(10);
  }

  for(int i=0; i<256; i++)
  {
    analogWrite(5,i);
    analogWrite(3,256-i);
    delay(10);
  }
}
