# Temperature-display-on-a-webserver
For this project you will find  :
## Ping pong code's file : 
This code uses a RX-TX connection to transfer the information from the Arduino UNO to the ESP8266. Unfortunattly the transmission between the two chips doesn't work. We do not know how to resolve the problem. If someone has an idea you are welcome.
## Code functionals :
This file contains the separate code for the webserver and the temperature measurement. You will find videos showing the result on computer for each code 
## Code softserial :
Because we had problems with the RX-TX connection we tried a softserial connection. But we encounter the same problem. It seems that the transmission of data is done through the TX of the arduino UNO and not the pin we considered for the serial. You will find pictures of data's frame seen on oscilloscpe.
