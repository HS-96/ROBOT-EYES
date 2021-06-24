// C++ code
//
void setup()
{
  pinMode(13, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);
  delay(15); // Wait for 15 millisecond(s)
  digitalWrite(13, LOW);
  delay(15); // Wait for 15 millisecond(s)
}