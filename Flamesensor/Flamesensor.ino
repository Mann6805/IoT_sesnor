const int flamesensor = 2;

void setup()
{
  Serial.begin(9600);
  pinMode(flamesensor, INPUT);
}

void loop()
{
  int data = digitalRead(flamesensor);
  Serial.println(data);
  delay(1000);  
}
