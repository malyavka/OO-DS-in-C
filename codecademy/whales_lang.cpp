#include <iostream>
#include <vector>
#include <string>

int main () {
  std::string input = "turpentine and turtles";
  std::vector <char> vowels = {'a', 'e', 'i', 'o', 'u'};
  std::vector <char> result;

  for (int i = 0; i < input.size(); i++) {
  for (int j = 0; j < vowels.size(); j++) {
    if (input[i] == vowels[j]) {
      result.push_back(input[i]);
      }
    }
    if (input[i] == 'e' || input[i] == 'u'){
      result.push_back(input[i]);
    }
  }
  for (int h = 0; h < result.size(); h++){
    std::cout << result[h];
  }
}