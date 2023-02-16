int data; 

void setup() 
{ 
Serial.begin(9600);
} 

void loop() 
{
data=analogRead(A0);
Serial.print("The analogue output value is = ");
Serial.println(data); 
delay(100);
}
