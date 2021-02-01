#include "control system.h"
#include <iostream>

String text;

void setup() {
pinMode(13, OUTPUT); //arduino output pin
Serial.begin(9600);
}

void loop() {
while(Serial.available()){
  delay(10);
  char c = Serial.read();
  text+=c;}

if(text.length() >0){
  Serial.println(text);
  // command to control light
  if(text == "on light")
  {digitalWrite(13, HIGH);}// command to turn off light
  else if(text == "off light")
  {digitalWrite(13, LOW);} // command to turn off light
  text="";}
}
}
