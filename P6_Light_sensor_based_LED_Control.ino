int light_sensor_data; //Assign variable 
int led=7; 

void setup()
 { Serial.begin(9600); 
   pinMode(led,OUTPUT); 
 } 

void loop()
{
 light_sensor_data =analogRead(A0);
 Serial.println(light_sensor_data);

 if(data>200) 
  { 
    digitalWrite(led,HIGH); 
  }
 else if (data<200 ) 
  {
    digitalWrite(led,LOW);
  } 
}
