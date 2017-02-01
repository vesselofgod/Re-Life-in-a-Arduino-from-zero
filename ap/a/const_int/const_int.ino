const int startVal =1;
const int endVal = 10;
const int baudRate = 9600;

void setup() {
  Serial.begin(baudRate);
  for(int i = startVal; i<= endVal;i++)
  {
    Serial.println(i);
    delay(500);
  }
  Serial.println("All done!");
}

void loop() {
  // put your main code here, to run repeatedly:

}
