#include<Servo.h>
Servo motorzin;

void setup()
{
  //Anexando o sinal da porta 11
  motorzin.attach(11);
}

void loop()
{
  //Dessa forma, o risco de danificar o interior do motor é maior por conta
  //da força que o motor realiza quando sai de 90 graus ate 0 de forma abrupta
  motorzin.write(90);
  delay(1000);
  motorzin.write(0);
  delay(1000);
}
