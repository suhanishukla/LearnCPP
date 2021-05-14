#include <iostream> 
#include <stdlib.h> 

//Play rock, paper, scissors, lizard, spock from The Big Bang Theory against the CPU!

int main() {

    srand (time(NULL));
  
    //rock = 1, paper = 2, scissors = 3, lizard = 4, spock = 5
    int computer = rand() % 5 +1; 

    int user = 0; 

    //pick rock, paper, scissors, lizard, or spock

    std::cout << "1) rock\n";
    std::cout << "2) paper\n";
    std::cout << "3) scissors\n";
    std::cout << "4) lizard\n";
    std::cout << "5) spock\n";
    std::cout << "shoot!\n";
    std::cin >> user; 

    if (user == 1) {
        std::cout << "Rock! A brave choice!\n"; 
    }
    else if (user == 2) {
        std::cout << "Paper it is!\n";
    }
    else if (user == 3) {
        std::cout << "Scissors are your weapon of choice!\n"; 
    }
    else if (user == 4) {
        std::cout << "Lizard! An interesting choice!\n";
    }
    else if (user == 5) {
        std::cout << "Spock it is!\n";
    }
    else {
        std::cout << "This is not a valid input. Try again!\n"; 
    }


    if (user == 1 && computer == 4) {
        std::cout << "Rock crushes lizard! Victory is yours!\n";
    }
    else if (user == 1 && computer == 3) {
        std::cout << "Rock crushes scissors! Victory is yours!\n";
    }
    else if (user == 2 && computer == 1) {
        std::cout << "Paper covers rock! Victory is yours!\n";
    }
    else if (user == 2 && computer == 5) {
        std::cout << "Paper disproves Spock! Victory is yours!\n";
    }
    else if (user == 3 && computer == 2) {
        std::cout << "Scissors cuts paper! Victory is yours!\n";
    }
    else if (user == 3 && computer == 4) {
        std::cout << "Scissors decapitate lizard! Victory is yours!\n";
    }
    else if (user == 4 && computer == 5) {
        std::cout << "Lizard poisons Spock! Victory is yours!\n";
    }
    else if (user == 4 && computer == 2) {
        std::cout << "Lizard eats paper! Victory is yours!\n";
    }
    else if (user == 5 && computer == 3) {
        std::cout << "Spock smashes scissors! Victory is yours!\n";
    }
    else if (user == 5 && computer == 1) {
        std::cout << "Spock vaporizes rock! Victory is yours!\n";
    }
    else if (user == computer) {
        std::cout << "You've met your match. It's a draw!\n";
    }
    else {
        std::cout << "You lose. You're trash kid!";
    }
}
