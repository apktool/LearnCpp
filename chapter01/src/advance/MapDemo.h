//
// Created by li on 4/26/22.
//

#ifndef CHAPTER01_MAPDEMO_H
#define CHAPTER01_MAPDEMO_H

#include "iostream"
#include "string"
#include "map"

class MapDemo {
public:
    void testBasic();
};

class MapCompare {
public:
    bool operator()(const std::string &a, const std::string &b) const {
        return b.compare(a);
    }
};

#endif //CHAPTER01_MAPDEMO_H
