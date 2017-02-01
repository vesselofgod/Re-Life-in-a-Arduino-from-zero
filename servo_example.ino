#include <Servo.h>
int servoPin=9;
Servo servo;
int angle=0;
void setup() {
servo.attach(servoPin);
}

void loop() {
  for(angle =0; angle<200; angle++)
  {
    servo.write(angle);
    delay(15);
  }
  for(angle = 200; angle>0; angle--)
  {
    servo.write(angle);
    delay(15);
  }
  Serial.println(angle);
  delay(100);
}
