#include <math.h>
#include "globals.h"

void displayNum(int num, int offset) {
  if (num > 9) {
    return;
  }
  if ((num % 2) == 1) {
    digitalWrite(offset, HIGH);
  }
  else {
    digitalWrite(offset, LOW);
  }
  if ((num == 2) || (num == 6) || (num == 7)) {
    digitalWrite(offset+1, HIGH);
  }
  else {
    digitalWrite(offset+1, LOW);
  }
  if ((num > 3) && (num < 8)) {
    digitalWrite(offset+2, HIGH);
  }
  else {
    digitalWrite(offset+2, LOW);
  }
  if (num > 7) {
    digitalWrite(offset+3, HIGH);
  }
  else {
    digitalWrite(offset+3, LOW);
  }
}

void displayScore(int score) {
  int tens = trunc(score / 10);
  int ones = score % 10;
  Serial.println(tens);
  Serial.println(ones);
  displayNum(tens, 5);
  displayNum(ones, 0);
  }

