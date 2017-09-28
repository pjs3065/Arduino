void setup() {
  Serial.begin(9600);
  pinMode(5,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(10,OUTPUT);
}

void loop() {
  if (Serial.available() > 0) {
    char incomingByte = Serial.read();
    if(incomingByte == 'h')
    {
       digitalWrite(5, HIGH);
       digitalWrite(8, HIGH);
       digitalWrite(10, HIGH);
       delay(2000);
       digitalWrite(5, 0);
       digitalWrite(8, 0);
       digitalWrite(10, 0);
    }
   else
   {
   Serial.println(incomingByte);
   }
}
}
