int buttonPin = A1;
int led= 13; 
int buttonState = 0;

void setup() 
{ 
  pinMode(led, OUTPUT); 
  pinMode(buttonPin, INPUT);
} 

void loop()
{ 
buttonState = digitalRead(buttonPin);

if (buttonState==LOW)
{ 
digitalWrite(led,HIGH); 
}

else 
{ 
digitalWrite(led,LOW); 
} 

}
