//
// Created by li on 4/11/22.
//

#ifndef CHAPTER01_CLASSDEMO_H
#define CHAPTER01_CLASSDEMO_H

#include "iostream"
#include "string"

/**
 * C++编译器至少给一个类添加3个函数
 * 1. 默认构造函数（无参，函数体为空）
 * 2. 默认析构函数（无参，函数体为空）
 * 3. 默认拷贝构造函数，对属性进行值拷贝
 */

class ClassDemo {
 public:
  virtual ~ClassDemo();

  ClassDemo();

  explicit ClassDemo(std::string name);

  ClassDemo(std::string name, std::string className);

  std::string getName() const;

  void setName(std::string name);

  void setClassName();

 protected:
  std::string className;

 private:
  std::string name;
};

class SubClassDemo : public ClassDemo {
 public:
  std::string getClassName();
};

#endif //CHAPTER01_CLASSDEMO_H
