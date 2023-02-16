char data; 
int pin=13;

void setup() 
{
 Serial.begin(9600);
 pinMode(pin,OUTPUT);
} 

void loop() 
{ 
if(Serial.available()>= 1) //checking data input
   { 
     data=Serial.read(); //read serial data
     Serial.println(data);
 
     //Conditional statement 
     if(data==‘0’) 
     {
     digitalWrite(pin,LOW);
     }
     else if (data==‘1’) 
     {
     digitalWrite(pin,HIGH);
     }
   } 
}
