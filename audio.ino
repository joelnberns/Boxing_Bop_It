#include "globals.h"
#include "SoftwareSerial.h"
#include "DFRobotDFPlayerMini.h"

// Initialize software serial on pins 10 and 11

void issueCommand(int command) {
  myDFPlayer.play(command);
}

void setVolume(int volume) {
  myDFPlayer.volume(volume);
}
