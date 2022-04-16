//
// Created by li on 4/16/22.
//

#include "TemplateDemo.h"

// 函数模板
template<typename T>
void swap(T &a, T &b) {
    T tmp = a;
    a = b;
    b = tmp;
}

// 类模板
template<class T>
class Node {
public:
    Node(T data, Node *next) : data(data), next(next) {}

    inline T getData() {
        return data;
    }

private:
    T data;
    Node *next;
};

void TemplateDemo::testFunction() {
    int a = 1, b = 99;
    std::cout << "a: " << a << "\t" << "b: " << b << std::endl;
    swap(a, b);
    std::cout << "a: " << a << "\t" << "b: " << b << std::endl;
}

void TemplateDemo::testClass() {
    Node<int> node(1, NULL);
    std::cout << "data: " << node.getData() << std::endl;
}
