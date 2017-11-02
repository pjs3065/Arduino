int C = 263;
int D = 294;
int E = 330;
int F = 349;
int G = 392;
int A = 440;
int B = 494;

void setup() {
  pinMode(8,INPUT);
  pinMode(9,INPUT);
  pinMode(10,INPUT);
}

void loop() {

  if(digitalRead(8) == HIGH)
  {
    tone(4,C,500);
  }

  if(digitalRead(9)== HIGH)
  {
    tone(4,D,500);
  }

  if(digitalRead(10)== HIGH)
  {
    tone(4,E,500);
  }
  delay(500);
}
