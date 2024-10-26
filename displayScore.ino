void turnOnDigit(int pin) {
  digitalWrite(pin, LOW);
}

void turnOffDigit(int pin) {
  digitalWrite(pin, LOW);
}

void displayNum(int num) {
  if (num > 9) {
    return;
  }
  if ((num % 2) == 1) {
    digitalWrite(displayPinZero, HIGH);
  }
  else {
    digitalWrite(displayPinZero, LOW);
  }
  if ((num == 2) || (num == 6) || (num == 7)) {
    digitalWrite(displayPinOne, HIGH);
  }
  else {
    digitalWrite(displayPinOne, LOW);
  }
  if ((num > 3) && (num < 8)) {
    digitalWrite(displayPinTwo, HIGH);
  }
  else {
    digitalWrite(displayPinTwo, LOW);
  }
  if (num > 7) {
    digitalWrite(displayPinThree, HIGH);
  }
  else {
    digitalWrite(displayPinThree, LOW);
  }
}
