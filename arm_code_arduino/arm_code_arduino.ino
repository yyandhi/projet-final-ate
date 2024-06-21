#include <Servo.h>

char userInput;
Servo finger;
Servo finger1;
Servo finger2;
Servo arm;
int pos = 0;   

void setup(){

  Serial.begin(9600);                        //  setup serial
  finger.attach(1);
  finger1.attach(3);
  finger2.attach(5);
  arm.attach(10)
}


void loop(){
  while(Serial.available()==0){

  }
  if(Serial.available()> 0){ 
    
    userInput = Serial.read();               // read user input
      
      if(userInput == 'o'){
        finger.write(180);
        finger1.write(180);
        finger2.write(180);
        arm.write(180)
        }                
      }
      if(userInput == 'x'){
        finger.write(0);
        finger1.write(0);
        finger2.write(0);
        arm.write(0)
      }
} // Serial.available
 // Void Loop
