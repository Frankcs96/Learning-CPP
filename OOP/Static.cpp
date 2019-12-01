


#include <iostream>


class Entity {
public:
  int x;
  int y;

  static void greet() {
    std::cout << "Hello I'm an entity" << std::endl; // If we have a static method or variable it belong to all the instances.
  }

};


int main() {

  Entity e;
  e.x = 2;
  e.y = 3;

  Entity e1;
  e1.x = 5;
  e1.y = 8;

  Entity::greet(); // we call the method here
  std::cin.get();
}

