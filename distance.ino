int echoPin=12;
int trigPin=13;

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
delay(100);
if(distance>=100)
{
  analogWrite(5,255);
  digitalWrite(4,LOW);
}
else if(50<=distance<100)
{
  analogWrite(5,150);
  digitalWrite(4,LOW);
}
else
{
  analogWrite(5,0);
  digitalWrite(4,LOW);  
}
}

