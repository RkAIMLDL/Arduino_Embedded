int en=5;
int in1=2;
int in2=3;
void setup() {
  // put your setup code here, to run once:
pinMode(en,OUTPUT);
pinMode(in1,OUTPUT);
pinMode(in2,OUTPUT);
digitalWrite(en,HIGH);
analogWrite(en,255);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(in1,HIGH);
digitalWrite(in1,LOW);
delay(1000);
digitalWrite(in1,LOW);
digitalWrite(in1,LOW);
delay(1000);
}
