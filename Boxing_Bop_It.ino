#include "globals.h"
#include<Wire.h>


void loop() {
  // Audio test
  issueCommand(1);
  delay(1000);
  issueCommand(2);
  delay(1000);

  /*
  Pressure sensor test
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  if (analogRead(pressurePin) > 2.5) {
    digitalWrite(LEDRedPin, HIGH);
    delay(1000);
    digitalWrite(LEDRedPin, LOW);
  }
  
  // accelerometer test
    float zAccel = analogRead(accelPinZ);
    float xAccel = analogRead(accelPinY);
    float yAccel = analogRead(accelPinX);
  if (xAccel > 0.1) {
    digitalWrite(LEDRedPin, HIGH);
    delay(1000);
    digitalWrite(LEDRedPin, LOW);
  }

  // put your main code here, to run repeatedly:
  score = 0;
  int delayChange = 100; // milliseconds delay changes by each command
  int delay = 1000; // original delay 
  bool game_state = true; // becomes false if user fails to issue command or issues wrong command
  bool game_won = false;
  while(digitalRead(blockPin) == LOW){ // wait for block butto to be pressed to start the game
  }
  while(game_state && !game_won) {
    game_state = chooseCommand(delay);
    delay -= delayChange;
    if(score == 100) {
      game_won = true;
    }
    displayScore(score);
  } */
}
