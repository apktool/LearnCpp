#include "bit_field.h"

void BitFieldDemo::testBitField() {
  BitField field = {.header = 8, .body = 64, .suffix = 8};
  Bit header = field.header;
  Bit body = field.body;
  Bit suffix = field.suffix;
  std::cout << sizeof(uint) << std::endl;
  std::cout << sizeof(field) << std::endl;
  std::cout << "|" << header << "|" << body << "|" << suffix << "|" << std::endl;
}
