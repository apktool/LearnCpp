#include "iterator_demo.h"

void IteratorDemo::testInsert() {
  auto f = [](auto& v) -> void { std::cout << v << " "; };

  std::list<uint64_t> list = {1, 2, 3, 4};

  std::list<uint64_t> list1;
  std::copy(list.cbegin(), list.cend(), std::front_inserter(list1));
  std::for_each(list1.cbegin(), list1.cend(), f);
  std::cout << std::endl;

  std::list<uint64_t> list2;
  std::copy(list.cbegin(), list.cend(), std::back_inserter(list2));
  std::for_each(list2.cbegin(), list2.cend(), f);
  std::cout << std::endl;

  std::list<uint64_t> list3 = {0};
  std::copy(list.cbegin(), list.cend(), std::inserter(list3, list3.begin()));
  std::for_each(list3.cbegin(), list3.cend(), f);
  std::cout << std::endl;

  std::list<uint64_t> list4 = {0};
  std::copy(list.cbegin(), list.cend(), std::inserter(list4, list4.end()));
  std::for_each(list4.cbegin(), list4.cend(), f);
  std::cout << std::endl;
}

// 1 2 3 4 5 e
void IteratorDemo::testIostream() {
  auto f = [](auto& v) -> void { std::cout << v << " "; };

  std::istream_iterator<uint64_t> it1(std::cin), eof;
  std::vector<uint64_t> vector1;
  while (it1 != eof) {
    vector1.push_back(*it1++);
  }
  std::for_each(vector1.begin(), vector1.end(), f);
  std::cout << std::endl;

  // ----------

  std::ostream_iterator<uint64_t> it2(std::cout, " ");
  for (const auto& v : vector1) {
    // it2 = v;
    *it2++ = v;
  }
  std::cout << std::endl;

  // ----------

  std::ostream_iterator<uint64_t> it3(std::cout, " ");
  std::copy(vector1.cbegin(), vector1.cend(), it3);
  std::cout << std::endl;
}

void IteratorDemo::testReverse() {
  auto f = [](auto& v) -> void { std::cout << v << " "; };

  std::vector<uint64_t> vector1 = {1, 3, 5, 7, 6, 4, 2, 0};
  std::sort(vector1.begin(), vector1.end());
  std::for_each(vector1.begin(), vector1.end(), f);
  std::cout << std::endl;

  std::vector<uint64_t> vector2 = {1, 3, 5, 7, 6, 4, 2, 0};
  std::sort(vector2.rbegin(), vector2.rend());
  std::for_each(vector2.begin(), vector2.end(), f);
  std::cout << std::endl;
}
