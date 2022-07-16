void setup() {
  Serial.begin(9600);
  
}

void loop() {

  int lightValue = analogRead(A0);
  int lightLimit = 200;


  if(analogRead(A0)<= lightLimit)
  {
    analogWrite(5, 255);
    delay(5)
  }

  else
  {
    analogWrite(5, 0);
    delay(5)
  }


  
}