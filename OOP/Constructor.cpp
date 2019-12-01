


#include <iostream>

class Entity {
public:

  float x;
  float y;

  Entity(float x, float y) { // each time you instance an object you have to give X AND Y AS A VALUE
    this-> x = x;
    this-> y = y;
    std::cout << "Created Entity";
  }

  ~Entity() {
    std::cout << "Destroyed Entity"; // destructors
  }

  void print() {
    std::cout << x << ", " << y << std::endl;
 
  }
};


int main() {
  
  Entity e (12.0f,4.0f);
  e.print();
  e.~Entity(); // calling destructor
  

  
  std::cin.get();
  
}

