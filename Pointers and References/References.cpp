

#include <iostream>



void increment(int& value) { // if I use & I change the value b but if not is just a copy and b is still 7.
  value++;

}



int main() {

  int a = 5;
  int& ref = a;
  ref = 2;
  std::cout << a; // a = 2

  int b = 7;
  increment(b);
  std::cout << "\n" << b;




  std::cin.get();
}




