

#include <iostream>
#include <string>

//Exercise2: User must enter a string and you have to check if they are equals and if not which is greater alphabetically.

int main() {
  
  std::string name = "";
  std::string name2 = "";

  std::cout << "Enter a string: "; std::cin >> name;
  std::cout << "\nEnter a second string: "; std::cin >> name2;

  if (name.compare(name2) == 0) {
    std::cout << "\nBoth strings are equal ";
  } else {
    if (name.compare(name2) > 0) {
      std::cout << "\nSecond string is greater ";
    } else {
      std::cout << "\nFirst String is greater: ";
    }
  }

 

}






