#include <Servo.h>

Servo newServo;

int servoPin = 11;
int angle = 90;    // variable to store the servo position

void setup() {
  newServo.attach(11);  // attaches the servo on pin 9 to the servo object
  Serial.begin(9600);
}

void loop() {
  if(Serial.available()){
    angle = Serial.parseInt();
    newServo.write(angle);
  }

}
