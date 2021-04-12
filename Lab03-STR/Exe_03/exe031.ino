void setup()
{
  //definindo as saidas 
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  //semaforo aberto 
  digitalWrite(2, HIGH);//semaforo aberto
  digitalWrite(11, HIGH);//semaforo pedestre fechado
  delay(2000); //aguarda 2 segundos
  digitalWrite(2, LOW);
  digitalWrite(11, LOW);
  
  //acende a luz amarela 
  digitalWrite(10, HIGH);
  delay(1000);//aguarda 1 segundo
  digitalWrite(10, LOW);
  
  //semaforo fechado
  digitalWrite(3, HIGH);//semaforo fechado
  digitalWrite(9, HIGH);//semaforo pedestre aberto
  delay(2000); //aguarda 2 segundos
  digitalWrite(3, LOW);
  digitalWrite(9, LOW);
  
}