int LED  = 13;
int BUTTON = 8;
boolean isPush = false;
 
void setup() {
pinMode(LED,OUTPUT);
pinMode(BUTTON,INPUT);
}

void loop() {
  int buttonState = digitalRead(BUTTON);
  if(buttonState == HIGH)
  {
      isPush = !isPush;
      if(isPush == true)
      {
         while(digitalRead(BUTTON) == HIGH)
         {
           delay(1);
         }
         digitalWrite(LED,HIGH);
      }

      else if(isPush == false)
      {
          while(digitalRead(BUTTON) == HIGH)
          {
            delay(1);
          }
         digitalWrite(LED,LOW);
      }
  }
}
