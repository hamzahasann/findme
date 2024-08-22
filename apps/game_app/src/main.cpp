#include <SFML/Graphics.hpp>
#include <iostream>

#include "BSPTree.h"

int main() {
  // sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Window");

  // while (window.isOpen()) {
  //   sf::Event event;
  //   while (window.pollEvent(event)) {
  //     if (event.type == sf::Event::Closed) window.close();
  //   }

  //   window.clear();
  //   // Add drawing code here
  //   window.display();
  // }

  Grid grid = BSPTree(100, 100);
  std::cout << grid << std::endl;
}
