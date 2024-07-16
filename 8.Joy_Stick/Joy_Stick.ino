// Define the analog input pins for the joystick
int a = A0;  // Joystick X-axis
int b = A1;  // Joystick Y-axis

// Define the output pins for LEDs
int LED1 = 13;  // LED connected to pin 13
int LED2 = 12;  // LED connected to pin 12

void setup() {
  // Initialize serial communication for debugging
  Serial.begin(9600);

  // Set joystick input pins and LED output pins
  pinMode(a, INPUT);
  pinMode(b, INPUT);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
}

void loop() {
  // Read analog values from the joystick axes
  int x = analogRead(a);  // Read X-axis value
  int y = analogRead(b);  // Read Y-axis value

  // Print the analog values for debugging
  Serial.print("X-axis: ");
  Serial.println(x);
  Serial.print("Y-axis: ");
  Serial.println(y);

  // Determine LED control based on joystick position
  if ((x >= 0 && x <= 500) || (x >= 600 && x <= 1024)) {
    // X-axis range for LED1 control
    digitalWrite(LED1, HIGH);  // Turn on LED1
    digitalWrite(LED2, LOW);   // Turn off LED2
  } else if ((y >= 0 && y <= 500) || (y >= 600 && y <= 1024)) {
    // Y-axis range for LED2 control
    digitalWrite(LED2, HIGH);  // Turn on LED2
    digitalWrite(LED1, LOW);   // Turn off LED1
  } else {
    // Joystick in neutral position
    digitalWrite(LED2, LOW);   // Turn off LED2
    digitalWrite(LED1, LOW);   // Turn off LED1
  }

  delay(100);  // Delay for stability and to reduce rapid readings
}
