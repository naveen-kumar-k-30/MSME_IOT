int led=13;
int ir=2;
void setup() {
pinMode(ir,INPUT);
pinMode(led,OUTPUT);
Serial.begin(9600);
}

void loop() {
  int r=digitalRead(ir);
//  Serial.println(r);
  if(r==LOW){
    digitalWrite(led,HIGH);
    Serial.println("Hands ON");
    delay(2000);
  }else{
    digitalWrite(led,LOW);
    Serial.println("Hands OFF");
  }
}
