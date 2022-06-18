#include "exception_demo.h"

namespace {
void test1() {
  throw std::runtime_error("Test Runtime Error -> test1");
}

void test2() {
  throw CustomException("Test CustomException Error -> test2");
}
}  // namespace

void ExceptionDemo::testException() {
  try {
    test1();
  } catch (std::runtime_error e) {
    std::cerr << "ERROR: " << e.what() << std::endl;
  }

  try {
    test2();
  } catch (CustomException e) {
    std::cerr << "ERROR: " << e.what() << std::endl;
  }
}

CustomException::CustomException(const std::string& s) : runtime_error(s), s_(s) {
}
