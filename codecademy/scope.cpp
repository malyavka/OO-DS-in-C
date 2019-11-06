#include <iostream>

std::string sea_animal = "manatee";

void favorite_animal(std::string best_animal) {

  std::string animal = best_animal;
  std::cout << "Best animal: " << animal << "\n";

}

int main() {

  favorite_animal("jaguar");

  std::cout << sea_animal << "\n";
  //!!!
  std::cout << animal << "\n";

}

/* scope.cpp:17:16: error: use of undeclared identifier 'animal'
     std::cout << animal << "\n";
                  ^
   1 error generated.
*/