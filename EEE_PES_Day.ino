int LDR=0;
int LDR_value=0;
int Light_intensity=800;
void setup()
{
 Serial.begin(9600);
  pinMode(13,OUTPUT);
}

void loop()
{
  LDR_value=analogRead(LDR);  
  Serial.println(LDR_value);
  delay(50);
  
  if(LDR_value<Light_intensity)
  {
    digitalWrite(13,HIGH);      
  }
  else
  {
    digitalWrite(13,LOW); 
  }
}
