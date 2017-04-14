#include <Servo.h>

Servo newServo;

int servoPin = 11;
int angle = 0;    // variable to store the servo position
int angleChange = 1;

void setup() {
  newServo.attach(11);  // attaches the servo on pin 9 to the servo object
  Serial.begin(9600);
}

void loop() {
  angle = angle + angleChange;
  delay(10);
  if (angle >= 180 || angle <=0){
    angleChange = - angleChange;
  }
  newServo.write(angle);
}
