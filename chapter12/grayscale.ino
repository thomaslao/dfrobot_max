#include <DFRobot_MAX.h>
DFRobot_MAX myMax;
int L,M,R;
void setup() {
  myMax.begin();
  Serial.begin(9600);
}

void loop(){
  L=myMax.lineValue(0);
  M=myMax.lineValue(1);
  R=myMax.lineValue(2);
  Serial.print("L=");
  Serial.print(L);
  Serial.print(" ");
  Serial.print("M=");
  Serial.print(M);
  Serial.print(" ");
  Serial.print("R=");
  Serial.println(R);
  myMax.lineLED(L);
 
}
