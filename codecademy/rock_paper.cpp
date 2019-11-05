/*
Rock Paper Scissors Lizard Spock
(The Big Bang Theory)
The logic:

Scissors cuts Paper.
Paper covers Rock.
Rock crushes Lizard.
Lizard poisons Spock.
Spock smashes Scissors.
Scissors decapitate Lizard.
Lizard eats Paper.
Paper disproves Spock.
Spock vaporizes Rock.
(and as it always has) Rock crushes Scissors.
We will first tackle Rock, Paper, Scissors first, before making it into Rock, Paper, Scissors, Lizard, Spock!
*/

#include <iostream>
//We need . кфтвщь
#include <stdlib.h>


int main() {
  srand (time(NULL));
  int computer = rand() % 3 + 1;
  int user = 0;

  std::cout << "====================\n";
  std::cout << "rock paper scissors!\n";
  std::cout << "====================\n";

  std::cout << "1) ✊\n";
  std::cout << "2) ✋\n";
  std::cout << "3) ✌️\n";

  std::cout << "shoot! ";
  std::cin >> user;

  if (user == 1 && computer == 1) {
    std::cout << "It is a tie! ✊vs ✊";
  }
  else if (user == 1 && computer == 2) {
    std::cout << "You won!";
  }
  else if (user == 1 && computer == 3) {
    std::cout << "Loser!";
  }
  else if (user == 2 && computer == 1) {
    std::cout << "WInner!";
  }
  else if (user == 2 && computer == 2) {
    std::cout << "It is a tie!";
  }
  else if (user == 2 && computer == 3) {
    std::cout << "Loser!";
  }
    else if (user == 3 && computer == 1) {
    std::cout << "Loser!";
  }
  else if (user == 3 && computer == 2) {
    std::cout << "Winner";
  }
  else if (user == 3 && computer == 3) {
    std::cout << "It is a tie!";
  }
  else {
    std::cout  << "Invalid entry";
  }
}
