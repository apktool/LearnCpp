//
// Created by li on 4/16/22.
//

#include "StringDemo.h"

void StringDemo::testBasic() {
    const char *str1 = "Hello world";

    std::string str2(str1);
    std::cout << str2 << std::endl;

    std::string str3;
    str3.assign(str1, 5);
    std::cout << str3 << std::endl;

    std::string str4;
    str4.assign(str2);
    std::cout << str4 << std::endl;

    std::string str5;
    str5.append(str3).append(" ").append(str2);
    std::cout << str5 << std::endl;

    std::string str6 = "hello c++";
    str6.insert(0, "-> ");
    std::cout << str6 << std::endl;

    str6.erase(0, 3);
    std::cout << str6 << std::endl;

    std::string str7 = "hello@cpp.com";
    std::cout << str7.substr(0, str7.find("@")) << std::endl;
}

void StringDemo::testMedium() {
    std::string str1 = "Hello world";

    size_t pos1 = str1.find("world");
    std::cout << pos1 << std::endl;

    size_t pos2 = str1.rfind("Hello");
    std::cout << pos2 << std::endl;

    str1.replace(6, str1.length(), "C++");
    std::cout << str1 << std::endl;

    std::string s1 = "abc";
    std::string s2 = "bcd";
    std::cout << s1.compare(s2) << std::endl;
    std::cout << s2.compare(s1) << std::endl;

    for (int i = 0; i < str1.length(); i++) {
        std::cout << str1[i] << "(" << str1.at(i) << ") ";
    }
    std::cout << std::endl;
}
