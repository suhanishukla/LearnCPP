#include <iostream>

int main() {

  int gryffindor, hufflepuff, ravenclaw, slytherin = 0; 
  int answer1, answer2, answer3, answer4 = 0;

  std::cout << "The Sorting Hat Quiz!\n";
  
  //question 1
  std::cout << "Q1) When I'm dead, I want people to remember me as:\n";
  std::cout << "1) The Good\n";
  std::cout << "2) The Great\n"; 
  std::cout << "3) The Wise\n"; 
  std::cout << "4) The Bold\n"; 
  std::cin >> answer1; 

  if (answer1 == 1) {
    hufflepuff++;
  }
  else if (answer1 == 2) {
    slytherin++;
  }
  else if (answer1 == 3) {
    ravenclaw++;
  }
  else if (answer1 == 4) {
    gryffindor++;
  }
  else {
    std::cout << "Invalid input.\n";
  }

  //question 2
  std::cout << "Q2) Dawn or Dusk?\n";
  std::cout << "1) Dawn\n";
  std::cout << "2) Dusk\n";
  std::cin >> answer2;

  if (answer2 == 1) {
    gryffindor++;
    ravenclaw++;
  }
  else if (answer2 == 2) {
    hufflepuff++;
    slytherin++;
  }
  else {
    std::cout << "Invalid input\n";
  }

  //question 3
  std::cout << "Q3) Which kind of instrument most pleases your ear?\n";
  std::cout << "1) The violin\n";
  std::cout << "2) The trumpet\n";
  std::cout << "3) The piano\n";
  std::cout << "4) The drum\n";
  std::cin >> answer3;

  if (answer3 == 1) {
    slytherin++;
  }
  else if (answer3 == 2) {
    hufflepuff++;
  }
  else if (answer3 == 3) {
    ravenclaw++;
  }
  else if (answer3 == 4) {
    gryffindor++;
  }
  else {
    std::cout << "Invalid input.\n";
  }

  //question 4
  std::cout << "Q4) Which road tempts you most?\n";
  std::cout << "  1) The wide, sunny grassy lane\n";
  std::cout << "  2) The narrow, dark, lantern-lit alley\n";
  std::cout << "  3) The twisting, leaf-strewn path through woods\n"; 
  std::cout << "  4) The cobbled street lined (ancient buildings)\n";
  std::cin >> answer4;

  if (answer4 == 1) {
    hufflepuff++;
  }
  else if (answer4 == 2) {
    slytherin++;
  }
  else if (answer4 == 3) {
    gryffindor++;
  }
  else if (answer4 == 4) {
    ravenclaw++;
  }
  else {
    std::cout << "Invalid input\n";
  }

//finding test results
  std::string house;
  int max = 0;

  if (gryffindor > max) {
    max = gryffindor;
    house = "gryffindor";
  }
  if (hufflepuff > max) {
    max = hufflepuff;
    house = "hufflepuff";
  }
  if (slytherin > max) {
    max = slytherin; 
    house = "slytherin";
  }
  if (ravenclaw > max) {
    max = ravenclaw;
    house = "ravenclaw";
  }

  std::cout << "You are a " << house << "!\n";

}