#include <iostream>
//References
int main() {

  int soda = 99;
  int &pop = soda;

  std::cout << soda << "\n" << std::endl;;
  std::cout << pop << "\n" << std::endl;;
  pop++;
  soda++;
  std::cout << soda << "\n" << std::endl;;
  std::cout << pop << "\n" << std::endl;;
}

//Output:
// 99
//99

//101
//101