#include <iostream>
//return numbers 1-100 and for multiples of 3 return fizz, for multiples of 5 return buzz, and for multiples of 5 and 3 return fizzbuzz.

int main() {

    for (int i = 1; i <= 100; i++) {
        if (i % 3 == 0 && i % 5 != 0) {
            std::cout << "Fizz\n";
            }
        else if (i % 5 == 0 && i % 3 != 0) {
            std::cout << "Buzz\n";
            }
        else if (i % 15 == 0) {
            std::cout << "FizzBuzz\n";
            }
        else {
            std::cout << i << "\n";
            }
        }    
    }   
}
