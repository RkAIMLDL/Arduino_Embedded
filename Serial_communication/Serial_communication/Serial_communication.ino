void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(13,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available()>0)
{
  int rxd=Serial.read();
  //Serial.print("You pressed : ");
//  Serial.write(rxd);
if(rxd=='A')
{
  digitalWrite(13,HIGH);
}
if(rxd=='B')
{
  digitalWrite(13,LOW);
}
}
}
