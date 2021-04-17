void setup()
{
  //definindo os pins como saidas 
  pinMode(2, OUTPUT); //Semáforo pedestre vermelho
  pinMode(3, OUTPUT); //Semáforo pedestre verde 
  pinMode(9, OUTPUT); //Semáforo vermelho
  pinMode(10, OUTPUT); //Semáforo amarelo
  pinMode(11, OUTPUT); //Semáforo verde
}

void loop()
{
  //semáforo aberto 
  digitalWrite(2, HIGH);//semáforo pedestre fechado
  digitalWrite(11, HIGH);//semáforo aberto
  delay(2000); //aguarda 2 segundos 
  digitalWrite(11, LOW); //desliga luz semáforo
  
  //Luz de atenção
  digitalWrite(10, HIGH);//acende a luz de atenção 
  delay(1000);//aguarda 1 segundo
  digitalWrite(2, LOW); //desliga luz pedestre
  digitalWrite(10, LOW); //desliga luz de atenção
  
  //semáforo fechado
  digitalWrite(3, HIGH); //semaforo fechado
  digitalWrite(9, HIGH); //semaforo pedestre aberto
  delay(2000); //aguarda 2 segundos
  digitalWrite(3, LOW); //desliga luz pedestre
  digitalWrite(9, LOW); //desliga luz semáforo
  
}