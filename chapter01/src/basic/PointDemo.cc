//
// Created by li on 4/9/22.
//

#include "PointDemo.h"

void PointDemo::testBasic() {
    int a = 10;
    int *p = &a;

    std::cout << p << std::endl;
    std::cout << *p << std::endl;

    std::cout << "sizeof(int *): " << sizeof(int *) << std::endl;
    std::cout << "sizeof(float *): " << sizeof(float *) << std::endl;
    std::cout << "sizeof(double *): " << sizeof(double *) << std::endl;
    std::cout << "sizeof(char *): " << sizeof(char *) << std::endl;
    std::cout << "sizeof(void *): " << sizeof(void *) << std::endl;
}

void PointDemo::testPoint() {
    // 空指针
    /*
    int *p1 = NULL;
    std::cout << *p1 << std::endl;
    */

    // 野指针
    /*
    int *p2 = (int *) 0x1100;
    std::cout << *p2 << std::endl;
    */

    // 常量指针
    int a = 123;
    const int *p3 = &a;
    std::cout << *p3 << std::endl;

    int b = 234;
    p3 = &b;
    std::cout << *p3 << std::endl;

    // *p3 = 999

    // 指针常量
    int c = 123;
    int *const p4 = &c;
    std::cout << *p4 << std::endl;

    *p4 = 999;
    std::cout << *p4 << std::endl;
    std::cout << c << std::endl;

    // p4 = &a;

    // 常量指针常量
    int d = 123;
    const int *const p5 = &d;
    std::cout << *p5 << std::endl;

    // p5 = &a
    // *p5 = 999
}

void PointDemo::testArray() {
    int arr1[] = {1, 2, 3, 4, 5};
    int *p = arr1;

    while (p != arr1 + sizeof(arr1) / sizeof(int)) {
        std::cout << *p++ << " ";
    }

    std::cout << std::endl;
}

void swap(int *num1, int *num2) {
    int tmp = *num1;
    *num1 = *num2;
    *num2 = tmp;
}

void PointDemo::testFunction() {
    int num1 = 1, num2 = 3;

    std::cout << "num1: " << num1 << "; num2: " << num2 << std::endl;
    ::swap(&num1, &num2);
    std::cout << "num1: " << num1 << "; num2: " << num2 << std::endl;
}