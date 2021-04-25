int inputpin=26, pinstate=0,i,mypins[4]={2,4,21,23};
void setup()
{
  pinMode(inputpin, INPUT);
  pinMode(2, OUTPUT);
  for(i=0;i<=3;i=i+1)
  {
    pinMode(mypins[i], OUTPUT);
  }
}
void loop()
{
  pinstate=digitalRead(inputpin);
  if(pinstate==1)
  {
    for(i=0;i<=3;i=i+1)
    {
      digitalWrite(mypins[i], HIGH);
      delay(100);
      digitalWrite(mypins[i], LOW);
      delay(100);
    }
  }
  if(pinstate==0)
  {
    for(i=3;i>=0;i=i-1)
    digitalWrite(mypins[i], HIGH);
    delay(100);
    digitalWrite(mypins[i], LOW);
    delay(100);
  }
}
