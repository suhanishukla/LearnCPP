#include <iostream> 
#include <stdlib.h> 

//Rock, paper, scissors against computer

int main() {

  srand (time(NULL));
  
  //rock = 1, paper = 2, scissors = 3
  int computer = rand() % 3 +1; 

  int user = 0; 

  //pick rock, paper, or scissors 

  std::cout << "1) rock\n";
  std::cout << "2) paper\n";
  std::cout << "3) scissors\n";
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
  else {
    std::cout << "This is not a valid input. Try again!\n"; 
  }

  if (computer == 1) {
    if (user == 1) {
      std::cout << "Rock vs. rock!\n";
      std::cout << "It's a draw!\n";
    }
    else if (user == 2) {
      std::cout << "Paper vs. rock!\n"; 
      std::cout << "Victory is yours!\n";
    }
    else if (user == 3) {
      std::cout << "Scissors vs. rock!\n"; 
      std::cout << "Loss. Better luck next time!\n"; 
    }   
  }
  
  if (computer == 2) {
    if (user == 1) {
      std::cout << "Rock vs. paper!\n";
      std::cout << "Loss. Better luck next time!\n"; 
    }
    else if (user == 2) {
      std::cout << "Paper vs. paper!\n";
      std::cout << "It's a draw!\n";
    }
    else if (user == 3) {
      std::cout << "Scissors vs. paper!\n";
      std::cout << "Victory is yours!\n";
    } 
  }

  if (computer == 3) {
    if (user == 1) {
      std::cout << "Rock vs. scissors!\n";
      std::cout << "Victory is yours!\n";
    }
    else if (user == 2) {
      std::cout << "Paper vs. scissors!\n";
      std::cout << "Loss. Better luck next time!\n";
    }
    else if (user == 3) {
      std::cout << "Scissors vs. scissors!\n";
      std::cout << "It's a draw!\n";
    }
  }

}