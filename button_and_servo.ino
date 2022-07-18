#include <Servo.h>
Servo servol;
const int buttonpin(2);
void setup() {
servol.attach(9);
}

void loop() {

pinMode(buttonpin, INPUT);
int buttonstate =0;
buttonstate = digitalRead(buttonpin);
if (buttonstate == HIGH){
servol.write(180);
}
else{
servol.write(0);
}

}
