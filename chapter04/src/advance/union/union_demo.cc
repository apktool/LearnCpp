#include "union_demo.h"

void UnionDemo::testUnion() {
  Token token;

  token.i_val = 2;
  std::cout << "c_val=" << token.c_val << ", d_val=" << token.d_val << ", i_val=" << token.i_val << std::endl;

  token.c_val = 'h';
  std::cout << "c_val=" << token.c_val << ", d_val=" << token.d_val << ", i_val=" << token.i_val << std::endl;

  token.d_val = 1;
  std::cout << "c_val=" << token.c_val << ", d_val=" << token.d_val << ", i_val=" << token.i_val << std::endl;

  union {
    char a;
    int b;
    double c;
  };

  b = 9;
  std::cout << "a=" << a << ",b=" << b << ",c=" << c << std::endl;
  a = 'c';
  std::cout << "a=" << a << ",b=" << b << ",c=" << c << std::endl;
  c = 3.14;
  std::cout << "a=" << a << ",b=" << b << ",c=" << c << std::endl;
}
