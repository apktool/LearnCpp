#include "excpt/exception_demo.h"
#include "ns/ns_demo.h"
#include "inheritance/virtual_demo.h"

int main(int argc, char* argv[]) {
  /**
   * exception
   */
  ExceptionDemo exception_demo;
  exception_demo.testException();

  /**
   * namespace
   */
  std::cout << A::i << std::endl;
  std::cout << A::B::i << std::endl;
  std::cout << A::B::f1() << std::endl;
  std::cout << A::B::j << std::endl;

  /**
   * inheritance
   */
  DI d;
  d.seta(4);
  d.setb(3);
  d.setc(2);
  d.setd(1);
  std::cout << d.GetMa() << std::endl;

  return 0;
}