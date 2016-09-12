void setup() {
  // put your setup code here, to run once:
pinMode(8, OUTPUT);
pinMode(9, OUTPUT);
pinMode(10, OUTPUT);
pinMode(11, OUTPUT);
pinMode(A0, INPUT);
pinMode(A1, INPUT);
pinMode(A2, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(A0)==HIGH);
{
  PORTB=1;
  delay(500);
  PORTB=2;
  delay(500);
  PORTB=3;
  delay(500);
  PORTB=4;
  delay(500);
  PORTB=5;
  delay(500);
  PORTB=6;
  delay(500);
  PORTB=7;
  delay(500);
  PORTB=8;
  delay(500);
  PORTB=9;
  delay(500);
  PORTB=10;
  delay(500);
  PORTB=11;
  delay(500);
  PORTB=12;
  delay(500);
  PORTB=13;
  delay(500);
  PORTB=14;
  delay(500);
  PORTB=15;
  delay(500);
 
}

}
