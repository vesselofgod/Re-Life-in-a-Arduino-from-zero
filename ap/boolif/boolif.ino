void setup() {
  Serial.begin(9600);
  float a=5.66;
  float b=90.23;
  if((a>5) && (b>100))
  {
    Serial.print("Values is big range");
  }

  else if((a<5)||(b>100))
  {
    Serial.print("Value is so fucking");
  }

  else
  {
    Serial.print("Value is normal range");
  }

}

void loop() {
  // put your main code here, to run repeatedly:

}
