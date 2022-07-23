#include <Servo.h>
Servo servoTop;
Servo servoMid;
Servo servoBottom;
Servo servoBase;
Servo servoHand;

int x =90;
int y =180;

void setup() {
servoHand.attach(8);
servoTop.attach(9);
servoMid.attach(10);
servoBottom.attach(11);
servoBase.attach(12);


servoTop.write(x);
servoMid.write(x);
servoBottom.write(x);
servoBase.write(x);
servoHand.write(25);

}

void loop() {


}
