#include <iostream>
#include "ufo_functions.hpp"
#include <vector>

int main() {
  greet();

  // vars
  std::string codeword = "codecademy";
  std::string answer = "__________";
  int misses = 0;
  std::vector<char> incorrect;
  bool guess = false;
  char letter;

  // displays status and adds +1 to 'misses' after each round
  while (answer != codeword && misses < 7) {
    display_misses(misses);
    display_status(incorrect, answer);
    std::cout << "\nPlease enter your guess: \n";
    std::cin >> letter;
    for (int i = 0; i < codeword.length(); i++) {
      if (letter == codeword[i]) {
        answer[i] = letter;
        guess = true;
      }
    }

    if (guess) {
      std::cout << "\nCorrect!\n";
    } else {
      std::cout << "\nIncorrect! The tractor beam pulls the person in further.\n";
      incorrect.push_back(letter);
      misses++;
  }
    // resets guess to false after each round so for loop works
    guess = false;
  }

  // message printout after 'while' conditions are achieved.
  end_game(answer, codeword);

}
