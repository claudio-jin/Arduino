#define led 2;
#define ldr A0;
void setup(){
  pinMode(portaled, OUTPUT);
  Serial.begin(9600);
}
void loop(){
  int estado = analogRead(ldr);
  if (estado>500){
    digitalWrite(led, HIGH);
    Serial.println(ldr);
  }
  else{
    digitalWrite(led, LOW);
    Serial.println(ldr);
  }
}

//Exemplo2
//void setup()
//{
//  Serial.begin(9600);
//  pinMode(7, OUTPUT);
//}
//
//void loop()
//{
//  int a = analogRead(A0);
//  Serial.println(a);
//  delay(100);
//  
//  if(a > 80) {
//    digitalWrite(7, HIGH);
//  }else {
//    digitalWrite(7, LOW);
//  }
//}
