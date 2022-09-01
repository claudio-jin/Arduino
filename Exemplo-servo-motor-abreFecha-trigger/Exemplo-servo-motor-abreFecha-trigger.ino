#include<Servo.h>
Servo motorzin;

//trigger tem que ser porta pwd
#define trigger 3
#define echo 7

void setup()
{
  //Anexando o sinal da porta 11
  motorzin.attach(11);

  pinMode(trigger, OUTPUT);
  pinMode(echo, INPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(trigger, HIGH);
  digitalWrite(trigger, LOW);
  float distancia = 0.01715*pulseIn(echo, HIGH);
  Serial.print(distancia);
  Serial.println(" cm");
  
  if (distancia < 100) {
    motorzin.write(90);
    delay(1000);
  } else {
    motorzin.write(0);
    delay(1000);
  }
}
