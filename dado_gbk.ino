// Dado eletrônico com placa da GBK Robotics
// Sketch by Gedeane Kenshima 16/07/2016

int led[]={7,8,9,10,11,12,13}; //array dos leds
const int botao = 6; // botao

int state = 0; // estado inicial do botao

void setup() {
  pinMode(botao, INPUT); // declarando botao como entrada
  
  for (int i=0;i<7;i++){ //laço para declarar array como saida
  pinMode(led[i],OUTPUT);
  }
}

void loop() {
  state = digitalRead(botao); // leitura estado do botao
  if (state == HIGH) { // se botão foi pressionado
    int dado = random(1,7); // sorteio entre 1 e 6
    switch(dado){ //resultado do sorteio
      case 1: // se for 1
      for (int i=0;i<7;i++){ // laço para apagar os leds
      digitalWrite(led[i],LOW);
      }
      digitalWrite(led[3],HIGH); // acende led do meio
      break;

      case 2: // se for 2
      for (int i=0;i<7;i++){ // laço para apagar os leds
      digitalWrite(led[i],LOW);
      }
      digitalWrite(led[0],HIGH); // acende dois leds
      digitalWrite(led[4],HIGH);
      break;

      case 3:
      for (int i=0;i<7;i++){
      digitalWrite(led[i],LOW); // laço para apagar os leds
      }
      digitalWrite(led[0],HIGH); // acende 3 leds
      digitalWrite(led[3],HIGH);
      digitalWrite(led[4],HIGH);
      break;

      case 4:
      for (int i=0;i<7;i++){
      digitalWrite(led[i],LOW); // laço para apagar os leds
      }
      digitalWrite(led[0],HIGH); // acende 4 leds
      digitalWrite(led[2],HIGH);
      digitalWrite(led[4],HIGH);
      digitalWrite(led[6],HIGH);
      break;

      case 5:
      for (int i=0;i<7;i++){
      digitalWrite(led[i],LOW); // laço para apagar os leds
      }
      digitalWrite(led[0],HIGH); // acende 5 leds
      digitalWrite(led[3],HIGH);
      digitalWrite(led[4],HIGH);
      digitalWrite(led[6],HIGH);
      break;

      case 6:
      for (int i=0;i<7;i++){
      digitalWrite(led[i],LOW); // laço para apagar os leds
      }
      digitalWrite(led[0],HIGH); // acende 6 leds
      digitalWrite(led[1],HIGH);
      digitalWrite(led[2],HIGH);
      digitalWrite(led[4],HIGH);
      digitalWrite(led[5],HIGH);
      digitalWrite(led[6],HIGH);
      break;

      }
   } 
 }
  
