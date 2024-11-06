#include "CodeMatrix.h"

#include <iostream>

void CodeMatrix::Render(void) {
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
      // ((int) this->table[index][hex])
      std::cout << static_cast<int>(this->table[index][hex]) << ((hex < 5) ? " | " : "");
    }

    std::cout << " ]" << std::endl;
  }
}

void CodeMatrix::Update(void) {
  // Generates a Random Hex Value and adds it the corresponding table slot.
  for (int index = 0; index < 6; index++) {
    for (int hex = 0; hex < 6; hex++) {
      unsigned char randomHexValue = rand() % 256;
      this->table[index][hex] = randomHexValue;
    }
  }
}

