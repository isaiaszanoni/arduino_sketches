// Filipe Flop - Projeto 4 - Semáforo
// Kit Maker Arduino - Iniciante 

int pedVerde = 9;
int pedVermelho = 8;
int carroVerde = 12;
int carroAmarelo = 11;
int carroVermelho = 10;

void setup(){
  pinMode(pedVerde, OUTPUT);
  pinMode(pedVermelho, OUTPUT);
  pinMode(carroVerde, OUTPUT);
  pinMode(carroAmarelo, OUTPUT);
  pinMode(carroVermelho, OUTPUT);

  // Posição inicial - Farol Queimado
  digitalWrite(carroVerde, LOW);
  digitalWrite(carroVerde, LOW);
  digitalWrite(pedVermelho, LOW);
  digitalWrite(pedVerde, LOW);
  digitalWrite(carroAmarelo, HIGH);
  delay(500);
  digitalWrite(carroAmarelo, LOW);
  delay(500);
  digitalWrite(carroAmarelo, HIGH);
  delay(500);
  digitalWrite(carroAmarelo, LOW);
  delay(500);
}

void loop(){
  // Verde para os carros
  digitalWrite(carroVermelho, LOW);
  digitalWrite(carroVerde, HIGH);
  digitalWrite(pedVermelho, HIGH);
  delay(2200);
  // Amarelo
  digitalWrite(carroVerde, LOW);
  digitalWrite(carroAmarelo, HIGH);
  digitalWrite(carroVermelho, LOW);
  digitalWrite(pedVermelho, HIGH);
  digitalWrite(pedVerde, LOW);
  delay(1200);
  
  //Vermelho para os carros
  digitalWrite(carroAmarelo, LOW);
  digitalWrite(carroVermelho, HIGH);
  digitalWrite(carroVerde, LOW);
  digitalWrite(pedVerde, HIGH);
  digitalWrite(pedVermelho, LOW);
  delay(1700);
// Pisca o vermelho dos pedestres
    digitalWrite(pedVerde, LOW);
  for(int x = 0; x<5; x++){
    digitalWrite(pedVermelho, HIGH);
    delay(250);
    digitalWrite(pedVermelho, LOW);
    delay(250);
  }
}
