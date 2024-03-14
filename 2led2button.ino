int led1 = 13; //constante led refere-se ao pino digital 8
int botao1 = 2; //constante Botão refere-se ao pino digital 2.

int led2 = 12; //constante led refere-se ao pino digital 8
int botao2 = 1; //constante Botão refere-se ao pino digital 2.
int estadoBotao = 0;

void setup() {
pinMode(led1,OUTPUT); //definido pino digital 8 como de saída.
pinMode(botao1,INPUT); //definido pino digital 2 como de entrada.
pinMode(led2,OUTPUT); //definido pino digital 8 como de saída.
pinMode(botao2,INPUT); //definido pino digital 2 como de entrada.


}

void loop() {
  estadoBotao = digitalRead(botao1);

    if (estadoBotao == LOW){
    digitalWrite(led1,HIGH); //Botão pressionado, acende o led.
    } else {
    digitalWrite(led1,LOW); //Botão não pressionado, apaga o led.
    }
  
   estadoBotao = digitalRead(botao2);

    if (estadoBotao == LOW){
    digitalWrite(led2,HIGH); //Botão pressionado, acende o led.
    } else {
    digitalWrite(led2,LOW); //Botão não pressionado, apaga o led.
    }
  
}
