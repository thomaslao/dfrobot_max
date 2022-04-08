#include <DFRobot_MAX.h>
DFRobot_MAX myMax;

void setup(){
  myMax.begin();
}

void loop(){
  myMax.rgbLed(0,138,43,226);
  delay(100);
  myMax.rgbLed(0,255,255,255);
  delay(100);
  myMax.rgbLed(0,124,252,0);
  delay(100);
}
