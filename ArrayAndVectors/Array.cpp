

#include <iostream>
#include <array>

int main() {

  /* 1.#include <array> to use std::array
   * 2.Store a collection of items of same type
  */

  std::array<float, 3> arr = {2.3f ,1.0f , 4.0f};
  // access items with arr[i] indexing starts with 0
  std::cout << arr[1] << std::endl;
  
  std::cout << arr.size(); //number of stored items
  arr.front(); // arr[0]
  arr.back(); //arr[arr.size() - 1]
  


  return 0;
}






