

#include <iostream>

class Player {
  public: // attributes change to public
    int x;
    int y;
    int speed;

    void move(int xa, int ya) {
      x += xa * speed;
      y += ya * speed;
    }

};





int main() {

  Player player; // We create a variable type Player
  player.x = 5; // we change x attribute to 5, but we need to make it public or use methods.
  player.move(2, 2); // method move called




  std::cin.get();
}




