// Motor A connections
int enA = 9; // Motor A velocity control pin (PWM value) 
int in1 = 8; 
int in2 = 7;
// Motor B connections
int enB = 3; // Motor B velocity control pin (PWM value) 
int in3 = 5;
int in4 = 4;
// For ready connection of driver and motors;
// in1 and in3 will be HIGH and in2 and in4 will be LOW for forward movement 
// enA and enB may take values in range of 0-255, you can set it up tu 100-150 for test
char komutlar[100];
int theMap[] = {0,0};
char typesOfMove;
char start;
void setup(){
 Serial.begin(9600);
 pinMode(in1,OUTPUT);
 pinMode(in2, OUTPUT);
 pinMode(in3, OUTPUT);
 pinMode(in4,OUTPUT);
 pinMode(enA,OUTPUT);
 pinMode(enB,OUTPUT);



}

void loop(){
  Serial.println("hamlelerinizi giriniz. bittikten sonra o'ya basınız ");
  
  for (int j = 0; j < 100; j++) {
  while (Serial.available() == 0) {
  }
   String  typesOfMove = Serial.readString();
   Serial.print(typesOfMove);
   typesOfMove = komutlar[j];
   Serial.print(j);
   Serial.print(" nci hamle = ");
   Serial.println(komutlar[j]);
   
   
   if(komutlar[j] == 'o'){  
    Serial.println("Rota Oluşturuldu!!");
    break;
  };
  };
  
  
   
if(start == 'o'){
  for (int i = 0; i<100; i++) {
    if (komutlar[i] == 'f'){
  f();
  theMap[1]++;
  //delay(50);

    };
      if( komutlar[i] == 'b'){
  b();
  theMap[1]--;
  //delay(50);

    };
      if (komutlar[i] == 'r'){
  r();
  theMap[0]++;
  //delay(50);

    };
      if (komutlar[i] == 'l'){
  l();
  theMap[0]--;
  //delay(50);

    };
      if (komutlar[i] == 's'){
  s();
  //delay(2000);

    };

    if (komutlar[i] == 'o'){
  o();
  //delay(2000);

    };
    if (komutlar[i] == '\0'){
  Serial.print("yeni hareket girin");
  break;
  //delay(2000);

    };
  }
}
  //delay(200);
  Serial.print("x value =");
  Serial.println(theMap[0]);
  Serial.print("y value =");
  Serial.println(theMap[1]);
}



void f (){
  analogWrite(enA,80);
  analogWrite(enB,80);
digitalWrite(in3,HIGH);
digitalWrite(in4,LOW);
digitalWrite(in1, HIGH);
digitalWrite(in2,LOW);
//delay(200);
}

void b (){
  analogWrite(enA,80);
  analogWrite(enB,80);
digitalWrite(in3,LOW);
digitalWrite(in4,HIGH);
digitalWrite(in1, LOW);
digitalWrite(in2,HIGH);
//delay(200);

}
void r (){
  analogWrite(enA,80);
  analogWrite(enB,80);
digitalWrite(in3,LOW);
digitalWrite(in4,LOW);
digitalWrite(in1, HIGH);
digitalWrite(in2,LOW);
//delay(200);
}

void l (){
  analogWrite(enA,80);
  analogWrite(enB,80);
digitalWrite(in3,HIGH);
digitalWrite(in4,LOW);
digitalWrite(in1, LOW);
digitalWrite(in2,LOW);
//delay(200);
}
void s (){
  analogWrite(enA,80);
  analogWrite(enB,80);
digitalWrite(in3,LOW);
digitalWrite(in4,LOW);
digitalWrite(in1, LOW);
digitalWrite(in2,LOW);
//delay(200);
}
void o (){
  analogWrite(enA,80);
  analogWrite(enB,80);
digitalWrite(in3,LOW);
digitalWrite(in4,LOW);
digitalWrite(in1, LOW);
digitalWrite(in2,LOW);
//delay(200);
}
