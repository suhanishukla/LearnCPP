#include <iostream>

//Take a four digit year and determine if it is a leap year. 
//A year is a leap year if it can be evenly divided by 4, and if it is divisible by 100 then it must be divisible by 400 as well. 

int main() {
  std::cout << "Enter a year: ";
  int year; 
  std::cin >> year;

  if (year >= 1000 && year <= 9999) {
    if (year % 4 == 0) {
      if (year % 100 == 0) {
        if (year % 400 == 0) {
          std::cout << "This is a leap year!\n";
        }
        else {
          std::cout << "This is not a leap year.\n"; 
        }
      }
      else {
        std::cout << "This is a leap year!\n";
      }
    }
    else {
      std::cout << "This is not a leap year.\n";
    }
  }
  else {
    std::cout << "This is not a valid year.\n";
  }
  
}
