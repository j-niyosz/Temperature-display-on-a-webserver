# Temperature-display-on-a-webserver
As part of the course of Hardware & Software , we tried to create a webserver on which we could be able to display the temperature with the help of an Arduino Uno, an ESP8266 and a mini set up on breadboard. Unfortunately, we have met some troubles with the data transmission from the Arduino to the ESP. In this github, we will show you what we did and the problems we have met. This project is still ongoing so if anyone has an idea to improve the github you're welcom.

For this project you will find  :
## Ping pong code's file : 
This code uses a RX-TX connection to transfer the information from the Arduino UNO to the ESP8266. Unfortunately the transmission between the two chips doesn't work. We do not know how to solve the problem. If someone has an idea you are welcome.
##  Functionals Code:
This file contains the separate code for the webserver and the temperature measurement. You will find videos showing the result on computer for each code.
##  Softserial's Code :
Because we had problems with the RX-TX connection we tried a Softserial connection. But we encounter the same problem. It seems that : the data's transmission is done through the TX of the Arduino UNO and not the pin we considered for the serial. You will find pictures of data's frame seen on oscilloscope.
