void issueCommand(num) { // for now, commands are given by different tones
  if (num == 1) {
    tone(speakerPin, 440, 200);
  }
  else if (num == 2) {
    tone(speakerPin, 494, 200);
  }
  else if (num == 3) {
    tone(speakerPin, 523, 300);
  }
}