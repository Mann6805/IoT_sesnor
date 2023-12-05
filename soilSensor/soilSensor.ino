const int soilSensor = 36;// a0 wala 

void setup()
{
  Serial.begin(9600);
  pinMode(soilSensor, INPUT);
}

void loop()
{
  int data = digitalRead(soilSensor);
  Serial.println(data);
  delay(1000);  
}
