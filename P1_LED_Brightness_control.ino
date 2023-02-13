/*
  Brightness Control

  Control the brightness of an LED 
  
*/

int i;

// the setup function runs once when you press reset or power the board
 void setup()
 { 
   pinMode(13, OUTPUT); //inbuilt LED pin 13
 } 
 
void loop()
 { 
   for(i=0;i<255;i++)
 { 
 delay(50);
 analogWrite(13,i);
 } 
}
