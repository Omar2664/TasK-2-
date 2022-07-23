#include <Servo.h>
Servo servol;
const int buttonpin(2);
const int servopin (9);
int run=0;
int buttonstate=0;
int pos1=0;

void setup() {
servol.attach(servopin);
}




void loop() {
Serial.begin(9600);
pinMode(buttonpin, INPUT_PULLUP);
buttonstate=digitalRead(buttonpin);
delay(2000);
if(buttonstate== HIGH){
  
  if(run==0){
    run=250;
    Serial.println("starting");
  }
  else{run =0;
  Serial.println("stopping");
}}
delay(1000);
if(run>0){
  for(pos1=0 ; pos1 < 180; pos1 +=1)
   { 
    servol.write(pos1);
    delay(10);
    
   }
  for(pos1 =180; pos1>=1; pos1-=1)
   {servol.write(pos1);
    delay(10);
 }
 
}
else{}
}
