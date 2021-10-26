#define DO 262
#define RE 294
#define MI 330
#define FA 349
#define SOL 392
#define LA 440
#define SI 494
#define DO_2 523

const int buzzerPin = 6;

int melodia[] = {
  DO, RE, MI, FA, SOL, LA, SI, DO_2
  };

void setup(){
  pinMode(buzzerPin, OUTPUT);
  }

void loop(){
  for(int i=0; i<8; i++){
    tone(buzzerPin, melodia[i]);
    delay(500);
  }
}
