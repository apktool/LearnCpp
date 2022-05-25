//
// Created by li on 4/11/22.
//

#include "ClassDemo.h"

/**
 * this指针的本质是指针常量
 */

// 默认构造方法
ClassDemo::ClassDemo() {
  std::cout << "construct code" << std::endl;
}

ClassDemo::~ClassDemo() {
  std::cout << "deconstruct code" << std::endl;
}

// 带参构造方法
ClassDemo::ClassDemo(std::string name) {
  this->name = name;
}

// 初始化列表
ClassDemo::ClassDemo(std::string a, std::string b)
    : name("hello java"), className(b) {

}

std::string ClassDemo::getName() const {
  return name;
}

void ClassDemo::setName(std::string name) {
  this->name = name;
}

void ClassDemo::setClassName() {
  className = name + ", hello python";
}

std::string SubClassDemo::getClassName() {
  setName("hello c++");
  setClassName();

  return this->className;
}
