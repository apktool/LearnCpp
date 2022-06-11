#include <iostream>
#include <string>

class RefDemo {
 public:
  RefDemo(std::string);

  void ref(RefDemo&);

  void ref(RefDemo&&);

  // 左值引用成员函数
  // ref.test();
  RefDemo test(std::string&)&;

  // 右值引用成员函数
  // std::move(ref).test();
  RefDemo test(std::string&)&&;

  // 左值引用成员函数
  // ref = ref1;
  RefDemo operator=(const RefDemo&)&;

  // 右值引用成员函数
  // std::move(ref) = ref1;
  RefDemo operator=(RefDemo&)&&;

  inline const std::string getStr() {
    return str_;
  }
 private:
  std::string str_;
};
