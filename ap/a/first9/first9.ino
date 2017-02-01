void setup() {
  Serial.begin(9600);
  int a,b;
  a=1;
  while(a<=9)
  {
    b=2;
    while(b<=9)
    {
      Serial.print("%d x %d = %-3d",b, a, a*b);
      b++
    }
  print("\n");
  a++
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
