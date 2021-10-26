// 2021-05-20
// Vulmeter
// Inspirado no projeto do canal Brincando Com Ideias

// Definindo os leds do vul meter
const int led2 = 2;
const int led3 = 3;
const int led4 = 4;
const int led5 = 5;
const int led6 = 6;
const int led7 = 7;
const int led8 = 8;
const int led9 = 9;
const int led10 = 10;

// Definindo a leitura do microfone

void setup(){
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  pinMode(led9, OUTPUT);
  pinMode(led10, OUTPUT);
  }

void loop (){
  int valorLido = analogRead(A0);
 
  digitalWrite(led2, valorLido > 80);
  digitalWrite(led3, valorLido > 82);
  digitalWrite(led4, valorLido > 86);
  digitalWrite(led5, valorLido > 90);
  digitalWrite(led6, valorLido > 94);
  digitalWrite(led7, valorLido > 96);
  digitalWrite(led8, valorLido > 98);
  digitalWrite(led9, valorLido > 100);
  digitalWrite(led10, valorLido > 101);
  }

void teste_leds(){
  digitalWrite(led2, HIGH);
  delay(250);
  digitalWrite(led2, LOW);
  delay(100);
  digitalWrite(led3, HIGH);
  delay(250);
  digitalWrite(led3, LOW);
  delay(100);
  digitalWrite(led4, HIGH);
  delay(250);
  digitalWrite(led4, LOW);
  delay(100);
  digitalWrite(led5, HIGH);
  delay(250);
  digitalWrite(led5, LOW);
  delay(100);
  digitalWrite(led6, HIGH);
  delay(250);
  digitalWrite(led6, LOW);
  delay(100);
  digitalWrite(led7, HIGH);
  delay(250);
  digitalWrite(led7, LOW);
  delay(100);
  digitalWrite(led8, HIGH);
  delay(250);
  digitalWrite(led8, LOW);
  delay(100);
  digitalWrite(led9, HIGH);
  delay(250);
  digitalWrite(led9, LOW);
  delay(100);
  digitalWrite(led10, HIGH);
  delay(250);
  digitalWrite(led10, LOW);
  delay(100);
  }

void teste_grupos(){
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);
  delay(250);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  delay(150);

  digitalWrite(led6, HIGH);
  digitalWrite(led7, HIGH);
  digitalWrite(led8, HIGH);
  delay(250);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  delay(150);

  digitalWrite(led9, HIGH);
  digitalWrite(led10, HIGH);
  delay(250);
  digitalWrite(led9, LOW);
  digitalWrite(led10, LOW);
  delay(150);
  };




  
