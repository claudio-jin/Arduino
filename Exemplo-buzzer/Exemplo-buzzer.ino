#define buzzer 3

void setup() {
  pinMode(buzzer, OUTPUT);
}

void loop() {
      //porta frequencia tempo
  tone(buzzer, 264, 200);
  delay(400);
}
