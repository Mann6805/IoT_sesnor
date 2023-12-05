const int soilSensor = 36; // Define the pin (A0) where the soil moisture sensor is connected

void setup() {
  Serial.begin(9600); // Initialize serial communication at 9600 baud rate
  pinMode(soilSensor, INPUT); // Set the soil moisture sensor pin as input
}

void loop() {
  int data = analogRead(soilSensor); // Read analog data from the soil moisture sensor
  Serial.println(data); // Print the sensor reading to the serial monitor
  delay(1000); // Delay for 1 second before taking the next reading
}
