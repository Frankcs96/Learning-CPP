

#include <iostream>
#include <vector>

int main() {

  /* 1.#include <vector> to use std::vector
   * 2.Vector is implemented as a dinamic table
   * 3. you access items just like in std::array
   * 4. Is fast and flexible. arrays not.
  */

  // vec.emplace_back(value) for adding a value
  std::vector<int> vec1 = { 2, 3, 1, 5 };
  //always call reserve when you know the size.
  // very important for optimization
  vec1.reserve(10);

  std::cout << vec1.front() << " " << vec1.back() << std::endl;
  vec1.emplace_back(7);
  std::cout << vec1.front() << " " << vec1.back() << std::endl;

  return 0;
}






