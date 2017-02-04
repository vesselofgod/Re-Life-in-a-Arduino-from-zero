int Rightpin = 6;
int Leftpin = 9; 
void setup() {
  Serial.begin(9600); 
  pinMode(Rightpin, INPUT);
  pinMode(Leftpin, INPUT);
}
 
void loop() {
  int Rightdata;
  
  int Leftdata;
   Rightdata = analogRead(Rightpin);
   Leftdata = analogRead(Leftpin);
  Serial.print(Rightdata);
  Serial.println(Leftdata);
  delay(50); 
}
