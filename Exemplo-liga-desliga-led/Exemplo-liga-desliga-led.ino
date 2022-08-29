#define vermelho 7

//sensor de movimento -> pir
void setup() {
  pinMode(vermelho, OUTPUT);
}

void loop() {
  digitalWrite(vermelho, HIGH);
  delay(1000);
  digitalWrite(vermelho, LOW);
  delay(1000);
}
