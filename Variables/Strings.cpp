

#include <iostream>
#include <string>

int main() {

  /* 1.#include <string> to use std::string
   * 2.Concatenate with +
   * 3.check if str is empty with str.empty()
   * 4.Works out of the box with I/O streams   
   */
  
  std::string hello = "Hello";
  std::cout << "Type your name: " << std::endl;
  std::string name = ""; //init empty
  std::cin >> name;  //reading name
  std::cout << hello + ", " + name + "!" << std::endl; // concatenation

  return 0;
}






