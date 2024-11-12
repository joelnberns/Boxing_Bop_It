#include "globals.h"
#include "SoftwareSerial.h"
#include "DFRobotDFPlayerMini.h"

void setup() {
  // put your setup code here, to run once:
  random(analogRead(4));
  pinMode(blockPin, INPUT);
  pinMode(LEDGreenPin, OUTPUT);
  pinMode(LEDRedPin, OUTPUT);
  pinMode(pressurePin, INPUT);
  pinMode(accelPinZ, INPUT);
  pinMode(accelPinY, INPUT);
  pinMode(A3, INPUT);
  pinMode(displayPinA0, OUTPUT);
  pinMode(displayPinA1, OUTPUT);
  pinMode(displayPinA2, OUTPUT);
  pinMode(displayPinA3, OUTPUT);
  pinMode(displayPinB0, OUTPUT);
  pinMode(displayPinB1, OUTPUT);
  pinMode(displayPinB2, OUTPUT);
  pinMode(displayPinB3, OUTPUT);

    // Serial communication with the module
  #if (defined ESP32)
    FPSerial.begin(9600, SERIAL_8N1, /*rx =*/D3, /*tx =*/D2);
  #else
    FPSerial.begin(9600);
  #endif
  mySoftwareSerial.begin(9600);
  // Initialize Arduino serial
  // Check if the module is responding and if the SD card is found

  if (!myDFPlayer.begin(mySoftwareSerial)) {
    digitalWrite(LEDGreenPin, HIGH);
    while (true);
  }
  // Initial settings
  myDFPlayer.setTimeOut(500);  // Serial timeout 500ms
  myDFPlayer.volume(20);        // Volume 5
  myDFPlayer.EQ(0);            // Normal equalization
  myDFPlayer.outputDevice(DFPLAYER_DEVICE_SD);
  //  myDFPlayer.EQ(DFPLAYER_EQ_POP);
  //  myDFPlayer.EQ(DFPLAYER_EQ_ROCK);
  //  myDFPlayer.EQ(DFPLAYER_EQ_JAZZ);
  //  myDFPlayer.EQ(DFPLAYER_EQ_CLASSIC);
  //  myDFPlayer.EQ(DFPLAYER_EQ_BASS);

}

void loop() {
  //Audio test
  //setVolume(15);
  digitalWrite(LEDRedPin, HIGH);
  delay(1000);
  myDFPlayer.play(1);
  delay(1000);
  digitalWrite(LEDRedPin, LOW);
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
  */
  
  // accelerometer test
    float zAccel = analogRead(accelPinZ);
    float xAccel = analogRead(accelPinX);
    float yAccel = analogRead(accelPinY);
    if (xAccel > 350) {
      digitalWrite(LEDRedPin, HIGH);
      delay(1000);
    }
    digitalWrite(LEDRedPin, LOW);
  /*
  

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
