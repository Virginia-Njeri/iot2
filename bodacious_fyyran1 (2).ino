// C++ code
int red=1;
int orange=2;
int green=3;

//
void setup()
{
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop()
{
  digitalWrite(red, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(red, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
   digitalWrite(orange, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(orange, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(green, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(green, LOW);
  delay(1000); // Wait for 1000 millisecond(s)

}