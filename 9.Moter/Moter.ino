// Define motor control pins
int f = 9;  // Forward pin
int r = 10; // Reverse pin

void setup() {
  // Initialize motor control pins
  pinMode(r, OUTPUT);  // Reverse pin as output
  pinMode(f, OUTPUT);  // Forward pin as output
  
  // Initialize serial communication
  Serial.begin(9600);
}

void loop() {
  // Call motor control function
  motor();
}

void motor() {
  // Read serial input as string
  String Sig = Serial.readString();
  
  // Check received command and act accordingly
  if (Sig == "f") {
    forward();
  } else if (Sig == "r") {
    reverse();
  } else if (Sig == "s") {
    motorStop();
  }
}

void forward() {
  // Output forward movement status
  Serial.println("Forward");
  
  // Set motor to move forward
  digitalWrite(f, HIGH);
  digitalWrite(r, LOW);
}

void reverse() {
  // Output reverse movement status
  Serial.println("Reverse");
  
  // Set motor to move in reverse
  digitalWrite(f, LOW);
  digitalWrite(r, HIGH);
}

void motorStop() {
  // Output motor stop status
  Serial.println("Motor Off");
  
  // Stop motor movement
  digitalWrite(f, LOW);
  digitalWrite(r, LOW);
}
