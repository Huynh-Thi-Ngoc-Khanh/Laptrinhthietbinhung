#define SH_CP 4
#define DS 3
#define ST_CP 2

void setup(){
  for(int i=2;i<=13;i++){
    pinMode(i,OUTPUT);
  }
}

void loop(){
  quetled();
}
void quetled(){
  for(int i=0;i<=8;i++){
    digitalWrite(ST_CP,0);
    digitalWrite(6,1);
    digitalWrite(7,2);
    digitalWrite(8,3);
    digitalWrite(9,4);
    digitalWrite(10,5);
    digitalWrite(11,6);
    digitalWrite(12,7);
    digitalWrite(13,8);
    shiftOut(DS,SH_CP,LSBFIRST,(0B10000000 >> i)^0B11111111);
    digitalWrite(ST_CP,1);
    delay(100);
  }
}
