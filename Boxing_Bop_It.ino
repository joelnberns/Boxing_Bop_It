

void loop() {
  // put your main code here, to run repeatedly:
  score = 0;
  int delayChange = 100; // milliseconds delay changes by each command
  int delay = 1000; // original delay
  bool game_state = true; // becomes false if user fails to issue command or issues wrong command
  bool game_won = false;
  while(digitalRead(blockPin) == LOW){ // wait for block butto to be pressed to start the game
  }
  while(game_state && !game_won) {
    game_state = chooseCommand(delay);
    delay -= delayChange;
    i++
    if(score == 100) {
      game_won = true;
    }
    display_score(score);
  }
  

}
