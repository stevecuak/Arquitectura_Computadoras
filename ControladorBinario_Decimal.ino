const int A = A0;
const int B = A1;
const int C = A2;
const int D = A3;
const int pinG = 4;
const int pinF = 5;
const int pinA = 6;
const int pinB = 7;
const int pinE = 8;
const int pinD = 9;
const int pinC = 10;
const int pinC1 = 2;
const int pinB1 = 3;
const int pinZero = 11;
int SwitchMillares = 0;
int SwitchCentenas = 0;
int SwitchDecenas = 0;
int SwitchUnidades = 0;

void setup() {
  pinMode(A, INPUT);
  pinMode(B, INPUT);
  pinMode(C, INPUT);
  pinMode(D, INPUT);
  pinMode(pinA, OUTPUT);
  pinMode(pinB, OUTPUT);
  pinMode(pinC, OUTPUT);
  pinMode(pinD, OUTPUT);
  pinMode(pinE, OUTPUT);
  pinMode(pinF, OUTPUT);
  pinMode(pinG, OUTPUT);
  pinMode(pinB1, OUTPUT);
  pinMode(pinC1, OUTPUT);
  pinMode(pinZero, OUTPUT);
}
void loop() {
  SwitchMillares = digitalRead(A);
  SwitchCentenas = digitalRead(B);
  SwitchDecenas = digitalRead(C);
  SwitchUnidades = digitalRead(D);
  if (!SwitchMillares && !SwitchCentenas && !SwitchDecenas && !SwitchUnidades) {  //0
    digitalWrite(pinA, LOW);
    digitalWrite(pinB, LOW);
    digitalWrite(pinC, LOW);
    digitalWrite(pinD, LOW);
    digitalWrite(pinE, LOW);
    digitalWrite(pinF, LOW);
    digitalWrite(pinZero, LOW);
    digitalWrite(pinC1, LOW);
    digitalWrite(pinB1, LOW);
  }
  if (!SwitchMillares && !SwitchCentenas && !SwitchDecenas && SwitchUnidades) {  //1
    digitalWrite(pinB, LOW);
    digitalWrite(pinC, LOW);
    digitalWrite(pinZero, LOW);
    digitalWrite(pinC1, LOW);
    digitalWrite(pinB1, LOW);
  }
  if (!SwitchMillares && !SwitchCentenas && SwitchDecenas && !SwitchUnidades) {  //2
    digitalWrite(pinA, LOW);
    digitalWrite(pinB, LOW);
    digitalWrite(pinG, LOW);
    digitalWrite(pinD, LOW);
    digitalWrite(pinE, LOW);
    digitalWrite(pinZero, LOW);
    digitalWrite(pinC1, LOW);
    digitalWrite(pinB1, LOW);
  }
  if (!SwitchMillares && !SwitchCentenas && SwitchDecenas && SwitchUnidades) {  //3
    digitalWrite(pinA, LOW);
    digitalWrite(pinB, LOW);
    digitalWrite(pinC, LOW);
    digitalWrite(pinD, LOW);
    digitalWrite(pinG, LOW);
    digitalWrite(pinZero, LOW);
    digitalWrite(pinC1, LOW);
    digitalWrite(pinB1, LOW);
  }
  if (!SwitchMillares && SwitchCentenas && !SwitchDecenas && !SwitchUnidades) {  // 4
    digitalWrite(pinB, LOW);
    digitalWrite(pinC, LOW);
    digitalWrite(pinG, LOW);
    digitalWrite(pinF, LOW);
    digitalWrite(pinZero, LOW);
    digitalWrite(pinC1, LOW);
    digitalWrite(pinB1, LOW);
  }
  if (!SwitchMillares && SwitchCentenas && !SwitchDecenas && SwitchUnidades) {  //5
    digitalWrite(pinA, LOW);
    digitalWrite(pinG, LOW);
    digitalWrite(pinC, LOW);
    digitalWrite(pinD, LOW);
    digitalWrite(pinF, LOW);
    digitalWrite(pinZero, LOW);
    digitalWrite(pinC1, LOW);
    digitalWrite(pinB1, LOW);
  }
  if (!SwitchMillares && SwitchCentenas && SwitchDecenas && !SwitchUnidades) {  //6
    digitalWrite(pinA, LOW);
    digitalWrite(pinG, LOW);
    digitalWrite(pinC, LOW);
    digitalWrite(pinD, LOW);
    digitalWrite(pinE, LOW);
    digitalWrite(pinF, LOW);
    digitalWrite(pinZero, LOW);
    digitalWrite(pinC1, LOW);
    digitalWrite(pinB1, LOW);
  }
  if (!SwitchMillares && SwitchCentenas && SwitchDecenas && SwitchUnidades) {  //7
    digitalWrite(pinA, LOW);
    digitalWrite(pinB, LOW);
    digitalWrite(pinC, LOW);
    digitalWrite(pinZero, LOW);
    digitalWrite(pinC1, LOW);
    digitalWrite(pinB1, LOW);
  }
  if (SwitchMillares && !SwitchCentenas && !SwitchDecenas && !SwitchUnidades) {  //8
    digitalWrite(pinA, LOW);
    digitalWrite(pinB, LOW);
    digitalWrite(pinC, LOW);
    digitalWrite(pinD, LOW);
    digitalWrite(pinE, LOW);
    digitalWrite(pinF, LOW);
    digitalWrite(pinG, LOW);
    digitalWrite(pinZero, LOW);
    digitalWrite(pinC1, LOW);
    digitalWrite(pinB1, LOW);
  }
  if (SwitchMillares && !SwitchCentenas && !SwitchDecenas && SwitchUnidades) {  //9
    digitalWrite(pinA, LOW);
    digitalWrite(pinB, LOW);
    digitalWrite(pinC, LOW);
    digitalWrite(pinD, LOW);
    digitalWrite(pinG, LOW);
    digitalWrite(pinF, LOW);
    digitalWrite(pinZero, LOW);
    digitalWrite(pinC1, LOW);
    digitalWrite(pinB1, LOW);
  }
  if (SwitchMillares && !SwitchCentenas && SwitchDecenas && !SwitchUnidades) {  //1 0
    digitalWrite(pinA, LOW);
    digitalWrite(pinB, LOW);
    digitalWrite(pinC, LOW);
    digitalWrite(pinD, LOW);
    digitalWrite(pinE, LOW);
    digitalWrite(pinF, LOW);
    digitalWrite(pinC1, LOW);
    digitalWrite(pinB1, LOW);
  }
  if (SwitchMillares && !SwitchCentenas && SwitchDecenas && SwitchUnidades) {  //1 1
    digitalWrite(pinB, LOW);
    digitalWrite(pinC, LOW);
    digitalWrite(pinC1, LOW);
    digitalWrite(pinB1, LOW);
  }
  if (SwitchMillares && SwitchCentenas && !SwitchDecenas && !SwitchUnidades) {  //1 2
    digitalWrite(pinA, LOW);
    digitalWrite(pinB, LOW);
    digitalWrite(pinD, LOW);
    digitalWrite(pinE, LOW);
    digitalWrite(pinG, LOW);
    digitalWrite(pinC1, LOW);
    digitalWrite(pinB1, LOW);
  }
  if (SwitchMillares && SwitchCentenas && !SwitchDecenas && SwitchUnidades) {  //1 3
    digitalWrite(pinA, LOW);
    digitalWrite(pinB, LOW);
    digitalWrite(pinC, LOW);
    digitalWrite(pinD, LOW);
    digitalWrite(pinG, LOW);
    digitalWrite(pinC1, LOW);
    digitalWrite(pinB1, LOW);
  }
  if (SwitchMillares && SwitchCentenas && SwitchDecenas && !SwitchUnidades) {  //1 4
    digitalWrite(pinB, LOW);
    digitalWrite(pinC, LOW);
    digitalWrite(pinG, LOW);
    digitalWrite(pinF, LOW);
    digitalWrite(pinC1, LOW);
    digitalWrite(pinB1, LOW);
  }
  if (SwitchMillares && SwitchCentenas && SwitchDecenas && SwitchUnidades) {  //1 5
    digitalWrite(pinA, LOW);
    digitalWrite(pinC, LOW);
    digitalWrite(pinD, LOW);
    digitalWrite(pinF, LOW);
    digitalWrite(pinG, LOW);
    digitalWrite(pinC1, LOW);
    digitalWrite(pinB1, LOW);
  }
  digitalWrite(pinA, HIGH);
  digitalWrite(pinB, HIGH);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, HIGH);
  digitalWrite(pinE, HIGH);
  digitalWrite(pinF, HIGH);
  digitalWrite(pinG, HIGH);
  digitalWrite(pinB1, HIGH);
  digitalWrite(pinC1, HIGH);
  digitalWrite(pinZero, HIGH);
}
