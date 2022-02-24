//버튼 누르면 색 변경
void setup() {
  pinMode(8,INPUT);
  pinMode(13,OUTPUT);
  pinMode(7,INPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
}

void loop() {
 if(digitalRead(8) == HIGH){
  digitalWrite(13,HIGH);
  delay(100);
  }
 else{
  digitalWrite(13,LOW);
  delay(1000);
 }

 if(digitalRead(7) == HIGH){
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(11,LOW);
 }
 else{
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);  
  }


}
 
 
 
