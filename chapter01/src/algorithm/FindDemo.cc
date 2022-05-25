//
// Created by li on 4/26/22.
//

#include "FindDemo.h"

void FindDemo::testFind() {
  std::vector<int> vector;
  for (int i = 0; i < 10; ++i) {
    vector.push_back(i);
  }

  std::vector<int>::iterator it = std::find(vector.begin(), vector.end(), 9);
  int pos = it != vector.end() ? *it : -1;
  std::cout << "find: pos=" << pos << std::endl;
}

class FindIfCompare {
 public:
  bool operator()(int val) {
    return val > 5;
  }
};

void FindDemo::testFindIf() {
  std::vector<int> vector;
  for (int i = 0; i < 10; ++i) {
    vector.push_back(i);
  }

  std::vector<int>::iterator
      it = std::find_if(vector.begin(), vector.end(), FindIfCompare());
  int pos = it != vector.end() ? *it : -1;
  std::cout << "find_if: pos=" << pos << std::endl;
}

void FindDemo::testAdjacentFind() {
  std::vector<int> vector;
  vector.push_back(0);
  vector.push_back(2);
  vector.push_back(2);
  vector.push_back(0);

  std::vector<int>::iterator
      it = std::adjacent_find(vector.begin(), vector.end());
  int pos = it != vector.end() ? *it : -1;
  std::cout << "adjacent_find: pos=" << pos << std::endl;
}

void FindDemo::testBinarySearch() {
  std::vector<int> vector;
  for (int i = 0; i < 10; ++i) {
    vector.push_back(i);
  }

  bool res = std::binary_search(vector.begin(), vector.end(), 5);
  std::cout << "binary_search: res=" << res << std::endl;
}
