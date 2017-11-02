int C = 263;
int D = 294;
int E = 330;
int F = 349;
int G = 392;
int A = 440;
int B = 494;

void setup() {
  pinMode(2,OUTPUT);
  pinMode(3,INPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(2,HIGH);
  delayMicroseconds(50);
  digitalWrite(2,LOW);
  delayMicroseconds(50);

  int duration = pulseIn(3,HIGH);
  float centimeter = duration / 58.2;

Serial.println(centimeter);
  if(centimeter >= 25)
  {
     tone(8,G,500);
  }

   else if(centimeter >= 20)
   {
    tone(8,F,500);
   }

   else if(centimeter >= 15)
   {  
    tone(8,E,500);
   }

   else if(centimeter >= 5)
   {
    tone(8,D,500);
   }

   else if(centimeter >= 0)
   {
    tone(8,C,500);
   }
   delay(500);
   noTone(8);
  }
