

#include <iostream>


int main() {

  //Syntax:
  // if(condition) {
  //   code
  // }  else {
  //    code
  // }
 
  // Example: Enter your age and check if you are between 18 and 25.

  int age = 0;

  std::cout << "Enter your age: "; std::cin >> age;

  if (age >= 18 && age <= 25) {
    std::cout << "\nYou are in the range of [18, 25]";
  } else {
    std::cout << "\nYou are not in the range sorry";
  }


}






