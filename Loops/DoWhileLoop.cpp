

#include <iostream>


int main() {

  //Syntax:
  // do {
  //   code
  // } while (logic expression);


  //Example: Print the multiplication table of a number

  int i = 0;
  int number = 0;

  std::cout << "Enter a number: "; std::cin >> number;
  do {
    std::cout << number << " * " << i << " = " << number * i << std::endl;
    i++;
  } while (i <= 10);

  return 0;
     

}






