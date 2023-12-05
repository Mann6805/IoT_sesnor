const int sensor = 36; // Define the pin connected to the temperature sensor (analog input pin)

void setup() {
  Serial.begin(9600); // Initialize serial communication at 9600 baud rate
  pinMode(sensor, INPUT); // Set the sensor pin as input
}

void loop() {
  int raw = analogRead(sensor); // Read analog data from the sensor
  float mv = raw * (3300.0 / 4096.0); // Convert the raw value to millivolts

  float temperature = mv / 10.0; // Convert millivolts to temperature in degrees Celsius
  // Note: Depending on the sensor, this conversion formula might vary
  
  Serial.println("Temperature: "); // Print label for temperature
  Serial.println(temperature); // Print temperature value to serial monitor

  delay(5000); // Delay for 5 seconds before taking the next reading
}
