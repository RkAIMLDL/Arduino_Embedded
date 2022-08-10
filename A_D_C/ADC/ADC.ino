void setup() {
  // put your setup code here, to run once:
Serial.begin(96000);
}

void loop() {
  // put your main code here, to run repeatedly:
  int volt=analogRead(A0);
  Serial.println(volt);
  delay(1000);

}
