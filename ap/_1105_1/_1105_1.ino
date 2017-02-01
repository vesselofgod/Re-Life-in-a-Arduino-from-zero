int p=5;

void setup() {
  // put your setup code here, to run once:
  for(int i=255; i>=0;i--)
  {
    analogWrite(p,i*51);
    delay(500);
  }
}

void loop() {
}
