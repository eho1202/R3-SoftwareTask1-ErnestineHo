/* 
         _4_
       3|   |5
        |_2_|   
       6|   |8
        |_7_|.
              9   
      */

int num = 0;
int potPin = A0;
int potVal;
int dispVal;
int decoder_pin1=2,decoder_pin2=3,decoder_pin3=4;
int decoder_pin4=5,decoder_pin5=6,decoder_pin6=7;
int decoder_pin7=8,decoder_pin8=9, i;

// set pin 2 - 9 to output
void setup() {
  for (i=2;i<10;i++){
    pinMode(i,OUTPUT);
  }
}

// display 0
void a0(){
  digitalWrite(decoder_pin1,LOW);
  digitalWrite(decoder_pin2,LOW);
  digitalWrite(decoder_pin3,LOW);
  digitalWrite(decoder_pin4,LOW);
  digitalWrite(decoder_pin5,LOW);
  digitalWrite(decoder_pin6,LOW);
  digitalWrite(decoder_pin7,LOW);
  digitalWrite(decoder_pin8,LOW);
}

// display 1
void a1(){
  digitalWrite(decoder_pin1,HIGH);
  digitalWrite(decoder_pin2,LOW);
  digitalWrite(decoder_pin3,LOW);
  digitalWrite(decoder_pin4,LOW);
  digitalWrite(decoder_pin5,LOW);
  digitalWrite(decoder_pin6,LOW);
  digitalWrite(decoder_pin7,LOW);
  digitalWrite(decoder_pin8,LOW);
}

// display 2
void a2(){
  digitalWrite(decoder_pin1,LOW);
  digitalWrite(decoder_pin2,HIGH);
  digitalWrite(decoder_pin3,LOW);
  digitalWrite(decoder_pin4,LOW);
  digitalWrite(decoder_pin5,LOW);
  digitalWrite(decoder_pin6,LOW);
  digitalWrite(decoder_pin7,LOW);
  digitalWrite(decoder_pin8,LOW);
}

// display 3
void a3(){
  digitalWrite(decoder_pin1,HIGH);
  digitalWrite(decoder_pin2,HIGH);
  digitalWrite(decoder_pin3,LOW);
  digitalWrite(decoder_pin4,LOW);
  digitalWrite(decoder_pin5,LOW);
  digitalWrite(decoder_pin6,LOW);
  digitalWrite(decoder_pin7,LOW);
  digitalWrite(decoder_pin8,LOW);
}

// display 4
void a4(){
  digitalWrite(decoder_pin1,LOW);
  digitalWrite(decoder_pin2,LOW);
  digitalWrite(decoder_pin3,HIGH);
  digitalWrite(decoder_pin4,LOW);
  digitalWrite(decoder_pin5,LOW);
  digitalWrite(decoder_pin6,LOW);
  digitalWrite(decoder_pin7,LOW);
  digitalWrite(decoder_pin8,LOW);
}

// display 5
void a5(){
  digitalWrite(decoder_pin1,HIGH);
  digitalWrite(decoder_pin2,LOW);
  digitalWrite(decoder_pin3,HIGH);
  digitalWrite(decoder_pin4,LOW);
  digitalWrite(decoder_pin5,LOW);
  digitalWrite(decoder_pin6,LOW);
  digitalWrite(decoder_pin7,LOW);
  digitalWrite(decoder_pin8,LOW);
}

// display 6
void a6(){
  digitalWrite(decoder_pin1, LOW);
  digitalWrite(decoder_pin2,HIGH);
  digitalWrite(decoder_pin3,HIGH);
  digitalWrite(decoder_pin4,LOW);
  digitalWrite(decoder_pin5,LOW);
  digitalWrite(decoder_pin6,LOW);
  digitalWrite(decoder_pin7,LOW);
  digitalWrite(decoder_pin8,LOW);
}

// display 7
void a7(){
  digitalWrite(decoder_pin1,HIGH);
  digitalWrite(decoder_pin2,HIGH);
  digitalWrite(decoder_pin3,HIGH);
  digitalWrite(decoder_pin4,LOW);
  digitalWrite(decoder_pin5,LOW);
  digitalWrite(decoder_pin6,LOW);
  digitalWrite(decoder_pin7,LOW);
  digitalWrite(decoder_pin8,LOW);
}

// display 8
void a8(){
  digitalWrite(decoder_pin1,LOW);
  digitalWrite(decoder_pin2,LOW);
  digitalWrite(decoder_pin3,LOW);
  digitalWrite(decoder_pin4,HIGH);
  digitalWrite(decoder_pin5,LOW);
  digitalWrite(decoder_pin6,LOW);
  digitalWrite(decoder_pin7,LOW);
  digitalWrite(decoder_pin8,LOW);
}

// display 9
void a9(){
  digitalWrite(decoder_pin1,HIGH);
  digitalWrite(decoder_pin2,LOW);
  digitalWrite(decoder_pin3,LOW);
  digitalWrite(decoder_pin4,HIGH);
  digitalWrite(decoder_pin5,LOW);
  digitalWrite(decoder_pin6,LOW);
  digitalWrite(decoder_pin7,LOW);
  digitalWrite(decoder_pin8,LOW);
}

// display 10
void a10(){
  digitalWrite(decoder_pin1,LOW);
  digitalWrite(decoder_pin2,LOW);
  digitalWrite(decoder_pin3,LOW);
  digitalWrite(decoder_pin4,LOW);
  digitalWrite(decoder_pin5,HIGH);
  digitalWrite(decoder_pin6,LOW);
  digitalWrite(decoder_pin7,LOW);
  digitalWrite(decoder_pin8,LOW);
}

// if poteniometer num = certain num, call display num function
void loop(){
  if(num == 0){
    a0();
  }else if(num == 1){
    a1();
  }else if(num == 2){
    a2();
  }else if(num == 3){
    a3();
  }else if(num == 4){
    a4();
  }else if(num == 5){
    a5();
  }else if(num == 6){
    a6();
  }else if(num == 7){
    a7();
  }else if(num == 8){
    a8();
  }else if(num == 9){
    a9();
  }else if(num == 10){
    a10();
  }else{
    num = 0;
  }
  
  potVal = analogRead(potPin);
  num = map(potVal, 0, 1023, 0, 10);
  Serial.println(potVal);
  delay(20);
}
