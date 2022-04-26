//
// Created by li on 4/26/22.
//

#include "ArithmeticDemo.h"

void ArithmeticDemo::testAccumulate() {
    std::vector<int> vector;
    for (int i = 0; i < 10; ++i) {
        vector.push_back(i);
    }

    int res = std::accumulate(vector.begin(), vector.end(), 0);
    std::cout << "accumulate: res = " << res << std::endl;
}

void ArithmeticDemo::testFill() {
    std::vector<int> vector;
    vector.resize(10);
    std::fill(vector.begin(), vector.end(), -1);

    for (const auto &item: vector) {
        std::cout << item << " ";
    }

    std::cout << std::endl;
}
