#include "CodeMatrix.h"

#include <iostream>

void CodeMatrix::Render(void) {
  // TODO: Create a structure we can use to update and draw a 6 x 6 matrix of hex values.
  int hexes[6][6] = {
    {0, 1, 2, 3, 4, 5},
    {0, 1, 2, 3, 4, 5},
    {0, 1, 2, 3, 4, 5},
    {0, 1, 2, 3, 4, 5},
    {0, 1, 2, 3, 4, 5},
    {0, 1, 2, 3, 4, 5},
  };

  // Replace Literal Values with Random Hex Values 00 to FF.
  for (int index = 0; index < 6; index++) {
    // Draw Active Row Marker
    if (index == 0) {
      std::cout << "* ";
    } else {
      std::cout << "  ";
    }

    // Draw Code Matrix
    std::cout << "[ ";
    for (int hex = 0; hex < 6; hex++) {
      std::cout << hexes[index][hex] << ((hex < 5) ? " | " : "");
    }

    std::cout << " ]" << std::endl;
  }
}

