#include <SoftwareSerial.h>// import the serial library
#include "DualVNH5019MotorShield.h"
DualVNH5019MotorShield  md;
char incomingByte;
void setup() {
  // put your setup code here, to run once:
  
  pinMode(13,OUTPUT);
  Serial1.begin(9600);
  Serial.begin(9600);
  md.init();

}

void loop() {
      if (Serial1.available()){
        incomingByte = Serial1.read();
       
       if(incomingByte == '1'){
            digitalWrite(13,HIGH);
        }
        if(incomingByte == '2'){
            digitalWrite(13,LOW);
        }
        if(incomingByte == '3'){
            md.setSpeeds(110, 110);
        }
        if(incomingByte == '4'){
           md.setSpeeds(-110, -110);
        }
        if(incomingByte == '5'){
            md.setSpeeds(-200, 200);
        }
        if(incomingByte == '6'){
          md.setSpeeds(200, -200);
        }
        if(incomingByte == '7'){
            md.setSpeeds(70, 70);
        }
        if(incomingByte == '8'){
           md.setSpeeds(-70, -70);
        }
        if(incomingByte == '9'){
            md.setSpeeds(-140, 140);
        }
        if(incomingByte == 'p'){
           md.setSpeeds(140, -140);
        }
        if(incomingByte == 's'){
             md.setSpeeds(0, 0);
        }
        
        
   }
  /* // put your main code here, to run repeatedly:
   md.setSpeeds(400, 400);
   delay(2000);
   md.setSpeeds(0, 0);
   delay(1000);
   md.setSpeeds(-400, -400);
   delay(2000);
   md.setSpeeds(0, 0);
   delay(1000);
   md.setSpeeds(400, -400);
   delay(2000);
   md.setSpeeds(0, 0);
   delay(1000);
   md.setSpeeds(-400, 400);
   delay(2000);
   md.setSpeeds(0, 0);
   delay(1000);
   */

   
}
