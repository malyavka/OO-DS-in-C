#include <iostream>

int main() {
  double pesos;
  double reais;
  double soles;
  double dollars;
  std::cout << "Enter number of Colombian Pesos: ";
  std::cin >> pesos;
  std::cout << "Enter number of Brazilian Reais: ";
  std::cin >> reais;
  std::cout << "Enter number of Peruvian Soles: ";
  std::cin >> soles;
  //0.00030 pesos
  // 0.25 reais
  // 0.3 soles
  dollars = (0.00030*pesos) + (0.25*reais) + (0.3*soles);
  std::cout << "US Dollars = $" << dollars;
}