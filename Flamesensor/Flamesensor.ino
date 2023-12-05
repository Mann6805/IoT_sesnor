// Define the pin for the flame sensor
const int flamesensor = 2;

void setup()
{
  // Start serial communication at 9600 bits per second
  Serial.begin(9600);

  // Set the flame sensor pin as an input
  pinMode(flamesensor, INPUT);
}

void loop()
{
  // Read the digital value from the flame sensor pin
  int data = digitalRead(flamesensor);

  // Print the read value to the Serial Monitor
  Serial.println(data);

  // Delay for 1 second before the next iteration
  delay(1000);  
}
