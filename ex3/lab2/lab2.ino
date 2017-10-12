int LED = 9;
int BUTTON = 10;

void setup() {
  Serial.begin(9600);
  pinMode(LED,OUTPUT);
  pinMode(BUTTON,INPUT);
  
}

void loop() {
  int buttonState = digitalRead(BUTTON);
  int val = analogRead(A1);
  val = map(val,0,1023,0, 255);
  Serial.println(val);
  if(buttonState == HIGH)
  {
    digitalWrite(LED,0);
  }
  else
  {
    analogWrite(LED,val);
  }
  delay(100);
}
