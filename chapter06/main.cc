#include "parser/Scanner.h"
#include <iostream>
#include <sstream>

/**
 * https://github.com/cpp-tutor/flex-bison-cpp
 * http://static.kancloud.cn/dlover/fpga/2054066#121_flex_14
 * @return
 */

int main(int argc, char* argv[]) {
  std::istringstream is("1+2\n");
  calc::Scanner scanner(is, std::cout);
  calc::Parser parser{ &scanner };
  std::cout.precision(10);
  int res = parser.parse();
  return res;
}