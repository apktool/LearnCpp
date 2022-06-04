#include "alloc_demo.h"

void AllocDemo::testBasic() {
  size_t num = 2;

  std::allocator<uint64_t> alloc1;
  uint64_t* p1 = alloc1.allocate(num);

  for (int i = 0; i < num; i++) {
    std::cout << *p1++ << " ";
  }
  std::cout << std::endl;

}

void AllocDemo::testMedium() {
  size_t num = 2;

  std::vector<uint64_t> vector1(num, 0);
  std::allocator<uint64_t> alloc1;
  uint64_t* p1 = alloc1.allocate(vector1.size() * 2);
  uint64_t* p2 = std::uninitialized_copy(vector1.begin(), vector1.end(), p1);
  std::uninitialized_fill_n(p2, vector1.size(), 9);

  for (int i = 0; i < num * 2; i++) {
    std::cout << *p1++ << " ";
  }
  std::cout << std::endl;
}
