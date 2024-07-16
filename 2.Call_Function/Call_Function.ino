int red =  13;
int yellow =  12;
int green =  11;
void setup() {
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  traffic();
}
void traffic() {
  redHigh(); delay(5000);
  yellowHigh(); delay(2000);
  greenHigh(); delay(5000);
}
void redHigh()
{
  Serial.println("STOP");
  digitalWrite(red, HIGH);
  digitalWrite(yellow, LOW);
  digitalWrite(green, LOW);
}
void yellowHigh()
{
  Serial.println("GET READY");
  digitalWrite(red, LOW);
  digitalWrite(yellow, HIGH);
  digitalWrite(green, LOW);
}
void greenHigh()
{
  Serial.println("GO");
  digitalWrite(red, LOW);
  digitalWrite(yellow, LOW);
  digitalWrite(green, HIGH);
}
