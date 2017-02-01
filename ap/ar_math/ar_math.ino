void setup()
{
  Serial.begin(9600);

}

void loop()
{
  
  int a = 89;
  int b = 42;
  int c = a + b;
 
  Serial.print("a + b = ");
  Serial.println(c);
}
