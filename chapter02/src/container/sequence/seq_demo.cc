// #pragma once
// Created by li on 2022-05-28.
#include <cstdint>
#include "seq_demo.h"

namespace {
template<typename T>
void print(T t) {
  for (auto& v : t) {
    std::cout << v << " ";
  }
  std::cout << std::endl;
}
}

void SeqDemo::testCommon() {
  std::vector<uint64_t> vector1 = {1, 2, 3, 4};
  std::vector<uint64_t> vector2 = {5, 6, 7, 8, 9};
  print(vector1);

  vector1.swap(vector2);
  print(vector1);
  print(vector2);

  std::list<uint64_t> list1;
  list1.assign(vector1.begin(), vector1.end());
  print(list1);
}

void SeqDemo::testVector() {
  std::vector<uint64_t> vector1 = {1, 2, 3, 4};

  for (std::vector<uint64_t>::const_iterator it = vector1.cbegin(); it != vector1.cend(); it++) {
    std::cout << *it << " ";
  }
  std::cout << std::endl;

  for (std::vector<uint64_t>::reverse_iterator it = vector1.rbegin(); it != vector1.rend(); it++) {
    std::cout << *it << " ";
  }
  std::cout << std::endl;

  std::vector<uint64_t> vector2(10, 0);
  print(vector2);

  std::vector<uint64_t> vector3;
  vector3.emplace_back(1);
  vector3.push_back(2);
  vector3.emplace_back(3);
  print(vector3);

  vector3.insert(vector3.end(), {3, 2, 1});
  print(vector3);

  std::cout << "capacity: " << vector3.capacity() << std::endl;
  std::cout << "size: " << vector3.size() << std::endl;
  vector3.resize(10);
  std::cout << "after resize, capacity: " << vector3.capacity() << std::endl;
  std::cout << "after resize, size: " << vector3.size() << std::endl;
}

void SeqDemo::testDeque() {
  std::deque<uint64_t> deque1 = {1, 2, 3, 4, 5};
  print(deque1);
}

void SeqDemo::testList() {
  std::list<uint64_t> list1 = {1, 2, 3, 4, 5};
  print(list1);

  std::list<uint64_t> list2(10, 1);
  print(list2);
}

void SeqDemo::testForwardList() {
  std::forward_list<uint64_t> flist1 = {1, 2, 3, 4, 5};
  print(flist1);

  std::forward_list<uint64_t> flist2(10, 2);
  print(flist2);
}

void SeqDemo::testArray() {
  std::array<uint64_t, 10> array1 = {1, 2, 3, 4, 5};
  print(array1);
}

void SeqDemo::testString() {
  std::string str1 = "hello world";
  print(str1);

  std::string str2(str1, 6, str1.size());
  print(str2);

  std::string str3 = str1.substr(6, str1.size());
  print(str3);

  std::string str4;
  str4.assign(str1, 0, 6);
  print(str4);

  str4.insert(5, str3);
  print(str4);

  str4.append(", hello c++");
  print(str4);

  size_t pos1 = str4.find("hello");
  std::cout << pos1 << std::endl;

  size_t pos2 = str4.rfind("hello");
  std::cout << pos2 << std::endl;

  size_t pos3 = str4.find_first_of("hello");
  std::cout << pos3 << std::endl;

  size_t pos4 = str4.find_first_not_of("hello");
  std::cout << pos4 << std::endl;

  std::string num1 = "3.14";
  double d = std::stod(num1);
  std::cout << d << std::endl;

  std::string num2 = "1";
  int i = std::stoi(num2);
  std::cout << i << std::endl;
}