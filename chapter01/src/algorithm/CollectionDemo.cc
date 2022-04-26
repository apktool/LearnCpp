//
// Created by li on 4/26/22.
//

#include "CollectionDemo.h"

void CollectionDemo::testIntersection() {
    std::vector<int> vector1;
    vector1.push_back(1);
    vector1.push_back(2);
    vector1.push_back(3);

    std::vector<int> vector2;
    vector2.push_back(2);
    vector2.push_back(3);
    vector2.push_back(4);

    std::vector<int> vector;
    vector.resize(std::min(vector1.size(), vector2.size()));
    std::vector<int>::iterator it = std::set_intersection(
            vector1.begin(), vector1.end(), vector2.begin(), vector2.end(), vector.begin()
    );

    for (auto itr = vector.begin(); itr < it; ++itr) {
        std::cout << *itr << " ";
    }
    std::cout << std::endl;
}

void CollectionDemo::testUnion() {
    std::vector<int> vector1;
    vector1.push_back(1);
    vector1.push_back(2);
    vector1.push_back(3);

    std::vector<int> vector2;
    vector2.push_back(2);
    vector2.push_back(3);
    vector2.push_back(4);

    std::vector<int> vector;
    vector.resize(vector1.size() + vector2.size());
    std::vector<int>::iterator it = std::set_union(
            vector1.begin(), vector1.end(), vector2.begin(), vector2.end(), vector.begin()
    );

    for (auto itr = vector.begin(); itr < it; ++itr) {
        std::cout << *itr << " ";
    }
    std::cout << std::endl;
}

void CollectionDemo::testDifference() {
    std::vector<int> vector1;
    vector1.push_back(1);
    vector1.push_back(2);
    vector1.push_back(3);

    std::vector<int> vector2;
    vector2.push_back(2);
    vector2.push_back(3);
    vector2.push_back(4);

    std::vector<int> vector;
    vector.resize(vector1.size() + vector2.size());
    std::vector<int>::iterator it = std::set_difference(
            vector1.begin(), vector1.end(), vector2.begin(), vector2.end(), vector.begin()
    );

    for (auto itr = vector.begin(); itr < it; ++itr) {
        std::cout << *itr << " ";
    }
    std::cout << std::endl;
}