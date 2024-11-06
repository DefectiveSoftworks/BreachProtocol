#include <iostream>

void drawTable(void);

int main(void) {
  std::cout << "Breach Protocol" << std::endl;
  std::cout << std::endl;

  while (true) {
    system("clear");
    drawTable();
  }

  return 0;
}

void drawTable(void) {
  int hexes[6][6] = {
    {0, 1, 2, 3, 4, 5},
    {0, 1, 2, 3, 4, 5},
    {0, 1, 2, 3, 4, 5},
    {0, 1, 2, 3, 4, 5},
    {0, 1, 2, 3, 4, 5},
    {0, 1, 2, 3, 4, 5},
  };

  for (int index = 0; index < 6; index++) {
    std::cout << "[ ";
    for (int hex = 0; hex < 6; hex++) {
      std::cout << hexes[index][hex] << ((hex < 5) ? " | " : "");
    }

    std::cout << " ]" << std::endl;
  }
}

