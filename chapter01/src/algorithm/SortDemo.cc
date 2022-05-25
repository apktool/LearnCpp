//
// Created by li on 4/26/22.
//

#include "SortDemo.h"

void SortDemo::testSort() {
  std::vector<int> vector;
  vector.push_back(3);
  vector.push_back(1);
  vector.push_back(2);

  std::sort(vector.begin(), vector.end(), std::greater<int>());

  for (const auto& item : vector) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
}

void SortDemo::testRandomShuffle() {
  std::vector<int> vector;
  for (int i = 0; i < 10; i++) {
    vector.push_back(i);
  }
}

/*
 * 必须有序，且同升/降序
 */
void SortDemo::testMerge() {
  std::vector<int> vector1;
  vector1.push_back(1);
  vector1.push_back(3);
  vector1.push_back(5);

  std::vector<int> vector2;
  vector2.push_back(2);
  vector2.push_back(4);
  vector2.push_back(6);

  std::vector<int> vector;
  vector.resize(vector1.size() + vector2.size());
  std::merge(vector1.begin(),
             vector1.end(),
             vector2.begin(),
             vector2.end(),
             vector.begin());

  for (const auto& item : vector) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
}

void SortDemo::testReverse() {
  std::vector<int> vector;
  vector.push_back(1);
  vector.push_back(3);
  vector.push_back(5);

  std::reverse(vector.begin(), vector.end());

  for (const auto& item : vector) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
}
