//각 알파벳을 누를 때마다 색 변경
int a = 0;
float b = 3.14;
char c = 'a';



void setup() {
  // 
  Serial.begin(9600);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  
}

void loop() {


  char input = Serial.read();
  if(input == 'y'){
    digitalWrite(10,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(11,LOW);
  }

  
  if(input == 'm'){
    digitalWrite(9,HIGH);
    digitalWrite(10,LOW);
    digitalWrite(11,HIGH);
  }


  if(input == 'w'){
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    }
  if(input == 'o'){
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
  }
}
