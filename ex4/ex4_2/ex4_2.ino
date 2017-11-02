#include<Servo.h>

int SERVO = 9;
int LED = 5;

Servo myservo;

void setup() {
  pinMode(LED,OUTPUT);
  myservo.attach(SERVO);
  myservo.write(0);
}

void loop() {
 myservo.write(0);
 delay(1000);
 myservo.write(120);
 delay(200);
 digitalWrite(LED,HIGH);
 delay(1000);
 digitalWrite(LED,LOW);
}
