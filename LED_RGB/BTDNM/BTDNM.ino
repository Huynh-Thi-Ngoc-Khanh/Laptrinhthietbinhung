// C++ code
//
int LEDblue=12; 
int LEDred=13; 
int LEDgreen=11; 

void setup()
{
pinMode(LEDblue, OUTPUT);
pinMode(LEDgreen, OUTPUT);
pinMode(LEDred, OUTPUT);
}
void loop()
{
  digitalWrite(LEDred,HIGH);
  digitalWrite(LEDgreen,LOW);
  digitalWrite(LEDblue,LOW);
  delay(1000); 
  
  digitalWrite(LEDred,LOW);
  digitalWrite(LEDgreen,HIGH);
  digitalWrite(LEDblue,LOW);
  delay(1000);
  
  digitalWrite(LEDred,LOW);
  digitalWrite(LEDgreen,LOW);
  digitalWrite(LEDblue,HIGH);
  delay(1000);
  
  digitalWrite(LEDred,HIGH);
  digitalWrite(LEDgreen,HIGH);
  digitalWrite(LEDblue,LOW);
  delay(1000);
  
  digitalWrite(LEDred,HIGH);
  digitalWrite(LEDgreen,LOW);
  digitalWrite(LEDblue,HIGH);
  delay(1000);
}
