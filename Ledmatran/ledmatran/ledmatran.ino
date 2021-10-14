#define DS_cot 3
#define DS_hang 2
#define SH_CP_hang 6
#define SH_CP_cot 5
#define ST_CP 4

byte cot = 0b10000000;
void setup(){
  pinMode(ST_CP, OUTPUT);
  pinMode(DS_hang, OUTPUT);
  pinMode(SH_CP_hang, OUTPUT);
  pinMode(SH_CP_cot, OUTPUT);
  pinMode(DS_cot, OUTPUT);
  digitalWrite(ST_CP,LOW);
  shiftOut(DS_cot,SH_CP_cot,LSBFIRST,0b10000000);
  digitalWrite(ST_CP,HIGH);
}

void loop(){
  for(int i=0;i<8;i++){
    digitalWrite(ST_CP,LOW);
    shiftOut(DS_cot,SH_CP_cot,LSBFIRST,cot>>i);
    digitalWrite(ST_CP,HIGH);
    delay(1000);
  }
}
