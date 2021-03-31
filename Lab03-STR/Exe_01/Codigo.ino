void setup()
{
  pinMode(LED_BUILTIN, OUTPUT); //Inicia o pin LED_BUILTIN como saida
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH); // Acende o LED 
  delay(1000); // Aguarda 1 segundo
  digitalWrite(LED_BUILTIN, LOW); // Desliga o LED
  delay(1000); // Aguarda 1 segundo
}