int volatile score = 0;
int blockPin = 10;
int LEDGreenPin = 11;
int LEDRedPin = 12;
int speakerPin = 13;
int pressurePin = 0;
int accelPinZ = 1;
int accelPinY = 2;
int accelPinX = 3;
int displayPinZero = 0;
int displayPinOne = 1;
int displayPinTwo = 2;
int displayPinThree = 3;
int digitPinOne = 4;
int digitPinTwo = 5;
int displayPinThree = 6;
int pressureThreshold = 3;

bool chooseCommand(int delay);
void issueCommand();
bool executeCommand(int num, int delay);
bool success();
bool failure();
void displayScore();
void turnOnDigit(int pin);
void turnOffDigit(int pin);
void displayNum(int num);
