//
// Created by li on 4/16/22.
//

#include "AppMedium.h"

int main(int argc, char *argv[]) {
    /**
     * Struct
     */
    std::cout << "StructDemo" << std::endl;
    StructDemo structDemo;
    structDemo.testStruct1();
    structDemo.testStruct2();
    structDemo.testStructArray();
    structDemo.testStructPoint();

    /**
     * Function
     */
    std::cout << "FunctionDemo" << std::endl;
    FunctionExamp functionExamp;
    functionExamp.testDefaultParams();
    functionExamp.testPlaceholders();

    /**
     * Class
     */
    std::cout << "ClassDemo" << std::endl;
    ClassDemo classDemo1("hello c++");
    std::cout << classDemo1.getName() << std::endl;
    ClassDemo classDemo2 = ClassDemo("hello c++");
    std::cout << classDemo2.getName() << std::endl;
    ClassDemo classDemo3("", "");
    std::cout << classDemo3.getName() << std::endl;
    SubClassDemo subClassDemo;
    std::cout << subClassDemo.getClassName() << std::endl;

    /**
     * Inherit
     */
    std::cout << "InheritDemo" << std::endl;
    InheritDemo inheritDemo("public", "protected", "private");
    inheritDemo.say();
    Inherit1 inherit1("public inherit1", "protected inherit1", "private inherit1");
    inherit1.say();
    Inherit2 inherit2("public inherit2", "protected inherit2", "private inherit2");
    inherit2.say();

    /**
     * Virtual
     */
    std::cout << "VirtualDemo" << std::endl;
    Virtual1 virtual1;
    virtualFunc(virtual1);

    Virtual2 virtual2;
    virtualFunc(virtual2);

    /**
     * File
     */
    std::cout << "FileDemo" << std::endl;
    FileDemo fileDemo;
    fileDemo.write("/tmp/a.out");
    fileDemo.read("/tmp/a.out");

    /**
     * Template
     */
    std::cout << "TemplateDemo" << std::endl;
    TemplateDemo templateDemo;
    templateDemo.testFunction();
    templateDemo.testClass();

    return 0;
}
