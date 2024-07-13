//
// Created by li on 4/26/22.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include "ReplaceDemo.h"

void ReplaceDemo::testCopy() {
  std::vector<int> vector1;
  for (int i = 0; i < 10; ++i) {
    vector1.push_back(i);
  }

  std::vector<int> vector2;
  vector2.resize(vector1.size());

  std::copy(vector1.begin(), vector1.end(), vector2.begin());

  for (int i = 0; i < vector2.size(); i++) {
    std::cout << vector2[i] << " ";
  }
  std::cout << std::endl;
}

void ReplaceDemo::testReplace() {
  std::vector<int> vector;
  for (int i = 0; i < 10; ++i) {
    vector.push_back(i);
  }

  std::replace(vector.begin(), vector.end(), 0, -1);

  for (const auto& item : vector) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
}

class ReplaceIfCompare {
public:
  bool operator()(int val) {
    return val > 5;
  }
};

void ReplaceDemo::testReplaceIf() {
  std::vector<int> vector;
  for (int i = 0; i < 10; ++i) {
    vector.push_back(i);
  }

  std::replace_if(vector.begin(), vector.end(), ReplaceIfCompare(), 99);

  for (const auto& item : vector) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
}

void ReplaceDemo::testSwap() {
  std::vector<int> vector1;
  for (int i = 0; i < 10; ++i) {
    vector1.push_back(i);
  }

  std::vector<int> vector2;
  for (int i = 10; i >= 0; --i) {
    vector2.push_back(i);
  }

  printf("%p %p\n", &vector1, &vector2);
  std::swap(vector1, vector2);
  printf("%p %p\n", &vector1, &vector2);

  for (const auto& item : vector1) {
    std::cout << item << " ";
  }
  std::cout << std::endl;

  for (const auto& item : vector2) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
}