


#include <iostream>
#include <string>

class Entity {
public:

  virtual std::string getName() { // virtual function
    return "Entity";
 }
 
};

class Player : public Entity { 
private:
  std::string m_Name;
public:
  Player(const std::string name) {
    m_Name = name;
  }

  std::string getName() {
    return m_Name;
  }

};


int main() {
  Entity* e = new Entity();
  std::cout << e->getName() << std::endl;
  Player* p = new Player("Frank");
  std::cout << p->getName() << std::endl;
  Entity* enti = p;
  std::cout << enti->getName() << std::endl; // if we dont use virtual function this will give you entity name instead of player.


  
  std::cin.get();
  
}

