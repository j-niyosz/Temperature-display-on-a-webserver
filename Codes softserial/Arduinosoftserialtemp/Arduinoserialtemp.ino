#include <Arduino.h>
//#include <ESP8266WiFi.h>
//#include <ESP8266WebServer.h>
#include <SoftwareSerial.h>                           
SoftwareSerial Arduinoserial(2, 3); // RX = 2 | TX =3    pour l'ARduino       


float temp;
int tempPin = 0;
char temperature;
void setup()

{

Serial.begin(115200);
Arduinoserial.begin(115200);
}

void loop()
{

temp = analogRead(tempPin);

temp = temp *5/1023*100;

  if (Arduinoserial.available())
  {
    while (Arduinoserial.available()) 
    {
      
      temperature += char((float)Arduinoserial.write(temp));  
      delay(1);

    }
    Serial.println(temperature);
  }
Serial.print("TEMPRATURE = ");

Serial.print(temp);

Serial.print("*C");

Serial.println();

delay(1000);

}
