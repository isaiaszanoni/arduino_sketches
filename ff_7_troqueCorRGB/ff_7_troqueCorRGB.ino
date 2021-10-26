// Projeto 6 - Luzes Coloridas

int led_R = 7;
int led_G = 6;
int led_B = 5;
int pot = A0;

int valorPot;

void setup(){
  pinMode(led_R, OUTPUT);
  pinMode(led_G, OUTPUT);
  pinMode(led_B, OUTPUT);
//  apagaLed();
}

void loop(){
  digitalWrite(led_R, INPUT);
  delay(200);
  digitalWrite(led_R, OUTPUT);
  delay(50);
  digitalWrite(led_G, INPUT);
  delay(200);
  digitalWrite(led_G, OUTPUT);
  delay(50);
  digitalWrite(led_B, INPUT);
  delay(500);
  digitalWrite(led_B, OUTPUT);
  delay(50);
}
/* -----------------------------------
void loop(){
  valorPot = analogRead(pot);
  if(valorPot >= 0 && valorPot <=256){
    apagaLed();
  }
  if(valorPot > 256 && valorPot <= 512){
    acendeVermelho();
  }
  if(valorPot > 512 && valorPot <= 768){
    acendeVermelho();
  }
  if(valorPot > 768 && valorPot <= 1023){
    acendeAzul();
  }
}
--------------------------------- */
/*
void acendeVermelho()
{
  digitalWrite(led_R, HIGH);
  digitalWrite(led_G, LOW);
  digitalWrite(led_B, LOW);
}

void acendeVerde()
{
  digitalWrite(led_R, LOW);
  digitalWrite(led_G, HIGH);
  digitalWrite(led_B, LOW);
}

void acendeAzul()
{
  digitalWrite(led_R, LOW);
  digitalWrite(led_G, HIGH);
  digitalWrite(led_B, LOW);
}

void apagaLed()
{
  digitalWrite(led_R, LOW);
  digitalWrite(led_G, LOW);
  digitalWrite(led_B, LOW);
}
*/
