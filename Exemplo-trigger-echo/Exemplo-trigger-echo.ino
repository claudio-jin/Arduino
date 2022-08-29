#define trigger 11
#define echo 10

void setup() {
  pinMode(trigger, OUTPUT);
  pinMode(echo, INPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trigger, HIGH);
  digitalWrite(trigger, LOW);
  float distancia = 0.01715*pulseIn(echo, HIGH);
  Serial.print(distancia);
  Serial.println(" cm");
}
