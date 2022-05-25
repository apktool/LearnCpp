//
// Created by li on 4/3/22.
//

#include "AppBasic.h"

int main(int argc, char **argv) {
    /**
     * DataType
     */
    std::cout << "DataType" << std::endl;
    DataType dataType;
    dataType.testInteger();
    dataType.testFloat();
    dataType.testDouble();
    dataType.testString();
    dataType.testBoolean();
    std::cout << "end - DataType" << std::endl;

    /**
     * Process Structure
     */
    std::cout << "ProcessStructure" << std::endl;
    ProcessStructure processStructure;
    processStructure.testIf();
    processStructure.testWhile();
    processStructure.testFor();
    processStructure.testSwitch();
    std::cout << "end - ProcessStructure" << std::endl;

    /**
     * Array
     */
    std::cout << "ArrayDemo" << std::endl;
    ArrayDemo arrayDemo;
    arrayDemo.testOneDimArray();
    arrayDemo.testTwoDimArray();
    std::cout << "end - ArrayDemo" << std::endl;

    /**
     * Function
     */
    std::cout << "FunctionDemo" << std::endl;
    FunctionDemo functionDemo;
    functionDemo.passByValue();
    functionDemo.passByReference();
    functionDemo.passByAddress();
    std::cout << "end FunctionDemo" << std::endl;

    /**
     * Point
     */
    std::cout << "PointDemo" << std::endl;
    PointDemo pointDemo;
    pointDemo.testBasic();
    pointDemo.testPoint();
    pointDemo.testArray();
    pointDemo.testFunction();
    std::cout << "end - PointDemo" << std::endl;

    /**
     * Reference
     */
    std::cout << "Reference" << std::endl;
    ReferenceDemo referenceDemo;
    referenceDemo.testReference();

    /**
     * EnumDemo
     */
  std::cout << "Enumerate" << std::endl;
  EnumDemo enumDemo;
  enumDemo.testUnscopedEnum();
  enumDemo.testScopedEnum();

  return 0;
}