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