#include<Servo.h>
Servo myservo;
int servopin=9;

void setup() {
myservo.attach(servopin);
}

void loop() {

int pos=0;
int dt=15;
for(pos=0;pos<=180;pos++)
{
  myservo.write(pos);
  delay(dt);
}
delay(3000);
for(pos=180;pos>=0;pos--)
{
  myservo.write(pos);
  delay(dt);
}
delay(3000);
}
