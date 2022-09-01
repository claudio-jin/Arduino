#include<Servo.h>
Servo motorzin;

void setup()
{
  //Anexando o sinal da porta 11
  motorzin.attach(11);
}

void loop()
{
  //utilizando o for, as engrenagens sao menos danificadas quando aplicamos
  //um novo comando para mudar o angulo
  //angulo: vai de 0 a 180;
  for(int angulo = 0; angulo < 180; angulo++) {
    motorzin.write(angulo);
    delay(15);
  }

  for(int angulo = 180; angulo < 0; angulo--){
    motorzin.write(angulo);
    delay(15);
  }
}
