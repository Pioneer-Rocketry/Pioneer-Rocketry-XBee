#include "XBEE.h"

XBEE * x1;

char * message;

void setup() {

  x1 = new XBEE();

  x1->Initialize(9600, 2);
  
  Serial.begin(9600);

  
  
}

void loop() {
  // put your main code here, to run repeatedly:

  char * message = "Hello World\n";

  //sprintf(message, "Test: %l\n", count);

  
  
  //Serial.print(message);

  x1->Write(message,13);

  x1->Update();

}
