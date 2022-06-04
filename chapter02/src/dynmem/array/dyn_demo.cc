#include "dyn_demo.h"

void DynDemo::testBasic() {
  size_t num = 10;

  uint64_t* p1 = new uint64_t[num];
  for (int i = 0; i < num; i++) {
    std::cout << *p1++ << " ";
  }
  std::cout << std::endl;
  delete[] p1;

  uint64_t* p2 = new uint64_t[num]{1, 2, 3, 4, 5};
  for (int i = 0; i < num; i++) {
    std::cout << *p2++ << " ";
  }
  std::cout << std::endl;
  delete[] p2;

  uint64_t* p3 = new uint64_t[num]{5, 4, 3, 2, 1};
  for (uint64_t* p = p3; p < p3 + num; p++) {
    std::cout << *p << " ";
  }
  std::cout << std::endl;
  delete[] p3;
}

void DynDemo::testMedium() {
  size_t num = 10;

  std::unique_ptr<int[]> p1(new int[10]{1, 2, 3, 4, 5});
  for (size_t i = 0; i < num; i++) {
    std::cout << *(p1.get() + i) << " ";
  }
  std::cout << std::endl;

  std::shared_ptr<int[]> p2(new int[10]{9}, [](int* p) { delete p; });
  for (size_t i = 0; i < num; i++) {
    std::cout << *(p2.get() + i) << " ";
  }
  std::cout << std::endl;
}