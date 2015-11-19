#include <SoftwareSerial.h>

String msg = "";
int rxPin = 7, txPin = 8;

SoftwareSerial BTSerial(rxPin, txPin);

void setup() {
   BTSerial.begin(9600);  // port initialisation with 9600 bods
   Serial.begin(9600);   // port initialisation with 9600 bods
}
void loop() {

   if (BTSerial.available() > 0) {
      msg = BTSerial.readString();
      Serial.print(msg);  // send msg to serial COM port
   }
   
   delay(1000);   // wait 1 second
}
