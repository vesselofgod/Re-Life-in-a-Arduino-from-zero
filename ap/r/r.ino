void setup() {
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  int a;
 a= analogRead(A1);
  Serial.println(a);
  delay(500);
}
