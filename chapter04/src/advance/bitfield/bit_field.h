#include <iostream>

typedef uint Bit;
struct BitField {
  Bit header : 8;
  Bit body : 32;
  Bit suffix : 8;
};

class BitFieldDemo {
 public:
  void testBitField();
};