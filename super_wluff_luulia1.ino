// C++ code
//
void setup()
{
  pinMode(1, OUTPUT);
  pinMode(0,OUTPUT);
}

void loop()
{
  digitalWrite(1, HIGH);
  digitalWrite(0, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(1, LOW);
  digitalWrite(0, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}