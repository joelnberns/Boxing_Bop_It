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

bool chooseCommand(int delay) {
  int num = random(1, 4);
  issueCommand(num);
  return executeCommand(num, delay)
}

bool executeCommand(num, delay) {
  i = 0;
  while (i < delay) {
    pressure = analogRead(pressurePin);
    block = digitalRead(blockPin);
    if (pressure > pressureThreshold) {
      if (num == 1) {
        return success();
      }
      else {
        return failure();
      }
    }
    if (block == HIGH) {
      if (num == 3) {
        return success();
      }
      else {
        return failure();
      }
    }
    delay(100);
    i++;
  }
  return failure();
}

bool success() {
  score++;
  digitalWrite(LEDGreenPin, HIGH);
  delay(1000);
  digitalWrite(LEDGreenPin, LOW);
  return true;
}

bool failure() {
  digitalWrite(LEDRedPin, HIGH);
  delay(1000);
  digitalWrite(LEDRedPin, LOW);
  return false;
}

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
  pinMode(displayPinOne, OUTPUT);
  pinMode(displayPinTwo, OUTPUT);
  pinMode(displayPinThree, OUTPUT);
  pinMode(displayPinFour, OUTPUT);
  pinMode(displayPinFive, OUTPUT);
  pinMode(displayPinSix, OUTPUT);
  pinMode(displayPinSeven, OUTPUT);
  pinMode(displayPinEight, OUTPUT);
  pinMode(displayPinNine, OUTPUT);
  pinMode(displayPinTen, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  score = 0;
  int delayChange = 100;
  int delay = 1000;
  bool game_state = true;
  bool game_won = false;
  int i = 1;
  while(digitalRead(blockPin) == LOW){
  }
  while(game_state && !game_won) {
    game_state = chooseCommand(delay);
    delay -= delayChange;
    i++
    if(i == 100) {
      game_won = true;
    }
    display_score(score);
  }
  

}
