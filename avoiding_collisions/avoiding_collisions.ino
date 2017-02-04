int echoPin=13;
int trigPin=12;

void setup() {
Serial.begin(9600);
pinMode(trigPin,OUTPUT);
pinMode(echoPin,INPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
}

void loop() {

float duration,distance;
digitalWrite(trigPin,HIGH);
delay(10);
digitalWrite(trigPin,LOW);
duration=pulseIn(echoPin,HIGH);
distance=(duration*340)/20000;
Serial.println(distance);

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
