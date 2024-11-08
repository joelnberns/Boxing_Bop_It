#include "globals.h"
#include "SoftwareSerial.h"
#include "DFRobotDFPlayerMini.h"

// Initialize software serial on pins 10 and 11
SoftwareSerial mySoftwareSerial(DFPlayerRXPin, DFPlayerTXPin);  // RX, TX
DFRobotDFPlayerMini myDFPlayer;

void issueCommand(int command) {
  myDFPlayer.play(command);
}
