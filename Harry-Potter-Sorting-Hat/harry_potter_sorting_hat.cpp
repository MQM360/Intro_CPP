#include <iostream>
 
int main() {
  int gryffindor = 0;
  int hufflepuff = 0;
  int ravenclaw = 0;
  int slytherin = 0;

  int answer1 = 0;
  int answer2 = 0;
  int answer3 = 0;
  int answer4 = 0; 
 
  int max = 0;
  std::string house;

std::cout << "======================\n";
std::cout << "The Sorting Hat Quiz!.\n";
std::cout << "======================\n\n";
 
  // --------------- Question 1 ---------------

std::cout << "Q1) When I'm dead, I want people to remember me as: \n";
std::cout << "1) The Good\n";
std::cout << "2) The Great\n";
std::cout << "3) The Wise\n";
std::cout << "4) The Bold\n";

std::cout << "Enter your answer (1-4): \n";
std::cin >> answer1;

if (answer1 == 1){
   hufflepuff++;
}
else if (answer1 == 2){
   slytherin++;   
} 
else if (answer1 == 3){
   ravenclaw++;   
}
else if (answer1 == 4){
   gryffindor++;   
}
else {
  std::cout <<  "Invalid input\n";
}

  // --------------- Question 2 ---------------

std::cout << "\nQ2) Dawn or Dusk? \n";
std::cout << "1) Dawn\n";
std::cout << "2) Dusk\n";

std::cout << "Enter your answer (1-4): \n";
std::cin >> answer2;

if (answer2 == 1){ 
   gryffindor++;
   ravenclaw++;
}
else if (answer2 == 2){
   hufflepuff++;
   slytherin++;   
} 
else {
  std::cout <<  "Invalid input\n";
}
  // --------------- Question 3 ---------------

std::cout << "\nQ3) Which kind of instrument most pleases your ear? \n";
std::cout << "1) The violin\n";
std::cout << "2) The trumpet\n";
std::cout << "3) The piano\n";
std::cout << "4) The drum\n";

std::cout << "Enter your answer (1-4): \n";
std::cin >> answer3;

if (answer3 == 1){
   slytherin++;
}
else if (answer3 == 2){
   hufflepuff++;   
} 
else if (answer3 == 3){
   ravenclaw++;   
}
else if (answer3 == 4){
   gryffindor++;   
}
else {
  std::cout <<  "Invalid input\n";
}

  // --------------- Question 4 ---------------

std::cout << "\nQ4) Which road tempts you most? \n";
std::cout << "1) The wide, sunny grassy lane\n";
std::cout << "2) The narrow, dark, lantern-lit alley\n";
std::cout << "3) The twisting, leaf-strewn path through woods\n";
std::cout << "4) The cobbled street lined (ancient buildings)\n";

std::cout << "Enter your answer (1-4): \n";
std::cin >> answer3;

if (answer4 == 1){
   hufflepuff++;
}
else if (answer4 == 2){
   slytherin++;   
} 
else if (answer4 == 3){
   gryffindor++;   
}
else if (answer4 == 4){
   ravenclaw++;   
}
else {
  std::cout <<  "Invalid input\n";
}

// MAX House Value:
if (gryffindor > max) {
  max = gryffindor;
  house = "Gryffindor";
}
 
if (hufflepuff > max) {
  max = hufflepuff;
  house = "Hufflepuff";
}
 
if (ravenclaw > max) {
  max = ravenclaw;
  house = "Ravenclaw";
}
 
if (slytherin > max) {
  max = slytherin;
  house = "Slytherin";
}
 
std::cout << house << "!\n";

return 0;

}
