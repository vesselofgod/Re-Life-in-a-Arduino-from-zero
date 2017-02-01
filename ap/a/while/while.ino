void setup() {
  Serial.begin(9600);
  int i = 1;
  while (true)
  {
    Serial.println(++i);
    delay(500);
  }

}

void loop() {
  // put your main code here, to run repeatedly:

}
