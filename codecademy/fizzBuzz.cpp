#include <iostream>

int main() {
  for (int i = 1;  i <= 100; i++) {
    if (i % 3 == 0) {
      std::cout << "Fizz!\n";
      continue;
    }
    else if (i%5 == 0) {
      std::cout << "Buzz!\n";
      continue;
    }
    else if (i%3 == 0 && i%5 == 0){
      std::cout << "FizzBuzz!\n";
    }
    else {
     std::cout << i  << "\n";
    }
  }
}

//compile: g++ <file>
//execute  ./a.out