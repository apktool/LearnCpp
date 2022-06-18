#include "excpt/exception_demo.h"
#include "ns/ns_demo.h"

int main(int argc, char* argv[]) {
  ExceptionDemo exception_demo;
  exception_demo.testException();

  std::cout << A::i << std::endl;
  std::cout << A::B::i << std::endl;
  std::cout << A::B::f1() << std::endl;
  std::cout << A::B::j << std::endl;
}