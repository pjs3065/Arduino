#include<LiquidCrystal.h>
LiquidCrystal lcd(2,3,4,5,6,7);
int count = 0;

void setup() {
  // put your setup code here, to run once:
lcd.begin(16,2);
lcd.setCursor(4,0);
lcd.print("Time (s)");
}

void loop() {
lcd.setCursor(8,1);
count++;
lcd.print(count);
delay(1000);
}
