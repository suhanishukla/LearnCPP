#include <iostream>
#include <cmath>

//quadratic function roots calculator given coefficients and constant
int main() {
  
  double a, b, c;

  std::cout << "Enter a: ";
  std::cin >> a; 
  std::cout << "Enter b: ";
  std::cin >> b;
  std::cout << "Enter c: "; 
  std::cin >> c;

  double root1, root2;

  //felt like creating denom for denominator
  double denom = 2 * a;
  root1 = (-b + std::sqrt(b*b - 4*a*c))/denom;
  root2 = (-b - std::sqrt(b*b - 4*a*c))/denom;
  
  std::cout << "Root 1 is " << root1 << "\n";
  std::cout << "Root 2 is " << root2 << "\n";
 
  return 0; 
}