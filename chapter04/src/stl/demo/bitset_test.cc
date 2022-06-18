#include "bitset_test.h"

void BitsetTest::testBasic() {
  std::bitset<13> bitset1(0xff);
  std::cout << bitset1 << std::endl;
  std::cout << bitset1.count() << std::endl;

  bitset1.set(12, 1);
  std::cout << bitset1 << std::endl;
  std::cout << bitset1.count() << std::endl;

  bitset1.reset(12);
  std::cout << bitset1 << std::endl;
  std::cout << bitset1.count() << std::endl;

  bitset1.flip(12);
  std::cout << bitset1 << std::endl;
  std::cout << bitset1.count() << std::endl;

  std::bitset<128> bitset2(~0ULL);
  std::cout << bitset2 << std::endl;
}
