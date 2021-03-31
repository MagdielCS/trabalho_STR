int pushButton = 2;

void setup()
{
  Serial.begin(9600);
  pinMode(pushButton, INPUT);
}

void loop()
{
  int buttonState = digitalRead(pushButton); //Lê o botao para saber se ele esta apertado
  Serial.println(buttonState); //printa na tela o estado do botao
  delay(1000); //Aguarda 1 segundo para verificar o estado do botao
}