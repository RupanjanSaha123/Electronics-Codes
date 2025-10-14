int temp = A0;
float temp_celsius;
float Voltage;
float analog_reading;
float temp_far;

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
}
void loop()
{
  analog_reading = analogRead(A0);
  Serial.print("Analog reading: ");
  Serial.println(analog_reading);
  
  
  Voltage = analog_reading*5/1024;
  
  
  
  Serial.print("Voltage reading:");
  Serial.print(Voltage);
  
  
  
  temp_celsius = 100* (Voltage - 0.5);
  Serial.println("Celsius reding:" + String(temp_celsius) + ("C"));
  temp_far = (temp_celsius * 9/5) + 32;
  Serial.println("Farenheit reding:" + String(temp_far) + ("F\n"));
  delay(3000);
}