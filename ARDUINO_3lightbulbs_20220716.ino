void setup() {
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);

}

void loop() {

  for(int i = 0; i<255; i++)
  {
    analogWrite(9, i);
    delay(5)
  }

  delay(1000);

  for(int i = 255; i>0; i--)
  {
    analogWrite(9,i);
    delay(5)
  }



  digitalWrite(6, HIGH);
  delay(500);
  digitalWrite(5, HIGH);
  delay(500);
  digitalWrite(5, LOW);
  delay(500);
  digitalWrite(6, LOW);
  delay(500);


  
}