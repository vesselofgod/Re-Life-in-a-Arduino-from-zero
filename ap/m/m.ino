void setup()
  {
  Serial.begin(9600);
  for(int i=0;i<=9;i++)
  {
    if(i<5)
    {
      Serial.println("i is small value");
    }
    else if(5<=i<8)
    {
      Serial.println("i is not small, but i is not bigger than 8");
    }
    else
    {
      Serial.println("i is bigger than 8");
    }
    delay(500);
  }
  Serial.print("count is done");
  
}

void loop() 
{
  Serial.println("count num first");
}
