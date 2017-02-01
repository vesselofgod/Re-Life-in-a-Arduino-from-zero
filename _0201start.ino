#include <Servo.h>

int echoPin=13;
int trigPin=12;
int servoPin=9;
Servo servo;
int angle=75;

void setup() {
Serial.begin(9600);
pinMode(trigPin,OUTPUT);
pinMode(echoPin,INPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(9,OUTPUT);
servo.attach(servoPin);
}

void loop() {

float duration,distance;
digitalWrite(trigPin,HIGH);
delay(10);
digitalWrite(trigPin,LOW);
duration=pulseIn(echoPin,HIGH);
distance=(duration*340)/20000;
Serial.println(distance);

  for(angle=75; angle<=95; angle++)
  {
    servo.write(angle);
    delay(10);
    if(distance>=150)
    {
      analogWrite(5,255);
      digitalWrite(4,LOW);
    }
    else if(100<=distance && distance<150)
    {
      analogWrite(5,190);
      digitalWrite(4,LOW);
    }
    else if(75<=distance && distance<100)
    {
      analogWrite(5,150);
      digitalWrite(4,LOW);  
    }
    else if(45<=distance && distance<75)
    {
      analogWrite(5,130);
      digitalWrite(4,LOW);  
    }
    else
    {
      analogWrite(5,0);
      digitalWrite(4,LOW);  
    }
  }
  
  for(angle=75; 55<=angle; angle--)
  {
    servo.write(angle);
    delay(10);
    if(distance>=150)
    {
      analogWrite(5,255);
      digitalWrite(4,LOW);
    }
    else if(100<=distance && distance<150)
    {
      analogWrite(5,190);
      digitalWrite(4,LOW);
    }
    else if(75<=distance && distance<100)
    {
      analogWrite(5,150);
      digitalWrite(4,LOW);  
    }
    else if(45<=distance && distance<75)
    {
      analogWrite(5,130);
      digitalWrite(4,LOW);  
    }
    else
    {
      analogWrite(5,0);
      digitalWrite(4,LOW);  
    }
  }
}
