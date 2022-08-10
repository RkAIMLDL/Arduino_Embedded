#include<EEPROM.h>
void setup() {
Serial.begin(9600);

}  

void loop() {
unsigned char a=EEPROM.read(0);
Serial.print("EEPROM Read : ");
Serial.println(a);
delay(1000);

/*int a=analogRead(A0);
unsigned char b=a/4;
EEPROM.write(0,b);
Serial.println("Written");
delay(2000);*/
}
