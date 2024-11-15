#include "SoftwareSerial.h"
#include "DFRobotDFPlayerMini.h"
#ifndef HEADER_FILE_NAME
#define HEADER_FILE_NAME

int volatile score = 0;
int blockPin = 9;
int LEDGreenPin = 13;
int LEDRedPin = 12;
int pressurePin = 0;
int accelPinZ = A3;
int accelPinY = A2;
int accelPinX = A1;
int displayPinA0 = 0;
int displayPinA1 = 1;
int displayPinA2 = 2;
int displayPinA3 = 3;
int displayPinB0 = 5;
int displayPinB1 = 6;
int displayPinB2 = 7;
int displayPinB3 = 8;
int DFPlayerRXPin = 10;
int DFPlayerTXPin = 11;

float pressureThreshold = 7.5;
float zAccelLimit = 387;
float yAccelThreshold = 335;

// Initialize software serial on pins 10 and 11



bool chooseCommand(int dely);
void issueCommand(int command);
void setVolume(int volume);
bool executeCommand(int num, int dely);
bool success();
bool failure();
void displayScore(int score);
void displayNum(int num, int offset); 
#endif