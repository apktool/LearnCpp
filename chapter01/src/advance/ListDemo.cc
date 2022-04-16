//
// Created by li on 4/25/22.
//

#include "ListDemo.h"

void printI(std::list<int> &list) {
    for (std::list<int>::iterator it = list.begin(); it != list.end(); it++) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

void printA(std::list<int> &list) {
    for (const auto &item: list) {
        std::cout << item << " ";
    }
    std::cout << std::endl;
}

void ListDemo::testBasic() {
    std::list<int> list1;
    list1.push_front(2);
    list1.push_back(3);

    printI(list1);

    // -----------------------

    std::list<int> list2;
    list2.assign(list1.begin(), list1.end());
    printA(list2);

    // -----------------------

    std::list<int> list3;
    for (int i = 0; i < 10; ++i) {
        list3.push_back(i);
    }

    // -----------------------

    std::cout << "list: size " << list3.size() << std::endl;
    list3.resize(5);
    std::cout << "list: size " << list3.size() << std::endl;

    // -----------------------

    std::cout << list3.front() << std::endl;
    std::cout << list3.back() << std::endl;
    std::cout << "------------" << std::endl;
}

void ListDemo::testMedium() {
    std::list<int> list1;
    list1.push_back(1);
    list1.push_back(3);
    std::list<int>::iterator it = list1.begin();
    list1.insert(++it, 2);
    printA(list1);

    list1.erase(it);
    printA(list1);

    list1.remove(2);
    printA(list1);

    list1.clear();
    printA(list1);

    // -----------------

    std::list<int> list2;
    list2.push_back(1);
    list2.push_back(2);
    list2.reverse();
    printA(list2);

    list2.sort([=](int v1, int v2) { return v1 < v2; });
    printA(list2);

    list2.sort([=](int v1, int v2) { return v1 > v2; });
    printA(list2);
}
