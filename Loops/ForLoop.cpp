

#include <iostream>


int main() {

  //Syntax:
  // for (declaration; logicExpresion; increment) {
  //   code
  // } 


  //Example: Print the multiplication table of a number

  int number = 0;

  std::cout << "Enter a number: "; std::cin >> number;

  for (int i = 0; i <= 10; i++) {
    std::cout << number << " * " << i << " = " << number * i << std::endl;
  }
 

  return 0;
     

}






