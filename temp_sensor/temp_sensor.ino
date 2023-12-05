const int sensor = 36;
int temperature;

void setup() 
{
  Serial.begin(9600);
  pinMode(sensor,INPUT);
}

void loop() 
{
  int raw = analogRead(sensor);
  float mv = raw * (3300.0/4096.0);
  float temperature = mv/10.0;
  Serial.println("Temperature: ");
  Serial.println(temperature);
  delay(5000);
}
