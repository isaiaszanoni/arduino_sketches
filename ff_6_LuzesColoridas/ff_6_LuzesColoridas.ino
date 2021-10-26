const int greenPin = 6;
const int redPin = 7;
const int bluePin = 5;

void setup() {
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(redPin, OUTPUT);
}

void loop() {
  piscaRed();
  piscaGreen();
  piscaBlue();
  digitalWrite(redPin, HIGH);
  digitalWrite(greenPin, HIGH);
  digitalWrite(bluePin, HIGH);
  delay(500);
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, LOW);
  digitalWrite(bluePin, LOW);
  delay(250);
  
}

void piscaRed(){
  digitalWrite(redPin, HIGH);
  delay(500);
  digitalWrite(redPin, LOW);
  delay(250);
}

void piscaGreen(){
  digitalWrite(greenPin, HIGH);
  delay(500);
  digitalWrite(greenPin, LOW);
  delay(250);
};

void piscaBlue(){
  digitalWrite(bluePin, HIGH);
  delay(500);
  digitalWrite(bluePin, LOW);
  delay(250);
};
