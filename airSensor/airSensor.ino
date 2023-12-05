const int airSensor = 2; // Define the pin where the air sensor is connected

void setup() {
  Serial.begin(9600); // Initialize serial communication at 9600 baud rate
  pinMode(airSensor, INPUT); // Set airSensor pin as input
}

void loop() {
  int sensorValue = analogRead(airSensor); // Read analog data from the air sensor
  Serial.print("Raw Sensor Value: "); 
  Serial.println(sensorValue); // Print the raw sensor value to the serial monitor
  
  int percentage = map(sensorValue, 0, 1023, 0, 100); // Map the sensor value to a percentage (0-100)
  Serial.print("Percentage: ");
  Serial.println(percentage); // Print the percentage to the serial monitor
  
  delay(1000); // Wait for 1 second before taking the next reading
}
