
int pin=13;
int sw=2;
void setup() {
  // put your setup code here, to run once:
pinMode(pin,OUTPUT);
pinMode(sw,INPUT_PULLUP);

}

void loop() {
  // put your main code here, to run repeatedly:

if(digitalRead(sw)==LOW)
{
  digitalWrite(pin,HIGH);
}
else
{
  digitalWrite(pin,LOW);
}
}
