# Exercício 01 - BLINK

O exercício 01 é um exercício simples para obter uma resposta física do arduino aonde a luz irá piscar quando solicitada

## Tinkercad

![](https://csg.tinkercad.com/things/6Xe5qFIot3z/t725.png?rev=1618689639508000000&s=&v=1&type=circuits)

O link do exercício funcionando no [Tinkercad](https://www.tinkercad.com/things/6Xe5qFIot3z).

Componentes utilizados: 

- Arduino
- LED
- Resistor de 220 ohm


## Código
Código comentado do exercicio Blink.

````ruby
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT); //Inicia o pin LED_BUILTIN que é o pino 13 como saida
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH); // Acende o LED 
  delay(1000); // Aguarda 1 segundo
  digitalWrite(LED_BUILTIN, LOW); // Desliga o LED
  delay(1000); // Aguarda 1 segundo
}
````