//
// Created by li on 4/26/22.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include "AggDemo.h"

void AggDemo::testCount() {
  std::vector<int> vector;

  for (int i = 0; i < 10; ++i) {
    vector.push_back(i);
  }
  for (int i = 10; i >= 0; --i) {
    vector.push_back(i);
  }

  int res = std::count(vector.begin(), vector.end(), 5);
  std::cout << "count: res=" << res << std::endl;
}

class CountIfCompare {
public:
  bool operator()(int val) {
    return val > 5;
  }
};

void AggDemo::testCountIf() {
  std::vector<int> vector;

  for (int i = 0; i < 10; ++i) {
    vector.push_back(i);
  }

  int res = std::count_if(vector.begin(), vector.end(), CountIfCompare());
  std::cout << "count_if: res=" << res << std::endl;
}