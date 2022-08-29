void setup()
{
  Serial.begin(9600);  //Inicia o serial para ler 9600 bits por segundo
  Serial.print("ola");  //
  Serial.println("println pula linha");
}

void loop()
{
  int a = analogRead(A2); //Como a porta analogica transmite de 0 a 1023, entao definimos o tipo int
  float t = 125.0*( float(a) - 104.0) / 254.0;
  Serial.println(t);
  delay(100);
}
