#define vermelho 7
#define pir 6

//sensor de movimento -> pir
void setup() {
  pinMode(vermelho, OUTPUT);
  pinMode(pir, INPUT);
  
}

void loop() {
  if(digitalRead(pir) == HIGH) {
    digitalWrite(vermelho, HIGH);
  } else {
    digitalWrite(vermelho, LOW);
  }
}
