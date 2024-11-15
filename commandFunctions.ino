#include "globals.h"

bool chooseCommand(int dely) {
  //int num = random(2, 4); // chooses command randomly
  int num = 3;
  issueCommand(num); // issue command from speaker
  return executeCommand(num, dely);
}

bool executeCommand(int num, int dely) {
  int i = 0;
  while (i < dely) {
    float pressure = analogRead(pressurePin);
    int block = digitalRead(blockPin);
    float zAccel = analogRead(accelPinZ);
    float xAccel = analogRead(accelPinY);
    float yAccel = analogRead(accelPinX);

    if (block == HIGH) {
      if (num == 1) {
        return success();
      }
      else {
        return failure();
      }
    }
    
    if (pressure > pressureThreshold) {
      if (num == 2) {
        return success();
      }
      else {
        return failure();
      }
    }
    
    
      //if (zAccel < zAccelLimit && yAccel < yAccelLimit && xAccel > xAccelThreshold) {
      if (zAccel < zAccelLimit && yAccel < yAccelThreshold) {
      //if (zAccel < zAccelLimit) {
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
  return false;
}