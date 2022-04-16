//
// Created by li on 4/16/22.
//

#include "InheritDemo.h"

InheritDemo::InheritDemo() {}

InheritDemo::InheritDemo(const string &publicString, const string &protectedString, const string &privateString)
        : publicString(publicString), protectedString(protectedString), privateString(privateString) {}

void InheritDemo::say() {
    std::cout << "publicString: " << this->publicString << std::endl;
    std::cout << "protectedString: " << this->protectedString << std::endl;
    std::cout << "privateString: " << this->privateString << std::endl;
}

Inherit1::Inherit1(const string &publicString, const string &protectedString, const string &privateString)
        : InheritDemo(publicString, protectedString, privateString) {}

Inherit1::Inherit1() {

}

Inherit2::Inherit2(const string &publicString, const string &protectedString, const string &privateString)
        : InheritDemo(publicString, protectedString, privateString) {}

Inherit2::Inherit2() {

}
