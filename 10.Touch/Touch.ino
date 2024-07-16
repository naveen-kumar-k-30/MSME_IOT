// Define pin assignments
int led = 13;    // LED connected to pin 13
int touch = 12;  // Touch sensor connected to pin 12

void setup() {
  // Initialize pin modes
  pinMode(touch, INPUT);  // Set touch sensor pin as input
  pinMode(led, OUTPUT);   // Set LED pin as output
  
  // Initialize serial communication for debugging
  Serial.begin(9600);
}

void loop() {
  // Read the state of the touch sensor
  int touchState = digitalRead(touch);
  
  // Check if touch sensor is activated
  if (touchState == HIGH) {
    digitalWrite(led, HIGH);   // Turn on the LED
    Serial.println("Touch ON");  // Print message to serial monitor
    // Delay can be optionally added here for debounce or to control duration of LED activation
  } else {
    digitalWrite(led, LOW);    // Turn off the LED
    Serial.println("Touch OFF"); // Print message to serial monitor
  }
  
  // Delay to stabilize readings and reduce rapid loop executions
  delay(100);
}
