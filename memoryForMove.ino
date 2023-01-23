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

void setup(){
pinMode(in1,OUTPUT);
pinMode(in2, OUTPUT);
pinMode(in3, OUTPUT);
pinMode(in4,OUTPUT);
  pinMode(enA,OUTPUT);
  pinMode(enB,OUTPUT);
  char komutlar[] = {'f','b','r','l'};
 

}

void loop(){
char komutlar[] = {'f','b','r','l'};

  
delay(2000);

  for (int i = 0; i < 4; i++) {
    if (komutlar[i] == 'f'){
  f();
    };
      if( komutlar[i] == 'b'){
  b();
    };
      if (komutlar[i] == 'r'){
  r();
    };
      if (komutlar[i] == 'l'){
  l();
    };
  }
}



void f (){
  analogWrite(enA,100);
  analogWrite(enB,100);
digitalWrite(in3,HIGH);
digitalWrite(in4,LOW);
digitalWrite(in1, HIGH);
digitalWrite(in2,LOW);
delay(500);
}

void b (){
  analogWrite(enA,100);
  analogWrite(enB,100);
digitalWrite(in3,LOW);
digitalWrite(in4,HIGH);
digitalWrite(in1, LOW);
digitalWrite(in2,HIGH);
delay(500);

}
void r (){
  analogWrite(enA,100);
  analogWrite(enB,100);
digitalWrite(in3,LOW);
digitalWrite(in4,LOW);
digitalWrite(in1, HIGH);
digitalWrite(in2,LOW);
delay(500);
}

void l (){
  analogWrite(enA,100);
  analogWrite(enB,100);
digitalWrite(in3,HIGH);
digitalWrite(in4,LOW);
digitalWrite(in1, LOW);
digitalWrite(in2,LOW);
delay(500);
}
