

#include <iostream>


int main() {

  //Syntax:
  // switch(expression) {
  //   case "variable_to_evaluate":
  //     code;  
  //     break;

  //   default:
  //     code;
  //     break;

  // Example: Enter a number from 1 to 7 and I'll give you the day of the week.

  int day = 0;

  std::cout << "Enter a number (1-7): "; std::cin >> day;

  switch (day) {
    case 1:
      std::cout << "\nToday is Monday.";
      break;
    case 2:
      std::cout << "\nToday is Tuesday.";
      break;
    case 3:
      std::cout << "\nToday is Wednesday.";
      break;
    case 4:
      std::cout << "\nToday is Thursday.";
      break;
    case 5:
      std::cout << "\nToday is Friday.";
      break;
    case 6:
      std::cout << "\nToday is Saturday.";
      break;
    case 7:
      std::cout << "\nToday is Sunday.";
      break;


    default:
      std::cout << "\nWrong day of the week";
      break;
  }

}






