#ifndef HEADER_FILE_NAME
#define HEADER_FILE_NAME

int volatile score = 0;
int blockPin = 10;
int LEDGreenPin = 11;
int LEDRedPin = 12;
int speakerPin = 13;
int pressurePin = 0;
int accelPinZ = 1;
int accelPinY = 2;
int accelPinX = 3;
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

float pressureThreshold = 3;
float zAccelLimit = 1;
float yAccelLimit = 1;
float xAccelThreshold = 2;

bool chooseCommand(int delay);
void issueCommand(char command);
bool executeCommand(int num, int delay);
bool success();
bool failure();
void displayScore(int score);
void displayNum(int num, int offset);
#endif