#include <Servo.h> 
Servo myservo; 
int pos = 0; 
void setup() 
{ 
	myservo.attach(9);
}
 void loop() 
{ 
 myservo.write(0);
 delay(500);
 myservo.write(25);
 delay(500);
 myservo.write(50);
 delay(500);
 myservo.write(75);
 delay(500);
 myservo.write(100);
 delay(500);
 myservo.write(150);
 delay(500);
 myservo.write(180);
 delay(500);
}
