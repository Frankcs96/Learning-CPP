


#include <iostream>

class Entity {
public:

  float x;
  float y;


  void move(float xa, float ya) {
    x += xa;
    y += ya;
  }
 
};

class Player : public Entity { // Player has all the atributes and method of entity plus their owns.
public:
  const char* name;

  void printName() {
    std::cout << "Hi my name is " << name;
  }

};


int main() {
  
  Player player;
  player.move(4, 3);
  player.x = 2;
  
  

  
  std::cin.get();
  
}

