void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
pinMode(12,OUTPUT);
pinMode(9,INPUT);
}  
int count = 0;

void loop() {
  // put your main code here, to run repeatedly:
  int buttonState = digitalRead(9);
  digitalWrite(12, buttonState);
  if(buttonState == HIGH)
  {
    count = 0;
  }
  
  Serial.print(count);
  Serial.println("sec");
  count++;
  delay(1000);
  
 
}
