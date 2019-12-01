

#include <iostream>
#include <string>

//Exercise3: User must enter a String and it will be reversed

int main() {
  
  std::string name = "";
  std::string name_reversed = "";

  std::cout << "Enter a string: "; std::cin >> name;
  
  for (int i = name.length() - 1; i >= 0; i--) {
    name_reversed += name[i];
  }

  std::cout << "\nYour String Reversed: " << name_reversed;
  
  



 

}






