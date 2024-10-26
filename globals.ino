int volatile score = 0;
int blockPin = 10;
int LEDGreenPin = 11;
int LEDRedPin = 12;
int speakerPin = 13;
int pressurePin = 0;
int accelPinZ = 1;
int accelPinY = 2;
int accelPinX = 3;
int displayPinOne = 0;
int displayPinTwo = 1;
int displayPinThree = 2;
int displayPinFour = 3;
int displayPinFive = 4;
int displayPinSix = 5;
int displayPinSeven = 6;
int displayPinEight = 7;
int displayPinNine = 8;
int displayPinTen = 9;
int pressureThreshold = 3;

bool chooseCommand(delay);
void issueCommand();
bool executeCommand(num, delay);
bool success();
bool failure();
void displayScore();