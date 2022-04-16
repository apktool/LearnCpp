//
// Created by li on 4/26/22.
//

#ifndef CHAPTER01_FUNCTIONALDEMO_H
#define CHAPTER01_FUNCTIONALDEMO_H

#include "iostream"
#include "algorithm"
#include "functional"

class FuncCompare {
public:
    bool operator()(int v) {
        return v > 1;
    }

    bool operator()(int v1, int v2) {
        return v1 > v2;
    }
};

class FunctionalDemo {
public:
    void testBasic();

    void testMedium();
};


#endif //CHAPTER01_FUNCTIONALDEMO_H
