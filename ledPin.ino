int incomingByte = 0;
int ledPin =13;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(ledPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if (Serial.available() >0) {
  //incomingByte = Serial.read();
  Serial.println(incomingByte, DEC);
  if (incomingByte == 49){
    digitalWrite(ledPin,HIGH);
  } else if (incomingByte == 48){
    digitalWrite(ledPin,LOW);
  }
  }
  }

