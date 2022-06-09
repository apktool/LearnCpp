#include <iostream>

class CstDemo {
 public:
  CstDemo(int value) : value_(value) {
    std::cout << "Constructor" << std::endl;
  }

  CstDemo(CstDemo& cst) : value_(cst.value_) {
    std::cout << "Copy Constructor" << std::endl;
  }

  CstDemo& operator=(CstDemo& cst) {
    std::cout << "Copy Assignment operator" << std::endl;
    return *this;
  }

  CstDemo(CstDemo&& cst) : value_(cst.value_) {
    std::cout << "Move Constructor" << std::endl;
  }

  CstDemo& operator=(CstDemo&& cst) {
    value_ = cst.value_;
    std::cout << "Move Assignment operator" << std::endl;
    return *this;
  }
 private:
  int value_;
};
