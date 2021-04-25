# Exercício - SENSORES

A segunda parte pede para adicionar um LED no projeto e pede uma saída informando o valor da leitura do fotorresistor no console

## Tinkercad

![](https://csg.tinkercad.com/things/47HnBBpB26J/t725.png?rev=1618770255111000000&s=&v=1&type=circuits)

O link do exercício funcionando no [Tinkercad](https://www.tinkercad.com/things/d8GCXuL0WGL-sensores-parte-2).

Componentes utilizados: 

- Arduino
- Resistor de 390 Ω
- Resistor de 10 kΩ
- Fotorresistor
- Buzzer
- LED
- Resistor de 330 kΩ

## Código
Código comentado do exercício SENSORES.

````ruby
const int buzzerPin = 8; // Campainha
const int ldrPin = A0; // Fotoresistor
const int ledPin = 13; // Led

void setup () {
  // Define o Buzzer como saída
  pinMode(buzzerPin, OUTPUT);
  
  // Define o Fotoresistor como entrada
  pinMode(ldrPin, INPUT);
  
  // Define o Led como saída
  pinMode(ledPin, OUTPUT);
  
  // Inicializa a comunicação serial a 9600 bps
  Serial.begin(9600);
}

void loop() {
  // Lê o valor que o foto resistor recebe e armazena
  int ldrStatus = analogRead(ldrPin);
  
  
  // Mostra no monitor o valor do Fotoresistor
  Serial.print("Valor da Luminosidade: ");
  Serial.print(ldrStatus);
  Serial.print("\n");

  // Se o valor for menor igual a 900
  if (ldrStatus <= 900) {
    // Dispara o alarme
    tone(buzzerPin, 100);
    
    // Liga o Led
  	digitalWrite(ledPin, HIGH);
    
    // Aguarda meio segundo
    delay(500); 
	
    // Para o alarme
    noTone(buzzerPin); 
    
    // Desliga o Led
    digitalWrite(ledPin, LOW);
    
    // Aguarda meio segundo
    delay(500);      
  }
  else {
    // Nao dispara o alarme
    noTone(buzzerPin);
    
    // Desliga o Led
    digitalWrite(ledPin, LOW);
  }
}

````
[Parte 01](https://github.com/MagdielCS/trabalho_STR/tree/main/Lab04-STR/Parte_1)

[Voltar ao inicio](https://github.com/MagdielCS/trabalho_STR)
