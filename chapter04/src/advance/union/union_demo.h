#include <iostream>

class UnionDemo {
 public:
  union Token {
    char c_val;
    int i_val;
    double d_val;
  };

 public:
  void testUnion();
};
