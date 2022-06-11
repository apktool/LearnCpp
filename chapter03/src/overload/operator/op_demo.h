#include <iostream>
#include <string>

class OpOverload {
 public:
  OpOverload(uint64_t num);
  OpOverload operator+(const OpOverload& o);
  OpOverload operator-(const OpOverload& o);
  OpOverload operator=(const OpOverload& o);
  bool operator<(const OpOverload& o);
  bool operator<=(const OpOverload& o);
  bool operator==(const OpOverload& o);
  bool operator!=(const OpOverload& o);
  OpOverload operator[](uint64_t num);
  // 前置版本
  OpOverload operator++();
  // 后置版本
  OpOverload operator++(int);

  operator int() const;

 public:
  inline int getNum() {
    return num_;
  }

 private:
  int num_;
};
