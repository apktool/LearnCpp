// #pragma once
// Created by li on 2022-05-28.
#include "adaptor_demo.h"

void AdaptorDemo::testStack() {
  std::stack<u_int64_t> stack1;
  stack1.push(1);
  stack1.push(2);
  stack1.push(3);

  while (!stack1.empty()) {
    std::cout << stack1.top() << " ";
    stack1.pop();
  }
  std::cout << std::endl;
}

void AdaptorDemo::testQueue() {
  std::queue<u_int64_t> queue1;
  queue1.push(1);
  queue1.push(2);
  queue1.push(3);

  while (!queue1.empty()) {
    std::cout << queue1.front() << " ";
    queue1.pop();
  }
  std::cout << std::endl;
}