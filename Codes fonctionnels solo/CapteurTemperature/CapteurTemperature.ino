float temp;
int tempPin = 0;

void setup()

{

Serial.begin(115200);

}

void loop()
{

temp = analogRead(tempPin);

temp = temp *5/1023*100;

Serial.print("TEMPERATURE = ");

Serial.print(temp);

Serial.print("*C");

Serial.println();

delay(1000);

}
