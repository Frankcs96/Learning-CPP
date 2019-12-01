

#include <iostream>


int main() {

  //Syntax:
  // while(logic expression) {
  //   code...
  // }

  //Example: Print the multiplication table of a number

  int i = 0;
  int number = 0;

  std::cout << "Enter a number: "; std::cin >> number;
  while (i <= 10) {
    std::cout << number << " * " << i << " = " << number * i << std::endl;
    i++;
  }



 

 
  

}






