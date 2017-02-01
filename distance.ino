int echoPin=12;
int trigPin=13;

void setup() {
Serial.begin(9600);
pinMode(trigPin,OUTPUT);
pinMode(echoPin,INPUT);
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
}

