const int irSensor = 2; // Pin connected to the IR sensor
const int led = 15; // Pin connected to the LED

void setup() {
  Serial.begin(9600); // Initialize serial communication at 9600 baud rate
  pinMode(irSensor, INPUT); // Set IR sensor pin as input
  pinMode(led, OUTPUT); // Set LED pin as output
}

void loop() {
  int data = digitalRead(irSensor); // Read data from IR sensor

  // Check if an object is detected by the IR sensor
  if (data == 0) {
    digitalWrite(led, HIGH); // Turn on the LED
    char turu[] = "Object detected"; // Message when an object is detected
    Serial.println(turu); // Print the message to the serial monitor
  } else {
    digitalWrite(led, LOW); // Turn off the LED
    char furu[] = "Object not detected"; // Message when no object is detected
    Serial.println(furu); // Print the message to the serial monitor
  }

  delay(100); // Delay for stability and to avoid rapid sensor readings
}
