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
