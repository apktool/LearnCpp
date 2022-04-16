//
// Created by li on 4/10/22.
//

#include "ReferenceDemo.h"

/**
 * 引用的本质是指针常量
 * int *const ref = &a
 */

void ReferenceDemo::testReference() {
    int a = 10;
    int &b = a;

    std::cout << "a: " << a << " " << &a << std::endl;
    std::cout << "b: " << b << " " << &b << std::endl;

    int c = 10;
    // int &d = 10;
    const int &d = 10;
    /*
     * int tmp = 10;
     * int &d = tmp;
     * *
     * c和d的地址本来应该相等，但是却发现并不相等
     * 所以验证了 const 修饰的引用直接赋值的原理如上所述
     */
    std::cout << "c: " << c << " " << &c << std::endl;
    std::cout << "d: " << d << " " << &d << std::endl;
}