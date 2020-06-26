int ch1;
void setup() 
{
  pinMode(A0, OUTPUT);
  pinMode(2, INPUT);
  Serial.begin(9600);
  delay(1000);
}

void loop() 
{
  if(pulseIn(2, HIGH, 25000) >= 1600)
  {
    digitalWrite(A0, HIGH);
    delay(20);
  }
  else
  {
    digitalWrite(A0, LOW);
  }
}
