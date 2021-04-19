# Exercício - SENSORES

Esse exercício tem duas partes a primeira parte pede para utilizar um fotorresistor para fazer com que um buzzer dispare quando a luminosidade baixar de um determinado valor. Utilizamos o valor de 900

## Tinkercad

![](https://csg.tinkercad.com/things/a4GCjRQXt7r/t725.png?rev=1618769523951000000&s=&v=1&type=circuits)

O link do exercício funcionando no [Tinkercad](https://www.tinkercad.com/things/lB3pCRD2vwk-sensoresparte-01).

Componentes utilizados: 

- Arduino
- Resistor de 10 kΩ
- Fotorresistor
- Buzzer

## Código
Código comentado do exercício SENSORES.

````ruby
//Nomeando os pins
const int buzzerPin = 8; //Campainha
const int ldrPin = A0; //Fotoresistor

void setup () {
  //Definindo os pins
  pinMode(buzzerPin, OUTPUT); //Definido como saída
  pinMode(ldrPin, INPUT); // Definido como entrada
}

void loop() {

  int ldrStatus = analogRead(ldrPin);  //lê o valor que o foto resistor recebe e armazena
	
  // se o valor for menor igual a 900
  if (ldrStatus <= 900) {

    tone(buzzerPin, 100); //Dispara o alarme
    delay(500); //Aguarda meio segundo

    noTone(buzzerPin); //Para o alarme
    delay(500); //Aguarda meio segundo

     
  }
  else {
    noTone(buzzerPin);//Nao dispara o alarme

  }
}
````

[Parte 02](https://github.com/MagdielCS/trabalho_STR/tree/main/Lab04-STR/Parte_2)

[Voltar ao inicio](https://github.com/MagdielCS/trabalho_STR)
