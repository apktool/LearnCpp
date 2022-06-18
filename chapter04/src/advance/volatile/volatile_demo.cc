#include "volatile_demo.h"

void VolatileDemo::testVolatile() {
  volatile int a = 999;
  std::cout << a << std::endl;

  volatile int* p1 = &a;
  std::cout << *p1 << std::endl;

  volatile int* volatile p2 = &a;
  std::cout << *p2 << std::endl;

  int b = 888;
  int* volatile p3 = &b;
  std::cout << *p3 << std::endl;
}
