# Exercício - SENSORES

Esse exercício tem duas partes a primeira parte pede para utilizar um fotorresistor para fazer com que um buzzer dispare quando a luminosidade baixar de um determinado valor. Utilizamos o valor de 900

## Tinkercad

![](https://csg.tinkercad.com/things/hTzZzHgRHSl/t725.png?rev=1619388617412000000&s=&v=1&type=circuits)

O link do exercício funcionando no [Tinkercad](https://www.tinkercad.com/things/hTzZzHgRHSl-sensores-parte-1).

Componentes utilizados: 

- Arduino
- Resistor de 390Ω
- Resistor de 10 kΩ
- Fotorresistor
- Buzzer

## Código
Código comentado do exercício SENSORES.

````ruby
const int buzzerPin = 8; // Campainha
const int ldrPin = A0; // Fotoresistor

void setup () {
  // Define o Buzzer como saída
  pinMode(buzzerPin, OUTPUT);
  // Define o Fotoresistor como entrada
  pinMode(ldrPin, INPUT);
}

void loop() {
  // Lê o valor que o foto resistor recebe e armazena
  int ldrStatus = analogRead(ldrPin);
  
  // Se o valor for menor igual a 900
  if (ldrStatus <= 900) {
    // Dispara o alarme
    tone(buzzerPin, 100); 
    
    // Aguarda meio segundo
    delay(500); 
	
    // Para o alarme
    noTone(buzzerPin); 
    
    // Aguarda meio segundo
    delay(500);      
  }
  else {
    // Nao dispara o alarme
    noTone(buzzerPin);
  }
}

````

[Parte 02](https://github.com/MagdielCS/trabalho_STR/tree/main/Lab04-STR/Parte_2)

[Voltar ao inicio](https://github.com/MagdielCS/trabalho_STR)
