//Nomeando os pins
const int ledPin = 13; //LED
const int buzzerPin = 8; //Campainha
const int ldrPin = A0; //Fotoresistor

void setup () {
  //Iniciando a comuni9cação serial a 9600 bits por segundo
  Serial.begin(9600);
  //Definindo os pins
  pinMode(ledPin, OUTPUT); //Definido como saída
  pinMode(buzzerPin, OUTPUT); //Definido como saída
  pinMode(ldrPin, INPUT); // Definido como entrada
}

void loop() {

  int ldrStatus = analogRead(ldrPin);  //lê o valor que o foto resistor recebe e armazena
	
  // se o valor for menor igual a 900
  if (ldrStatus <= 900) {

    tone(buzzerPin, 100); //Dispara o alarme
    digitalWrite(ledPin, HIGH); //Acende o LED
    delay(500); //Aguarda meio segundo

    noTone(buzzerPin); //Para o alarme
    digitalWrite(ledPin, LOW); //Apaga o LED
    delay(500); //Aguarda meio segundo

    Serial.print("Valor do LDR: ");
    Serial.println(ldrStatus); //Printa no console o valor do foto resistor  
  }
  else {
    noTone(buzzerPin); //Nao dispara o alarme
    digitalWrite(ledPin, LOW); //Nao acende o LED
    delay (500); // Agaurda meio segundo
    
    Serial.print("Valor do LDR: ");
    Serial.println(ldrStatus); //Printa no console o valor do foto resistor  

  }
}
