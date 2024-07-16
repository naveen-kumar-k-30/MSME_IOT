// Define pin assignments
int led = 12;  // LED connected to pin 12
int t = 11;    // Trigger pin connected to pin 11
int e = 10;    // Echo pin connected to pin 10
int distance;  // Variable to store the calculated distance
long duration; // Variable to store the duration of the echo

void setup() {
  // Initialize the trigger pin as OUTPUT
  pinMode(t, OUTPUT);
  // Initialize the echo pin as INPUT
  pinMode(e, INPUT);
  // Initialize the LED pin as OUTPUT
  pinMode(led, OUTPUT);
  // Initialize serial communication for debugging
  Serial.begin(9600);
}

void loop() {
  // Send a trigger pulse to the ultrasonic sensor
  digitalWrite(t, LOW);            // Set the trigger pin LOW
  delayMicroseconds(2);            // Wait for 2 microseconds
  digitalWrite(t, HIGH);           // Set the trigger pin HIGH
  delayMicroseconds(10);           // Wait for 10 microseconds
  digitalWrite(t, LOW);            // Set the trigger pin LOW
  
  // Measure the duration of the pulse received at the echo pin
  duration = pulseIn(e, HIGH);     // Read the duration of the echo pulse
  
  // Calculate the distance in centimeters
  distance = duration * 0.034 / 2; // Calculate the distance using the speed of sound

  // Print the distance to the serial monitor
  Serial.println(distance);        // Output the distance for debugging
  
  // Turn on the LED if the distance is less than 25 cm, otherwise turn it off
  if (distance < 25) {
    digitalWrite(led, HIGH);       // Turn on the LED
  } else {
    digitalWrite(led, LOW);        // Turn off the LED
  }

  // Delay to stabilize readings and prevent rapid loop executions
  delay(100);                      // Wait for 100 milliseconds
}
