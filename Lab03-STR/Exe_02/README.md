# Exercício 02 - DIGITALREADSERIAL 

O exercício 02 é um exercício para monitorar o estado de um switch, estabelecendo uma comunicação serial pela porta USB.

## Tinkercad

![](https://csg.tinkercad.com/things/eGfOHRXLZ1i/t725.png?rev=1618692661656000000&s=&v=1&type=circuits)

O link do exercício funcionando no [Tinkercad](https://www.tinkercad.com/things/eGfOHRXLZ1i).

Componentes utilizados: 

- Arduino
- Botão
- Resistor de 10 kΩ

## Código
Código comentado do exercicio DIGITALREADSERIAL.

````ruby
int pushButton = 2; //Atribuindo o um nome ao pin 2 do arduino
void setup()
{
  Serial.begin(9600); //inicializa a comunicação serial a 9600 bits por segundo
  pinMode(pushButton, INPUT); //Faz o 2 pin uma entrada 
}

void loop()
{
  int buttonState = digitalRead(pushButton); //Lê o estado do botao
  Serial.println(buttonState); //Printa no console o estado do botao 
  delay(1); //Dá um delay entre as leituras do loop
}
````

[Voltar ao inicio](https://github.com/MagdielCS/trabalho_STR)