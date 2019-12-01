

#include <iostream>
#include <string>

//Exercise01: User must enter a string and you have to check if the String has more than 10 chars or not;

int main() {
  
  std::string chain = "";

  std::cout << "Enter a String: "; std::cin >> chain;

  if (chain.length() >= 10) {
    std::cout << "\nYour string has more than 10 chars";
  } else {
    std::cout << "\nYour string has less than 10 chars";
  }
     

}






