void setup() {
  // put your setup code here, to run once:
pinMode(6,OUTPUT);
analogWrite(6,255);
}

void loop() {
  // put your main code here, to run repeatedly:
for(int i=0;i<=255;i++)
{
  analogWrite(6,i);
}
delay(1000);
for(int i=255;i>=0;i--)
{
  analogWrite(6,i);
}
delay(1000);
}
