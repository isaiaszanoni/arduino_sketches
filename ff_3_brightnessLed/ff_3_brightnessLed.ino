// Project 3 - Oscillating Brigthness
// Filipe Flop - from 'Kit Maker Arduino - Starter'

int pinLed = 11; // set out 11 as a led pin

void setup() {
  // set led pin as a output
  pinMode(pinLed, OUTPUT);
}

void loop() {
  brightness(5);
  offbrightness(5);
}

void brightness(int increment){
  // change the brightness through the loop for
  for(byte value = 0 ; value < 255; value +=increment){
    // Control led brightness
    analogWrite(pinLed, value);
    delay(30);
  }
}

void offbrightness(int decrement){
  // change the brightness throught the loop for
  for (byte value = 255; value > 0; value -= decrement){
    // control led brightness
    analogWrite(pinLed, value);
    delay(30);
  }
}
