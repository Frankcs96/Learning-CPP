


#include <iostream>

enum Example : char {
  A, B, C   //A = 0 B = 1 C = 2

};



int main() {
  
  Example value = B; // I can only choose A B OR C.

  if (value == 1) {

    //do something
  }
  
  std::cin.get();
}

