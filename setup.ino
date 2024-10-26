void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  random(analogRead(4));
  pinMode(blockPin, INPUT);
  pinMode(LEDGreenPin, OUTPUT);
  pinMode(LEDRedPin, OUTPUT);
  pinMode(pressurePin, INPUT);
  pinMode(accelPinZ, INPUT);
  pinMode(accelPinY, INPUT);
  pinMode(accelPinX, INPUT);
  pinMode(displayPinZero, OUTPUT);
  pinMode(displayPinOne, OUTPUT);
  pinMode(displayPinTwo, OUTPUT);
  pinMode(displayPinThree, OUTPUT);
  pinMode(digitPinOne, OUTPUT);
  pinMode(digitPinTwo, OUTPUT);
  pinMode(digitPinThree, OUTPUT);
}