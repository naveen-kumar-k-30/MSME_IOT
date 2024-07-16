int a = A0;

void setup() {
  pinMode(13, OUTPUT);
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop() {
  int r = analogRead(a);
  Serial.println(r);

  if (r >= 500) {
    analogWrite(13, 255);  // Set the LED to full brightness
  } else {
    int brightness = map(r, 0, 500, 0, 255);  // Map the sensor value to LED brightness
    analogWrite(13, brightness);
  }

  delay(1000);  // Delay for 1 second
}
