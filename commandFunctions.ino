bool chooseCommand(int delay) {
  int num = random(1, 4); // chooses command randomly
  issueCommand(num); // issue command from speaker
  return executeCommand(num, delay)
}

bool executeCommand(int num, int delay) {
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
