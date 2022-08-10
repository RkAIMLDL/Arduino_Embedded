int echo=A0;
int trig=A1;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
 pinMode(trig.OUTPUT);
 pinMode(echo,INPUT);
  }
long distance,duration;
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trig,LOW);
  delay(10);
  digitalWrite(trig,HIGH);
  delay(10);
  digitalWrite(trig,LOW);
  duration=pulseIn(echo,HIGH);
  distance=duration/58;
  Serial.println("Distance : ");
  Serial.print(distance);
}
