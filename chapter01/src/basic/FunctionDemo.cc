//
// Created by li on 4/9/22.
//

#include "FunctionDemo.h"

void passByValue(int num1, int num2) {
  int tmp = num1;
  num1 = num2;
  num2 = tmp;
}

void FunctionDemo::passByValue() {
  int num1 = 1, num2 = 3;

  std::cout << num1 << " " << num2 << std::endl;
  ::passByValue(num1, num2);
  std::cout << num1 << " " << num2 << std::endl;
}

void passByReference(int& num1, int& num2) {
  int tmp = num1;
  num1 = num2;
  num2 = tmp;
}

void FunctionDemo::passByReference() {
  int num1 = 1, num2 = 3;

  std::cout << num1 << " " << num2 << std::endl;
  ::passByReference(num1, num2);
  std::cout << num1 << " " << num2 << std::endl;
}

void passByAddress(int* num1, int* num2) {
  int tmp = *num1;
  *num1 = *num2;
  *num2 = tmp;
}

void FunctionDemo::passByAddress() {
  int num1 = 1, num2 = 3;

  std::cout << num1 << " " << num2 << std::endl;
  ::passByAddress(&num1, &num2);
  std::cout << num1 << " " << num2 << std::endl;
}