
//void log(const char* message); We need to declare the function in each file that we want log function.
// but we can copy the declaration on a header file so we can use it easily on all the files that we want.

#include "Log.h" // same as void log(const char* message);
#include <iostream>

void initLog() {
  log("Log initialized"); // C++ can't find log so we need to declare it
}

void log(const char* message) { // function with no return value. It only print on the console

  std::cout << message << std::endl;
}