#include <iostream>
#include <cstdlib>
#include <ctime>

#include "CodeMatrix.h"

int main(void) {
  // Support for more unique randomization.
  std::srand(std::time(NULL));

  std::cout << "Breach Protocol" << std::endl;
  std::cout << std::endl;

  CodeMatrix matrix;
  while (true) {
    matrix.Update();
    system("clear"); // TODO: Replace with NCurses or a GUI Based Framework like Raylib.
    matrix.Render();
  }

  return 0;
}

