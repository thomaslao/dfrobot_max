#include <DFRobot_MAX.h>
DFRobot_MAX myMax;
int L,M,R;
int command;

void setup() {
 myMax.begin();
}
void loop() {
 R=myMax.lineValue(0);
 M=myMax.lineValue(1);
 L=myMax.lineValue(2);
 myMax.lineLED(1);
 if((L==1 && M==1 && R==1)||(L==0 && M==1 && R==0)) command=1;
 
 if((L==0 && M==1 && R==1)||(L==0 && M==0 && R==1)) command=2;

 if((L==1 && M==0 && R==0)||(L==1 && M==1 && R==0)) command=3;


 switch(command){
 case 1:
 myMax.backward(120,120); break;
 case 2:
 myMax.backward(50,110);
 if(L==1 && M==0 && R==0){
 myMax.backward(50,110);
 } break;
 case 3:
 myMax.backward(110,50);
 if(L==0 && M==0 && R==1){
 myMax.backward(110,50);
 } break;
 }
}
