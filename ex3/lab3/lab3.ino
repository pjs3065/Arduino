int LED = 13;

void setup() {
  Serial.begin(9600);
   pinMode(LED,OUTPUT);

}

void loop() {
  int val = analogRead(A0);
  val = map(val, 0, 1023, 0, 1000);
  Serial.println(val);
  digitalWrite(LED, HIGH);
  delay(val);
  digitalWrite(LED, LOW);
  delay(val);
}
