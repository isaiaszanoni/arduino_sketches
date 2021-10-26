// Projeto 5 - Interruptor de Luz

int botao = 7;
int led = 13;
bool estadoLed = 0;

void setup() {
pinMode(botao, INPUT_PULLUP);
pinMode(led, OUTPUT);
}

void loop() {
  if(digitalRead(botao) == LOW)
  {
    estadoLed = !estadoLed;
    digitalWrite(led, estadoLed);
    while(digitalRead(botao) == LOW);
    delay(100);
  }
}






/*
  level = 0;
  if(botao == HIGH){
    level = level + 1;
    digitalWrite(led, HIGH);
    delay(500);
    digitalWrite(led, LOW);
    delay(500);
  }
  if(botao == LOW){
     level = level;  
    }
  if(botao == HIGH){
    level = level + 1;
    digitalWrite(led, HIGH);
    delay(250);
    digitalWrite(led, LOW);
    delay(250);
  }
  if(botao == LOW){
    level = 0;
  }
}
*/
