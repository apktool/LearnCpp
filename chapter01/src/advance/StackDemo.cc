//
// Created by li on 4/25/22.
//

#include "StackDemo.h"

void StackDemo::testBasic() {
  std::stack<int> stack1;

  for (int i = 0; i < 10; ++i) {
    stack1.push(i);
  }

  std::cout << "stack: size " << stack1.size() << std::endl;

  while (!stack1.empty()) {
    std::cout << stack1.top() << " ";
    stack1.pop();
  }
  std::cout << std::endl;

  std::cout << "stack: size " << stack1.size() << std::endl;
}
