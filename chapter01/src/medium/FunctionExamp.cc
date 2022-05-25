//
// Created by li on 4/10/22.
//

#include "FunctionExamp.h"

int testDefaultParams1(int a, int b = 2, int c = 3) {
  return a + b + c;
}

int testDefaultParams2(int a, int b = 2, int c = 3);

void FunctionExamp::testDefaultParams() {
  int res1 = ::testDefaultParams1(1);
  std::cout << res1 << std::endl;

  int res2 = ::testDefaultParams1(1, 100);
  std::cout << res2 << std::endl;

  int res3 = ::testDefaultParams1(1, 100);
  std::cout << res3 << std::endl;

  int res4 = ::testDefaultParams2(1);
  std::cout << res4 << std::endl;
}

void testPlaceholders1(int a, int) {
  std::cout << "a: " << a << std::endl;
}

void testPlaceholders2(int a, int = 10) {
  std::cout << "a: " << a << std::endl;
}

void FunctionExamp::testPlaceholders() {
  ::testPlaceholders1(10, 10);
  ::testPlaceholders2(10);
}

int testDefaultParams2(int a, int b, int c) {
  return a + b + c;
}