# Exercício 03 - Semáforo 

O exercício 03 é um exercício que simula um semáforo, o exercício pede que façamos o semáforo utilizando a biblioteca [NilRTOS](https://github.com/greiman/NilRTOS-Arduino), como utilizei o Tinkercad não utilizei a biblioteca fiz um semáforo utilizando o que o Tinkercad disponibiliza. 

## Tinkercad

![](https://csg.tinkercad.com/things/eu3Qzl9gs2A/t725.png?rev=1618695695375000000&s=&v=1&type=circuits)

O link do exercício funcionando no [Tinkercad](https://www.tinkercad.com/things/eu3Qzl9gs2A).

Componentes utilizados: 

- Arduino
- 2 LED Vermelho
- 2 LED Verde
- LED Amarelo
- 5 Resistor de 10 kΩ


## Código
Código comentado do exercicio DIGITALREADSERIAL.

````ruby
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
````