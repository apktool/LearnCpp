//
// Created by li on 4/16/22.
//

#ifndef CHAPTER01_FILEDEMO_H
#define CHAPTER01_FILEDEMO_H

#include "iostream"
#include "fstream"

class FileDemo {
public:
    void write(std::string filename);

    void read(std::string filename);

private:
    std::string content;
};


#endif //CHAPTER01_FILEDEMO_H
