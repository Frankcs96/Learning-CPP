

#include <iostream>
#include "Log.h"


int multiply(int a , int b) {  // function with int as a return and 2 parameters

  return a * b;

}

int sum() { // function with int as a return but no parameters
  return 4 + 4;
}



int main() {
  initLog(); // we need the header file with the declaration
  std::cout << multiply(3, 2) << std::endl;
  std::cout << sum() << std::endl;
  log("Hi im the log"); // we need the header file with the declaration
  std::cin.get();


}




