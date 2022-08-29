#define trigger 11
#define echo 10
#define buzzer 3

void setup() {
  pinMode(trigger, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
 
}

void loop() {
  digitalWrite(trigger, HIGH);
  digitalWrite(trigger, LOW);
  float distancia = 0.01715*pulseIn(echo, HIGH);
  Serial.print(distancia);
  Serial.println(" cm");
  if (distancia < 20) {
    tone(buzzer, 264, 400);
    delay(400);
  } else if (distancia < 15) {
    tone(buzzer, 297, 300);
    delay(400);
  }else if (distancia < 10) {
    tone(buzzer, 264, 200);
    delay(400);
  } else if((distancia < 5) {
    tone(buzzer, 264, 100);
    delay(400);
  }
}
