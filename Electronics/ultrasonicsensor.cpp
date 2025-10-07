// variables and pins are declared and iniotialise
int trigpin = 10;
int echopin = 9;
long time;
int distance;


void setup()
  //this loop repeats only once
{
  pinMode (10, OUTPUT); //TRIG pin set as output
  pinMode (9, INPUT); //ECHO pin set as input
  Serial.begin(9600);
}
  
  void loop()
   //this loop repeats continiously
  {
    digitalWrite(10, LOW);
    delayMicroseconds(2);
  
    digitalWrite(10, HIGH);
    delayMicroseconds(10);
    digitalWrite(10, LOW);
  
    //calculating the distance :
    time = pulseIn(9, HIGH); //to calculate time of flight
    distance = time*0.034/2;//to claculate the distance of obj.
  
    //printing the distance:
    Serial.print ("Distance: ");
    Serial.println (distance);
  }  
  