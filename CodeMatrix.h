#pragma once

#ifndef CODE_MATRIX_H
#define CODE_MATRIX_H

class CodeMatrix {
  public:
    CodeMatrix(void);
    void Render(void);
    void Update(void);
  private:
    unsigned char table[6][6] = {
      {0, 0, 0, 0, 0, 0,},
      {0, 0, 0, 0, 0, 0,},
      {0, 0, 0, 0, 0, 0,},
      {0, 0, 0, 0, 0, 0,},
      {0, 0, 0, 0, 0, 0,},
      {0, 0, 0, 0, 0, 0,},
    };
};

#endif // !CODE_MATRIX_H
