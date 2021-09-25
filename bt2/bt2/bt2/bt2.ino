int x=0;
void setup() {
  pinMode(13, OUTPUT);
  pinMode(2, INPUT);
}

void loop() { 
  x=digitalRead(2);
  if(x==HIGH)
  {
    digitalWrite(13,HIGH);
  }else{
    digitalWrite(13,LOW);
  }
  delay(1000);
}
