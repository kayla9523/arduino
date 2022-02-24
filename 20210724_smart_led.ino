//a1의 빛을 가리면 불이 켜짐
void setup() {
pinMode(A1,INPUT);
Serial.begin(9600);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
}

void loop() {
 Serial.println(analogRead(A1));

 if(analogRead(A1) <= 300){
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
  }

 else if(analogRead(A1) >= 840){
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
    }
}
