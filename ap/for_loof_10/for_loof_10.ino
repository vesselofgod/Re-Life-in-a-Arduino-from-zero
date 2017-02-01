void setup() {
  Serial.begin(9600);

  for(int i=1; i<= 10; i++)
  {
    Serial.println(i);
    delay(1000);
  }
  Serial.println("All done!");
}

void loop() {
  // put your main code here, to run repeatedly:

}
