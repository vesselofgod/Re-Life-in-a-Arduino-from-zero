#include <Servo.h>

int servoPin=10;
int Rightpin = 6;
int Leftpin = 9;
Servo servo;
int angle=70;

void setup() {
  Serial.begin(9600); 
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(servoPin,OUTPUT);
  pinMode(Rightpin, INPUT);
  pinMode(Leftpin, INPUT);
  servo.attach(servoPin);

}
 
void loop() {
  int Rightdata;
  int Leftdata;
   Rightdata = digitalRead(Rightpin);
   Leftdata = digitalRead(Leftpin);
  if(Rightdata==HIGH && Leftdata==HIGH)  //black=HIGH white=LOW
  {
    analogWrite(5,255);
    digitalWrite(4,LOW);
    servo.write(70);//기준각=70
  }
  else if(Rightdata==LOW && Leftdata==HIGH)
  {
    analogWrite(5,200);
    digitalWrite(4,LOW);
    servo.write(40);//Left turn
  }
  else if(Rightdata==HIGH && Leftdata==LOW)
  {
    analogWrite(5,200);
    digitalWrite(4,LOW);
    servo.write(100);//Right turn
  }
  else
  {
    analogWrite(5,255);
    digitalWrite(4,LOW);
  }

}
