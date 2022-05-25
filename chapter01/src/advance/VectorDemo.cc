//
// Created by li on 4/16/22.
//

#include "VectorDemo.h"

void print(int v) {
  std::cout << v << " ";
}

void printI(std::vector<int>& vector) {
  for (std::vector<int>::iterator it = vector.begin(); it != vector.end();
       it++) {
    std::cout << *it << " ";
  }
  std::cout << std::endl;
}

void printA(std::vector<int>& vector) {
  for (auto& it : vector) {
    std::cout << it << " ";
  }
  std::cout << std::endl;
}

void VectorDemo::testBasic() {
  std::vector<int> vector;

  for (int i = 0; i < 10; ++i) {
    vector.push_back(10 - i);
  }

  std::vector<int>::iterator itBegin = vector.begin();
  std::vector<int>::iterator itEnd = vector.end();

  while (itBegin != itEnd) {
    std::cout << *itBegin++ << " ";
  }
  std::cout << std::endl;

  // ---------------

  for (std::vector<int>::iterator it = vector.begin(); it != vector.end();
       it++) {
    std::cout << *it << " ";
  }
  std::cout << std::endl;

  // ---------------

  for (auto& item : vector) {
    std::cout << item << " ";
  }
  std::cout << std::endl;

  // ---------------

  std::for_each(vector.begin(), vector.end(), print);
  std::cout << std::endl;

  // ---------------

  std::cout << "vector.at: " << vector.at(0) << std::endl;

  std::cout << "vector.front: " << vector.front() << std::endl;
}

void VectorDemo::testMedium() {
  std::vector<int> vector1;
  for (int i = 0; i < 10; ++i) {
    vector1.push_back(i);
  }

  std::cout << vector1.capacity() << " - " << vector1.size() << std::endl;

  vector1.resize(16, -1);
  std::cout << vector1.capacity() << " - " << vector1.size() << std::endl;
  printI(vector1);

  // ---------------

  vector1.resize(5, -1);
  std::cout << vector1.capacity() << " - " << vector1.size() << std::endl;
  printI(vector1);

  // ---------------

  std::vector<int> vector2;
  vector1.assign(5, 99);
  printI(vector2);

  // ---------------

  std::vector<int> vector3;
  vector3.push_back(1);
  vector3.push_back(2);
  vector3.push_back(3);
  vector3.push_back(4);
  vector3.pop_back();
  vector3.insert(vector3.begin(), 2, 0);
  vector3.erase(vector3.begin(), vector3.begin() + 1);
  printA(vector3);

  // ---------------

  std::vector<int> vector4;
  vector4.push_back(1);
  vector4.push_back(2);
  vector4.push_back(3);

  std::vector<int> vector5;
  vector5.push_back(9);
  vector5.push_back(8);
  vector5.push_back(7);

  printI(vector4);
  printI(vector5);
  vector4.swap(vector5);
  printI(vector4);
  printI(vector5);

  // std::vector<int>(vector5) 匿名对象
  std::cout << "vector5 [capacity]: " << vector5.capacity() << " [size]: "
            << vector5.size() << std::endl;
  vector5.resize(1);
  std::cout << "vector5 [capacity]: " << vector5.capacity() << " [size]: "
            << vector5.size() << std::endl;
  std::vector<int>(vector5).swap(vector5);
  std::cout << "vector5 [capacity]: " << vector5.capacity() << " [size]: "
            << vector5.size() << std::endl;

  // ---------------

  std::vector<int> vector6;
  std::cout << "vector6 [capacity]: " << vector6.capacity() << " [size]: "
            << vector6.size() << std::endl;
  vector6.reserve(3);
  std::cout << "vector6 [capacity]: " << vector6.capacity() << " [size]: "
            << vector6.size() << std::endl;
  vector6.resize(3);
  std::cout << "vector6 [capacity]: " << vector6.capacity() << " [size]: "
            << vector6.size() << std::endl;
}
