int thisPin = 13;  // Pin connected to LED

void setup() {
  Serial.begin(9600);  // Initialize serial communication
  pinMode(thisPin, OUTPUT);  // Initialize the LED pin as output
}

void loop() {
  delay(1000);  // Wait for 1 second
  
  if (Serial.available() > 0) {  // Check if data is available to read
    char inChar = Serial.read();  // Read the incoming character
    
    switch (inChar) {
      case 'a':  // If received 'a'
        digitalWrite(thisPin, HIGH);  // Turn on the LED
        break;
      case 'b':  // If received 'b'
        digitalWrite(thisPin, LOW);  // Turn off the LED
        break;
      default:
        // Handle any other characters if needed
        break;
    }
  }
}
