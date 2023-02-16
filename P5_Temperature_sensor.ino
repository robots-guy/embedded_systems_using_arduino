int temp_data; //Assign a variable
int led=7; 

void setup()
 { Serial.begin(9600);
   pinMode(led,OUTPUT); 
 } 

void loop()
{
 temp_data=analogRead(A0); //read sensor
 Serial.println(temp_data);

 if(data>500) 
  { digitalWrite(led,HIGH);
    digitalWrite(enable,HIGH); 
  }
 else if (data<500 ) 
  { digitalWrite(led,LOW);
    digitalWrite(enable,LOW);
  }
}
