const int d1=10;//chân dữ liệu nối với chân 14 của 74HC595
const int xung=11;//chân cung clock nối với chân 11 của 74HC595
const int chot=12;//chân chốt d1 nối với chân 12 của 74HC595
const int pin[8]={2,3,4,5,6,7,8,9};//các chân điều khiển hàng
const int ma_cot[8][8]={0,0,0,0,0,0,0,0,
                        0,0,0,0,1,0,0,0,
                        0,0,0,1,1,0,0,0,
                        0,0,1,0,1,0,0,0,
                        0,0,0,0,1,0,0,0,
                        0,0,0,0,1,0,0,0,
                        0,0,1,1,1,1,1,0,
                        0,0,0,0,0,0,0,0,};
void setup(){
  int i;
  for(i=2;i<=12;i++)
  pinMode(i,OUTPUT);
}

void doc_ma_hang(int i)
{
  int j;
  for(j=0;j<=7;j++)
  {
    digitalWrite(d1,ma_cot[i][j]);
    digitalWrite(xung,0);
    digitalWrite(xung,1);
  }
  digitalWrite(chot,0);//chốt dữ liệu đầu ra Q
  digitalWrite(chot,1);
}

void quet_hang(int i)//chân điều khiển hàng i=0 để hiển thị hàng đó; các hàng còn lại =1
{
  int j;
  for(j=0;j<=7;j++)
  digitalWrite(pin[j],1);
  digitalWrite(pin[i],0);
}
void loop()
{
  int i;
  for(i=0;i<=7;i++)
  {
    quet_hang(i);
    doc_ma_hang(i);
    delay(5);
  }
}
