void setup() {
  Serial.begin(9600);

  int a=55;
  int b=33;

  if(a>b)
  {
    Serial.print("a is bigger than b");
  }
  else
  {
    Serial.print("a is not bigger than a");
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
