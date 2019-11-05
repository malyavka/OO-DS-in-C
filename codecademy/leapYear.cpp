#include <iostream>

int main() {

  int year;
  std::cout << "Enter the year, please: ";
  std::cin >> year;

  if (year < 1000 && year > 2019){
    std::cout << "Invalid entry.";
  }
   else if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {

    std::cout << year;
    std::cout << " falls on a leap year.\n";

  }
  else {

    std::cout << year;
    std::cout << " is not a leap year.\n";

  }
}