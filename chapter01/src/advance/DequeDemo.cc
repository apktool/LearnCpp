//
// Created by li on 4/24/22.
//

#include "DequeDemo.h"

void printI(std::deque<int>& d) {
  for (std::deque<int>::iterator it = d.begin(); it != d.end(); it++) {
    std::cout << *it << " ";
  }
  std::cout << std::endl;
}

void printT(std::deque<int>& d) {
  for (int i = 0; i < d.size(); ++i) {
    std::cout << d[i] << " ";
  }
  std::cout << std::endl;
}

void DequeDemo::testBasic() {
  std::deque<int> deque1;
  for (int i = 0; i < 10; i++) {
    deque1.push_back(i);
  }
  printI(deque1);

  // ----------------

  std::deque<int> deque2 = deque1;
  printI(deque2);

  // ----------------

  std::deque<int> deque3;
  deque3.assign(deque1.begin(), deque1.end());
  printI(deque3);

  // ----------------

  std::deque<int> deque4;
  for (int i = 0; i < 10; i++) {
    deque4.push_back(i);
  }
  std::cout << "deque4 [isEmpty]: " << deque4.empty() << " [size]: "
            << deque4.size() << std::endl;

  // ----------------
}

void DequeDemo::testMedium() {
  std::deque<int> deque1;
  deque1.push_back(3);
  deque1.push_front(2);
  deque1.push_back(4);
  deque1.push_front(1);

  std::cout << "deque1 [front]: " << deque1.front() << " [end]: "
            << deque1.back() << std::endl;

  printI(deque1);

  deque1.pop_back();
  deque1.pop_front();
  printI(deque1);

  deque1.insert(deque1.begin(), 1);
  printT(deque1);

  deque1.erase(deque1.begin() + 3);
  printT(deque1);

  deque1.clear();
  printT(deque1);

  // ----------------
}
