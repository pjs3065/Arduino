#include<Servo.h>

int SERVO = 9;
Servo myservo;

void setup() {
  myservo.attach(SERVO);
  myservo.write(0);
}

void loop() {
 myservo.write(180);
 delay(1000);
 myservo.write(0);
 delay(1000);
 
}
