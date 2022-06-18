#include <iostream>
#include <string>
#include <exception>

class ExceptionDemo {
 public:
  void testException();
};

class CustomException : public std::runtime_error {
 public:
  CustomException(const std::string& s);

 private:
  std::string s_;
};
