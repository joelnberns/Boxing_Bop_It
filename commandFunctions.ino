#include "globals.h"

bool chooseCommand(int delay) {
  int num = random(1, 4); // chooses command randomly
  issueCommand((char)num); // issue command from speaker
  return executeCommand(num, delay);
}

bool executeCommand(int num, int dely) {
  int i = 0;
  while (i < dely) {
    float pressure = analogRead(pressurePin);
    int block = digitalRead(blockPin);
    //accel_readings accel = read_accelerometer();
    float zAccel = analogRead(accelPinZ);
    float xAccel = analogRead(accelPinY);
    float yAccel = analogRead(accelPinX);
    if (pressure > pressureThreshold) {
      if (num == 1) {
        return success();
      }
      else {
        return failure();
      }
    }
    //if (zAccel < zAccelLimit && yAccel < yAccelLimit && xAccel > xAccelThreshold) {
      if (accel.z < zAccelLimit && accel.y < yAccelLimit && accel.x > xAccelThreshold) {
      if (num == 2) {
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