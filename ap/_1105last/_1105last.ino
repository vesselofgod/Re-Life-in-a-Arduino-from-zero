void setup() {
  pinMode(10,OUTPUT);
}

void loop() {
  int a;
  a= analogRead(A1);
    analogWrite(10,a/4);

}
