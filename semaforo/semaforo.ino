int  LED1 = 11;
int LED2 = 10;
int LED3 = 9;
void setup() {
  // put your setup code here, to run once:
    pinMode (11,OUTPUT);
    pinMode (10,OUTPUT);
    pinMode (9,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
    digitalWrite(11,HIGH);
    delay (4000);
    digitalWrite(11,LOW);
    digitalWrite(10,HIGH);
    delay (1000);
    digitalWrite(10,LOW);
    digitalWrite(9,HIGH);
    delay (4000);
    digitalWrite(9,LOW);
}
