#include <Servo.h>

int servoPin=10;
int Rightpin = 6;
int Leftpin = 9;
Servo servo;
int angle=70;
int echoPin=13;
int trigPin=12;

void setup() {
  Serial.begin(9600); 
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(servoPin,OUTPUT);
  pinMode(Rightpin, INPUT);
  pinMode(Leftpin, INPUT);
  servo.attach(servoPin);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
}
 
void loop() {
  int Rightdata;
  int Leftdata;
   Rightdata = digitalRead(Rightpin);
   Leftdata = digitalRead(Leftpin);
   float duration,distance;
  digitalWrite(trigPin,HIGH);
  delay(10);
  digitalWrite(trigPin,LOW);
  duration=pulseIn(echoPin,HIGH);
  distance=(duration*340)/20000;
  
  if(Rightdata==HIGH && Leftdata==HIGH)  //black=HIGH white=LOW
  {
    analogWrite(5,255);
    digitalWrite(4,LOW);
    servo.write(70);//기준각=70
  }
  else if(Rightdata==LOW && Leftdata==HIGH)
  {
    analogWrite(5,255);
    digitalWrite(4,LOW);
    servo.write(10);//Left turn
    delay(875);
  }
  else if(Rightdata==HIGH && Leftdata==LOW)
  {
    analogWrite(5,255);
    digitalWrite(4,LOW);
    servo.write(130);//Right turn
    delay(875);
  }
  else
  {
    analogWrite(5,255);
    digitalWrite(4,LOW);
  }

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
