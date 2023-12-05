#define PIN // Define the pin where the DHT sensor is connected
#define TYPE DHT // Define the type of DHT sensor being used

#include <DHT.h> // Include the DHT sensor library

DHT dht(PIN, TYPE); // Create a DHT object named 'dht' with defined pin and type

void setup() {
  Serial.begin(9600); // Initialize serial communication at 9600 baud rate
  dht.begin(); // Initialize the DHT sensor
  delay(2000); // Delay to stabilize sensor readings
}

void loop() {
  int temperature = dht.readTemperature(); // Read temperature from the DHT sensor
  int humidity = dht.readHumidity(); // Read humidity from the DHT sensor
  
  Serial.println(""); // Print a blank line for better readability
  Serial.println("Temperature: "); // Print label for temperature
  Serial.println(temperature); // Print temperature value to serial monitor
  
  Serial.println(""); // Print a blank line for better readability
  Serial.println("Humidity: "); // Print label for humidity
  Serial.println(humidity); // Print humidity value to serial monitor
  
  delay(1000); // Delay for 1 second before taking the next reading
}
