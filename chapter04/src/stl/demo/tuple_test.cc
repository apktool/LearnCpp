#include "tuple_test.h"

void TupleTest::testBaisc() {
  std::tuple<size_t, size_t, size_t> tuple1 = {3, 2, 1};
  std::cout << std::get<0>(tuple1) << std::endl;
  std::cout << std::get<1>(tuple1) << std::endl;
  std::cout << std::get<2>(tuple1) << std::endl;

  size_t count = std::tuple_size<decltype(tuple1)>::value;
  std::cout << count << std::endl;

  std::tuple_element<1, decltype(tuple1)>::type v1;
  v1 = 9;
  std::cout << v1 << std::endl;
}