//
// Created by li on 4/9/22.
//

#include "DataType.h"

void DataType::testInteger() {
  int int1 = 1;
  std::cout << int1 << "\t" << sizeof(int1) << std::endl;

  uint uint1 = 1;
  std::cout << uint1 << "\t" << sizeof(uint1) << std::endl;

  uint16_t uint16 = 1;
  std::cout << uint16 << "\t" << sizeof(uint16) << std::endl;

  uint32_t uint32 = 1;
  std::cout << uint32 << "\t" << sizeof(uint32) << std::endl;

  int a1 = 1, a2 = 2;
  std::cout << a1 + a2 << std::endl;
  std::cout << a1 - a2 << std::endl;
  std::cout << a1 * a2 << std::endl;
  std::cout << a1 / a2 << std::endl;
  std::cout << a1 % a2 << std::endl;
}

void DataType::testFloat() {
  float float1 = 1.0f;
  std::cout << float1 << "\t" << sizeof(float1) << std::endl;
}

void DataType::testDouble() {
  double double1 = 1.0;
  std::cout << double1 << "\t" << sizeof(double1) << std::endl;
}

void DataType::testString() {
  char* str1 = "Hello world";
  std::cout << str1 << "\t" << sizeof(str1) << std::endl;

  char str2[] = "Hello world";
  std::cout << str2 << "\t" << sizeof(str2) << std::endl;

  std::string str3 = "Hello world";
  std::cout << str3 << "\t" << sizeof(str3) << std::endl;
}

void DataType::testBoolean() {
  bool bool1 = true;
  std::cout << bool1 << "\t" << sizeof(bool1) << std::endl;

  bool bool2 = 1;
  std::cout << bool2 << "\t" << sizeof(bool2) << std::endl;

  bool bool3 = 0;
  std::cout << bool3 << "\t" << sizeof(bool3) << std::endl;

  bool bool4 = true && false;
  std::cout << bool4 << std::endl;

  bool bool5 = true & false;
  std::cout << bool5 << std::endl;

  bool bool6 = true || false;
  std::cout << bool6 << std::endl;
}
