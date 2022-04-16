//
// Created by li on 4/9/22.
//

#include "ProcessStructure.h"

void ProcessStructure::testIf() {
    std::random_device rd;

    int num = rd();
    bool bool1 = num > 0;
    if (bool1) {
        std::cout << "true: " << num << std::endl;
    } else {
        std::cout << "false: " << num << std::endl;
    }
}

void ProcessStructure::testWhile() {
    int num = 10;
    while (num-- != 0) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    while (num++ < 10) {
        if (num % 2 == 0) {
            continue;
        }
        std::cout << num << " ";
    }

    std::cout << std::endl;
}

void ProcessStructure::testFor() {
    std::string str1 = "hello world";

    for (char ch: str1) {
        std::cout << ch << " ";
    }
    std::cout << std::endl;

    for (int i = 0; i < str1.length(); i++) {
        std::cout << str1[i] << " ";
    }
    std::cout << std::endl;

    for (auto ch: str1) {
        if (ch == ' ') {
            break;
        }
        std::cout << ch << " ";
    }
    std::cout << std::endl;
}

void ProcessStructure::testSwitch() {
    std::random_device rd;
    std::int16_t flag = rd() > 0 ? 1 : -1;

    switch (flag) {
        case 1:
            std::cout << flag << std::endl;
            break;
        default:
            std::cout << "Nothing" << std::endl;
            break;
    }
}