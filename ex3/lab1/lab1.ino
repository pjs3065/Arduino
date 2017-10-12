int LED = 9;

void setup() {
  Serial.begin(9600);
  pinMode(LED,OUTPUT);
}

void loop() {
  int val = analogRead(A0);
  Serial.println(val);
  if(val > 200)
  {
    analogWrite(LED,0);  
  }
  else
  {
    analogWrite(LED,200 - val);
  }
  delay(100);
}
