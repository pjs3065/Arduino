#include<SoftwareSerial.h>
SoftwareSerial object(3,4);

void setup() {
object.begin(9600);
Serial.begin(9600);
Serial.println("ATcommand");
}

void loop() {  

if(Serial.available() > 0)
{
  object.write(Serial.read());
}
  
if(object.available() > 0)
{
  Serial.write(object.read());
}


}
