char c;
char g;
void setup()
{

Serial.begin(9600);

}

void loop() 
{
  if (Serial.available())
  {
    Serial.write(c);
    g = Serial.read();
    Serial.print(g);
    if (Serial.read() == c)
    {
      Serial.write(c);
      Serial.println("c'est ok");
      
    }
    else 
    {
      Serial.write(g);
      Serial.println("Pas ok");
    }
  }

}
