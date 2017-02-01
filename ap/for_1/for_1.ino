void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
for(int i=1; i<=5;i++)
{
  Serial.print(i);
  delay(1000);
}
}

void loop() {
  // put your main code here, to run repeatedly:

}
