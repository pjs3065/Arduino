#include<IRremote.h>
IRrecv irrecv(8);
decode_results result;

void setup() {
  // put your setup code here, to run once:

pinMode(3,OUTPUT);
pinMode(4,OUTPUT);

irrecv.enableIRIn();
irrecv.blink13(true);

Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
if (irrecv.decode(&result)) {
Serial.println(result.value);

if(result.value == 16582903)
{
  digitalWrite(3,HIGH);
  delay(500);
  digitalWrite(3,LOW);
}

if(result.value == 16615543)
{
  digitalWrite(4,HIGH);
  delay(500);
  digitalWrite(4,LOW);
}

irrecv.resume();
}

}
