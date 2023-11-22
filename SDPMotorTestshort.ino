#include <SDPArduino.h>

#include "SDPArduino.h"
#include <Wire.h>
int i = 0;

void setup(){
  SDPsetup();
  helloWorld();
}

void loop(){
Serial.println("All Motors Forward 50%");
motorForward(0, 50);
delay(2500);
Serial.println("Motor 0 Stop");
motorStop(0);
delay(2500);
Serial.println("All Motors Backwards 100%");
motorBackward(0, 100);
delay(2500);
Serial.println("All Motors Stop");
motorAllStop();
delay(2500);
}
