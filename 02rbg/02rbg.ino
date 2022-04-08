#include <DFRobot_MAX.h>
DFRobot_MAX myMax;

void setup(){
  myMax.begin();
}

void loop(){
  myMax.rgbLed(0,138,43,226);
  delay(1000);
  myMax.rgbLed(0,255,255,0);
  delay(1000);
  myMax.rgbLed(0,124,252,0);
  delay(1000);
}
