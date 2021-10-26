/* Contando quantas vezes apertei o botao
 * autor: Isaías Rodrigues
 *  
 * A cada vez que o botao for pressionado,  
 * será incrementado um numero no Serial Monitor.
 */

 const int buttonPin = 7;

 int button = LOW;
 int count = 0;

 void setup(){
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
 }

 void loop(){
  button = digitalRead(buttonPin);

  if(button == HIGH){
    delay(500);
    count = count + 1;
    Serial.println(count);
  }
 }
