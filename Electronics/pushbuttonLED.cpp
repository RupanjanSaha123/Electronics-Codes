// C++ code
//
int Buttonstate = 0;

void setup()
{
  pinMode(2, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  // read the state of push button
  Buttonstate = digitalRead(2);
  // check pushbutton is pressed ,if it is ,
  // then.....
  if (Buttonstate == HIGH) {
    digitalWrite(LED_BUILTIN, HIGH);
  } else {
    digitalWrite(LED_BUILTIN, LOW);
  }
  delay(10); // Delay a little bit to improve simulation performance
}