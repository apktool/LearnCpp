//
// Created by li on 4/26/22.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdint>
#include <unordered_map>
#include <numeric>
#include <sstream>
#include "ArithmeticDemo.h"

void ArithmeticDemo::testAccumulate() {
  std::vector<int> vector;
  for (int i = 0; i < 10; ++i) {
    vector.push_back(i);
  }

  int res = std::accumulate(vector.begin(), vector.end(), 0);
  std::cout << "accumulate: res = " << res << std::endl;
}

void ArithmeticDemo::testFill() {
  std::vector<int> vector;
  vector.resize(10);
  std::fill(vector.begin(), vector.end(), -1);

  for (const auto& item : vector) {
    std::cout << item << " ";
  }

  std::cout << std::endl;
}

void ArithmeticDemo::testMapSort() {
  std::unordered_map<uint64_t, std::vector<std::string> > map;
  map[1].push_back("hello");
  map[1].push_back("world");

  map[2].push_back("hi");
  map[2].push_back("c++");

  auto iter = std::max_element(map.begin(), map.end(), [](
                               auto& a,
                               auto& b
                               ) -> bool {
                                 return a.first < b.first;
                               }
      );

  std::stringstream value;
  for (auto& item : iter->second) {
    value << item << ",";
  }
  std::cout << iter->first << ":" << value.str() << std::endl;
}