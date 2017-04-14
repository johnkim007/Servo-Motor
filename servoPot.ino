#include <Servo.h>

Servo newServo;

int servoPin = 11;
int angle = 0;    // variable to store the servo position

void setup() {
  newServo.attach(11);  // attaches the servo on pin 9 to the servo object
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(A0);
  angle = map(value, 0, 1023, 0, 179);
  newServo.write(angle);
  delay(5);

  Serial.print("vale"+ String(value) + ", ");
  Serial.println("angle" + String(angle));
}
