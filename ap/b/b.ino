void setup() {

Serial.begin(9600);

}

void loop() 
{
  
if(Serial.available())
{
  long a = Serial.parseInt();
  Serial.print("a=");
  Serial.println(a);
}
}
