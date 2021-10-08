#define _latch 6
#define _clock 7
#define _data 5
void setup()
{
  pinMode(_latch, OUTPUT);
  pinMode(_clock, OUTPUT);
  pinMode(_data, OUTPUT);
}

void loop()
{
  //chot IC
  digitalWrite(_latch, LOW);
  //day du lieu ra IC
  int soLieu=255;//B11111111, hoac 0xff
  shiftOut(_data,_clock,LSBFIRST,soLieu);
  //mo chot, de IC out du lieu ra
  digitalWrite(_latch, HIGH);
}
