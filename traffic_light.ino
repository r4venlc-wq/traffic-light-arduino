// C++ code
//
int speed = 0;

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop()
{
  speed = 400;
  delay(speed); // Wait for speed millisecond(s)
  digitalWrite(13, HIGH);
  delay(speed); // Wait for speed millisecond(s)
  digitalWrite(13, LOW);
  delay(speed); // Wait for speed millisecond(s)
  digitalWrite(12, HIGH);
  delay(speed); // Wait for speed millisecond(s)
  digitalWrite(12, LOW);
  delay(speed); // Wait for speed millisecond(s)
  digitalWrite(10, HIGH);
  delay(speed); // Wait for speed millisecond(s)
  digitalWrite(10, LOW);
}
