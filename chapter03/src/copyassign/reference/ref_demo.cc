#include "ref_demo.h"

RefDemo::RefDemo(std::string str) {
  this->str_ = str;
}

void RefDemo::ref(RefDemo& ref) {
  std::cout << "-> void ref(RefDemo&)" << std::endl;
}

void RefDemo::ref(RefDemo&& ref) {
  std::cout << "-> void ref(RefDemo&&)" << std::endl;
}

RefDemo RefDemo::test(std::string& ref)& {
  std::cout << "-> RefDemo test(string&)&" << std::endl;
  this->str_ = ref;
  return *this;
}

RefDemo RefDemo::test(std::string& ref)&& {
  std::cout << "-> RefDemo test(string&)&&" << std::endl;
  this->str_ = ref;
  return *this;
}

RefDemo RefDemo::operator=(const RefDemo& ref)& {
  std::cout << "-> RefDemo operator=(RefDemo&)&" << std::endl;
  this->str_ = ref.str_;
  return *this;
}

RefDemo RefDemo::operator=(RefDemo& ref)&& {
  std::cout << "-> RefDemo operator=(RefDemo&)&&" << std::endl;
  this->str_ = ref.str_;
  return *this;
}