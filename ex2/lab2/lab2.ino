void setup() {
Serial.begin(9600);
}

int count = 0;
void loop() {
  Serial.print(count);
  Serial.println("sec");
  count++;
  delay(1000);
}
