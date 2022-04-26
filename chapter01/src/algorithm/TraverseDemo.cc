//
// Created by li on 4/26/22.
//

#include "TraverseDemo.h"

void printForEach(int val) {
    std::cout << val << " ";
}

class PrintForEach {
public:
    void operator()(int val) {
        std::cout << val << " ";
    }
};

void TraverseDemo::testForEach() {
    std::vector<int> vector;
    for (int i = 0; i < 10; ++i) {
        vector.push_back(i);
    }

    std::for_each(vector.begin(), vector.end(), printForEach);
    std::cout << std::endl;

    std::for_each(vector.begin(), vector.end(), PrintForEach());
    std::cout << std::endl;
}

class MultiTransform {
public:
    int operator()(int val) {
        return val * 100;
    }
};

void TraverseDemo::testTransform() {
    std::vector<int> vector1;
    for (int i = 0; i < 10; ++i) {
        vector1.push_back(i);
    }

    std::vector<int> vector2;
    vector2.resize(vector1.size());
    std::transform(vector1.begin(), vector1.end(), vector2.begin(), MultiTransform());

    std::for_each(vector2.begin(), vector2.end(), PrintForEach());
    std::cout << std::endl;
}
