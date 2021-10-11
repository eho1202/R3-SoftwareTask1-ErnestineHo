/* 
         _4_
       3|   |5
        |_2_|   
       6|   |8
        |_7_|.
              9   
      */

int num, count;
int potPin = A0; // potentiometer input pin 
int potVal;
int dispVal;
const int A=2;
const int B=3;
const int C=4;
const int D=5;
const int E=6;
const int F=7;
const int G=8;
const int H=9;

// set pin 2 - 9 to output
void setup() {
  pinMode(potPin, INPUT);
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(H, OUTPUT);
}

void dispTens(int tens){
  if (tens == 0) {
    digitalWrite(A, 0);
    digitalWrite(B, 0);
    digitalWrite(C, 0);
    digitalWrite(D, 0);
  } else if (tens == 1) {
    digitalWrite(A, 1);
    digitalWrite(B, 0);
    digitalWrite(C, 0);
    digitalWrite(D, 0);
  } else if (tens == 2) {
    digitalWrite(A, 0);
    digitalWrite(B, 1);
    digitalWrite(C, 0);
    digitalWrite(D, 0);
  } else if (tens == 3) {
    digitalWrite(A, 1);
    digitalWrite(B, 1);
    digitalWrite(C, 0);
    digitalWrite(D, 0);
  } else if (tens == 4) {
    digitalWrite(A, 0);
    digitalWrite(B, 0);
    digitalWrite(C, 1);
    digitalWrite(D, 0);
  } else if (tens == 5) {
    digitalWrite(A, 1);
    digitalWrite(B, 0);
    digitalWrite(C, 1);
    digitalWrite(D, 0);
  } else if (tens == 6) {
    digitalWrite(A, 0);
    digitalWrite(B, 1);
    digitalWrite(C, 1);
    digitalWrite(D, 0);
  } else if (tens == 7) {
    digitalWrite(A, 1);
    digitalWrite(B, 1);
    digitalWrite(C, 1);
    digitalWrite(D, 0);
  } else if (tens == 8) {
    digitalWrite(A, 0);
    digitalWrite(B, 0);
    digitalWrite(C, 0);
    digitalWrite(D, 1);
  } else if (tens == 9) {
    digitalWrite(A, 1);
    digitalWrite(B, 0);
    digitalWrite(C, 0);
    digitalWrite(D, 1);
  }
}

void dispOnes(int ones){
  if (ones == 0) {
    digitalWrite(E, 0);
    digitalWrite(F, 0);
    digitalWrite(G, 0);
    digitalWrite(H, 0);
  } else if (ones == 1) {
    digitalWrite(E, 1);
    digitalWrite(F, 0);
    digitalWrite(G, 0);
    digitalWrite(H, 0);
  } else if (ones == 2) {
    digitalWrite(E, 0);
    digitalWrite(F, 1);
    digitalWrite(G, 0);
    digitalWrite(H, 0);
  } else if (ones == 3) {
    digitalWrite(E, 1);
    digitalWrite(F, 1);
    digitalWrite(G, 0);
    digitalWrite(H, 0);
  } else if (ones == 4) {
    digitalWrite(E, 0);
    digitalWrite(F, 0);
    digitalWrite(G, 1);
    digitalWrite(H, 0);
  } else if (ones == 5) {
    digitalWrite(E, 1);
    digitalWrite(F, 0);
    digitalWrite(G, 1);
    digitalWrite(H, 0);
  } else if (ones == 6) {
    digitalWrite(E, 0);
    digitalWrite(F, 1);
    digitalWrite(G, 1);
    digitalWrite(H, 0);
  } else if (ones == 7) {
    digitalWrite(E, 1);
    digitalWrite(F, 1);
    digitalWrite(G, 1);
    digitalWrite(H, 0);
  } else if (ones == 8) {
    digitalWrite(E, 0);
    digitalWrite(F, 0);
    digitalWrite(G, 0);
    digitalWrite(H, 1);
  } else if (ones == 9) {
    digitalWrite(E, 1);
    digitalWrite(F, 0);
    digitalWrite(G, 0);
    digitalWrite(H, 1);
  }
  
}

// if poteniometer num = certain num, call display num function
void loop(){
  int tens, ones;
  
  potVal = analogRead(potPin);
  num = map(potVal, 0, 1023, 0, 99);
  tens = num / 10;
  ones = num % 10;
  dispTens(tens);
  dispOnes(ones);
  
  Serial.println(potVal);
  delay(100);
}
