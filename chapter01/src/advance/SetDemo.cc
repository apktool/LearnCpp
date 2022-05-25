//
// Created by li on 4/25/22.
//

#include "SetDemo.h"

void printI(std::set<int>& set) {
  for (std::set<int>::iterator it = set.begin(); it != set.end(); it++) {
    std::cout << *it << " ";
  }
  std::cout << std::endl;
}

void printA(std::multiset<int>& set) {
  for (const auto& item : set) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
}

void SetDemo::testBasic() {
  std::set<int> set1;
  set1.insert(1);
  set1.insert(2);
  set1.insert(1);

  printI(set1);

  std::cout << "set: size " << set1.size() << std::endl;

  std::set<int> set2;
  set2.insert(100);
  set2.insert(200);
  set2.insert(100);

  // -------------------

  set1.swap(set2);
  printI(set1);
  printI(set2);

  // -------------------

  std::set<int>::iterator it = set1.begin();
  set1.erase(it);
  printI(set1);
  set1.erase(200);
  printI(set1);
}

void SetDemo::testMedium() {
  std::set<int> set1;
  set1.insert(3);
  set1.insert(2);
  set1.insert(1);

  std::set<int>::iterator it1 = set1.find(-1);
  std::cout << *it1 << std::endl;

  std::cout << "set: size " << set1.size() << std::endl;
  std::cout << "set: count " << set1.count(1) << std::endl;

  std::pair<std::set<int>::iterator, bool> res1 = set1.insert(4);
  std::cout << "set: " << *res1.first << " " << res1.second << std::endl;

  // --------------------------

  std::multiset<int> set2;
  set2.insert(2);
  set2.insert(1);
  set2.insert(2);
  printA(set2);
}
