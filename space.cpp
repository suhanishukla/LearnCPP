#include <iostream>

int main() {

  double earthweight; 
  std::cout << "What is your current earth weight?";
  std::cin >> earthweight;
  
  std::cout << "3. Mars 4. Jupiter 5. Saturn 6. Uranus 7. Neptune \n";
  std::cout << "Select your planet: \n"; 
  int planet;
  std::cin >> planet;

  double aweight;

  switch (planet) {
    case 3: 
      aweight = 0.38 * earthweight;
      break;
    case 4: 
      aweight = 2.34 * earthweight;
      break;
    case 5: 
      aweight = 1.06 * earthweight;
      break;
    case 6: 
      aweight = 0.92 * earthweight;
      break;
    case 7: 
      aweight = 1.19 * earthweight;
      break;  
      
  }  

  std::cout << "Your weight: " << aweight << "\n";
  
}