//
// Created by li on 4/10/22.
//

#ifndef CHAPTER01_STRUCTDEMO_H
#define CHAPTER01_STRUCTDEMO_H

#include <string>

struct Student {
  int id;
  std::string name;
  int age;
};

class StructDemo {
 public:
  void testStruct1();

  void testStruct2();

  void testStructArray();

  void testStructPoint();
};

#endif //CHAPTER01_STRUCTDEMO_H
