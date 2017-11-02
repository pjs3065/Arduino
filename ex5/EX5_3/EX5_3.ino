void setup() {
  // put your setup code here, to run once:

  pinMode(5,OUTPUT);
  pinMode(4,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

int tit = digitalRead(4);

 Serial.println(tit);

if(tit == HIGH)
{
 digitalWrite(5,HIGH);
}
else
{
  digitalWrite(5,LOW);
}
}
