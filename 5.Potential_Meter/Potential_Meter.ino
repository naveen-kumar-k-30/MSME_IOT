int a = A0;
int b = 13;
int c = 12;
int r;
void setup() {
  pinMode(a, INPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  r = analogRead(a);
  Serial.println(r);
  if (r > 500 && r < 700) {
    digitalWrite(c, LOW);
    digitalWrite(b, HIGH);
  }
  else if (r > 700 && r < 1000) {
    digitalWrite(b, LOW);
    digitalWrite(c, HIGH);
  }
  else if (r > 1000) {
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
  }
  delay(1000);
}
