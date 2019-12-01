


#include <iostream>
#include <string>

class Printable {
public:
  virtual std::string getClassName() = 0; // INTERFACE you have to implement getClassName in every class with printable
};


class Entity : public Printable {
public:

  virtual std::string getName() { 
    return "Entity";
 }

  std::string getClassName() {
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

  std::string getClassName() {
    return "Player";
  }

};

void print(Printable* obj) {
  std::cout << obj->getClassName() << std::endl;
}


int main() {
  Entity* e = new Entity();
  Player* p = new Player("Frank");
  
  print(e);
  print(p);

  
  std::cin.get();
  
}

