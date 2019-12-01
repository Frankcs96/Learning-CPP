

#include <iostream>

//A pointer is just an adress of memory.
//type of the pointer do not matter, it is always an int (memory Adress).

int main() {

  void* ptr1 = nullptr; // 0 Is not a valid memory adress = NULL

  int var = 8;
  int* ptr2 = &var; // we storage the adress of var in ptr2
  *ptr2 = 10;

  char* buffer = new char[8]; // buffer is a pointer of 8 bytes
  memset(buffer, 3, 8); // we assign 3 to the entire block of memory

  char** ptr3 = &buffer; // we assignt to ptr3 the direction of the buffer pointer (pointer of a pointer)


  delete[] buffer; // delete memory

  std::cout << var; // result 10
  std::cin.get();
}




