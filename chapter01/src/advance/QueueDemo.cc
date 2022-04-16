//
// Created by li on 4/25/22.
//

#include "QueueDemo.h"

void QueueDemo::testBasic() {
    std::queue<int> queue1;

    for (int i = 0; i < 10; ++i) {
        queue1.push(i);
    }

    while (!queue1.empty()) {
        std::cout << queue1.front() << " ";
        queue1.pop();
    }
    std::cout << std::endl;
}
