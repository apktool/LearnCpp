#include <functional>
#include "operator/op_demo.h"

int main(int argc, char* argv[]) {
  /**
   * override operator
   */
  OpOverload op1(1);
  OpOverload op2(2);

  OpOverload op(0);
  op = op1 + op2;
  std::cout << op.getNum() << std::endl;

  op = op1 - op2;
  std::cout << op.getNum() << std::endl;

  std::cout << (op1 < op2) << std::endl;
  std::cout << (op1 <= op2) << std::endl;
  std::cout << (op1 == op2) << std::endl;
  std::cout << (op1 != op2) << std::endl;

  op = op[99];
  std::cout << op.getNum() << std::endl;

  op = op++;
  std::cout << op.getNum() << std::endl;

  op = ++op;
  std::cout << op.getNum() << std::endl;

  op = 999;
  std::cout << op << std::endl;

  int num = op;
  std::cout << num << std::endl;

  std::function<int(int, int)> f1 = [](int a, int b) -> int { return a + b; };
  std::cout << f1(1, 2) << std::endl;
}