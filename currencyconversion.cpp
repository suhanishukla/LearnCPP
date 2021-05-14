#include <iostream>

int main() {
  
  double pesos, reais, soles;
  double dollars; 
  
  std::cout << "Enter number of Colombian Pesos: \n"; 
  std::cin >> pesos;
  std::cout << "Enter number of Brazilian Reais: \n"; 
  std::cin >> reais; 
  std::cout << "Enter number of Peruvian Soles: \n"; 
  std::cin >> soles; 

  //conversion rates: 1 peso = 0.00027 USD
  //reais = 0.19 USD
  //sole = 0.27 USD
  dollars = 0.0027 * pesos + 0.19 * reais + 0.27 * soles; 

  std::cout << "US Dollars = $" << dollars << "\n";
   
}