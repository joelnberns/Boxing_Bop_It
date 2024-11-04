#include "globals.h"
#include "SoftwareSerial.h"
#include "DFRobotDFPlayerMini.h"

// Initialize software serial on pins 10 and 11
SoftwareSerial mySoftwareSerial(DFPlayerRXPin, DFPlayerTXPin);  // RX, TX
DFRobotDFPlayerMini myDFPlayer;

void issueCommand(char command) {
  command_num = command - 48
  myDFPlayer.play(command_num)
}
