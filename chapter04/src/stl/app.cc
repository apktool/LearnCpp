#include "demo/tuple_test.h"
#include "demo/bitset_test.h"
#include "demo/regex_test.h"
#include "demo/random_test.h"
#include "demo/reference_test.h"

int main(int argc, char* argv[]) {
  std::cout << "------- tuple ---------" << std::endl;
  TupleTest tuple_test;
  tuple_test.testBaisc();

  std::cout << "------- bitset ---------" << std::endl;
  BitsetTest bitset_test;
  bitset_test.testBasic();

  std::cout << "------- regex ---------" << std::endl;
  RegexTest regex_test;
  regex_test.testBasic();

  std::cout << "------- random ---------" << std::endl;
  RandomTest random_test;
  random_test.testBasic();
  random_test.testNormal();
  random_test.testBerno();

  std::cout << "------- reference ---------" << std::endl;
  ReferenceTest reference_test;
  reference_test.testBasic();
}