const int airSensor = 2;

void setup()
{
  Serial.begin(9600);
  pinMode(airSensor,INPUT);  
}

void loop()
{
  int data = digitalWrite(airSensor);
  Serial.println(data);
  int per = map(data, 0, 1023.0,100);
  Serial.println(per);
  delay(1000);
}
