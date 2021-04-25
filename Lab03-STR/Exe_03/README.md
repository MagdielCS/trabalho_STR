# Exercício 03 - Semáforo 

O exercício 03 é um exercício que demonstra semáforos, threads e como parar as threads, o exercício pede que utilizemos a biblioteca [NilRTOS](https://github.com/greiman/NilRTOS-Arduino), utilizamos o tinkercad para mostrar como faríamos o semáforo e utilizamos a biblioteca num arduino real. 

## Tinkercad

![](https://csg.tinkercad.com/things/eu3Qzl9gs2A/t725.png?rev=1618695695375000000&s=&v=1&type=circuits)

O link do exercício funcionando no [Tinkercad](https://www.tinkercad.com/things/eu3Qzl9gs2A).

Componentes utilizados: 

- Arduino
- 2 LED Vermelho
- 2 LED Verde
- LED Amarelo
- 5 Resistor de 10 kΩ


## Código
Código comentado do exercício SEMÁFOROS.

````ruby
/*
* Demosntração de thread, semaforos, and thread sleep.
*/
#include <NilRTOS.h>

const uint8_t LED_PIN = 13; //Carro Verde
const uint8_t LED_PIN2 = 12; //Carro Amarelo
const uint8_t LED_PIN3 = 11; //Carro Vermelho
const uint8_t LED_PIN4 = 10; //Pedestre Verde
const uint8_t LED_PIN5 = 9; //Pedestre Vermelho
// O semaforo é declarado com o valor inicial de zero.
SEMAPHORE_DECL(sem, 0);
//-----------------------------------------------------------------------------
/*
* Thread 1, abre o semaforo para carros e fecha o de pedestres aguarda 3 segundos 
* desliga o sinal verde e acende o amarelo
* quando ele é sinalizado pela thread 2.
*/
// Declara um stack with 128 bytes de forma global.
NIL_WORKING_AREA(waThread1, 128);
// Declara a função da thread 1.
NIL_THREAD(Thread1, arg) {
 while (TRUE) {

 // Espera o sinal da thread 2.
 nilSemWait(&sem);

 digitalWrite(LED_PIN, HIGH);
 digitalWrite(LED_PIN5, HIGH);
 delay (3000);
 digitalWrite(LED_PIN, LOW);
 digitalWrite(LED_PIN2, HIGH);
 delay (2000);
 }
}
//-----------------------------------------------------------------------------
/*
* Thread 2, desliga o sinal amarelo fecha o semaforo dos carros 
* liga o dos pedestres, sinaliza para a thread 1 executar sua função.
*/
// Declare a stack with 128 bytes beyond context switch and interrupt needs.
NIL_WORKING_AREA(waThread2, 128);
// Declarando a função para a thread 2.
NIL_THREAD(Thread2, arg) {
 pinMode(LED_PIN, OUTPUT);
 pinMode(LED_PIN2, OUTPUT);
 pinMode(LED_PIN3, OUTPUT);
 pinMode(LED_PIN4, OUTPUT);
 pinMode(LED_PIN5, OUTPUT);

 while (TRUE) {
  // Turn LED on.
 digitalWrite(LED_PIN5, LOW);
 digitalWrite(LED_PIN2, LOW);
 digitalWrite(LED_PIN3, HIGH);
 digitalWrite(LED_PIN4, HIGH);
 delay (3000);
 digitalWrite(LED_PIN3, LOW);
 digitalWrite(LED_PIN4, LOW);
 

 // Sleep for 100 millisegundos.
 nilThdSleepMilliseconds(100);

 // Sinaliza para thread 1 executar.
 nilSemSignal(&sem);

 }
}


//-----------------------------------------------------------------------------
/*
* Threads static table, one entry per thread. A prioridade da thread é 
* determinada pela sua posição na tabela as de maior prioridade sao declaradas antes.
*
* As threads iniciam com o argumento nulo. O nome da thread ser nulo
* Para poupar memória.
*/
NIL_THREADS_TABLE_BEGIN()
NIL_THREADS_TABLE_ENTRY("thread1", Thread1, NULL, waThread1, sizeof(waThread1))
NIL_THREADS_TABLE_ENTRY("thread2", Thread2, NULL, waThread2, sizeof(waThread2))
NIL_THREADS_TABLE_END()
//-----------------------------------------------------------------------------
void setup() {
 // Inicia o Nil RTOS.
 nilSysBegin();
}
//-----------------------------------------------------------------------------
// Loop é uma thread ociosa. The idle thread must not invoke any
// Ela nao pode invocar nada do kernel que mude o estado dela para não executavel.
void loop() {
 // Não Utilizada.
}
````

## Demonstração

Demonstração do código funcionando utilizando as threads em [vídeo](https://drive.google.com/file/d/1cb6HhL3fe78aggdcCpT3tlOTVpuzJPw8/view?usp=sharing)

[Voltar ao inicio](https://github.com/MagdielCS/trabalho_STR)