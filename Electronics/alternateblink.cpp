// C++ code
//
int animationtime = 0;

int Animationspeed = 0;

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  Animationspeed = 400;
  digitalWrite(LED_BUILTIN, HIGH);
  delay(Animationspeed); // Wait for Animationspeed millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(Animationspeed); // Wait for Animationspeed millisecond(s)
  digitalWrite(12, HIGH);
  delay(Animationspeed); // Wait for Animationspeed millisecond(s)
  digitalWrite(12, LOW);
  delay(Animationspeed); // Wait for Animationspeed millisecond(s)
  digitalWrite(11, HIGH);
  delay(Animationspeed); // Wait for Animationspeed millisecond(s)
  digitalWrite(11, LOW);
}