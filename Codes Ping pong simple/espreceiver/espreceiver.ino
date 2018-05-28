// Libraries
#include <Arduino.h>
#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
#include <SoftwareSerial.h>
char a;
char c;

// Arduino base functions
void setup()
{
 Serial.begin(9600);

}

void loop()
{
  
  if (Serial.available())
  { 
    a=Serial.read();
    Serial.print(a);
    if (Serial.read() == c){
  Serial.write(c);
  Serial.println("Bon message");
    }
    else
    {Serial.write(a);
    Serial.println("Mauvais message");
    }
  }
 
}
