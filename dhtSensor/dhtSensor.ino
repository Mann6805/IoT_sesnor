#define PIN 
#define Type DHT
#include <DHT.h>

DHT dht(PIN, TYPE);

void setup()
{
  Serial.begin(9600);
  dht.begin();
  delay(2000);  
}

void loop()
{
  int t = dht.readTemperature();
  int h = dht.readHumidity();
  Serial.println("");Serial.println("Temperature: ");Serial.println(t);
  Serial.println("");Serial.println("Humidity: ");Serial.println(h);
  delay(1000);
}
