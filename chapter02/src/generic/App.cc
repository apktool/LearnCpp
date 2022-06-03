#include "algorithm/alg_demo.h"
#include "lambda/lambda_demo.h"
#include "lambda/bind_demo.h"
#include "iterator/iterator_demo.h"

int main(int argc, char* argv[]) {
  /**
   * algorithm
   */
  AlgoDemo algo_demo;
  algo_demo.testFind();
  algo_demo.testAccumulate();
  algo_demo.testEqual();
  algo_demo.testFill();
  algo_demo.testCopy();
  algo_demo.testSort();

  /**
   * lambda
   */
  LambdaDemo lambda_demo;
  lambda_demo.testBasic();
  lambda_demo.testCapture();

  /**
   * bind
   */
  BindDemo bind_demo;
  bind_demo.testBind();

  /**
   * iterator
   */
  IteratorDemo iterator_demo;
  iterator_demo.testInsert();
  iterator_demo.testIostream();
  iterator_demo.testReverse();

  return 0;
}