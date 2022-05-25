//
// 仿函数
// Created by li on 4/26/22.
//

#include "FunctionalDemo.h"

void FunctionalDemo::testBasic() {
  std::vector<int> vector1;
  vector1.push_back(1);
  vector1.push_back(2);
  vector1.push_back(3);

  // ---------------------

  std::vector<int>::iterator
      it1 = std::find_if(vector1.begin(), vector1.end(), FuncCompare());
  while (it1 != vector1.end()) {
    std::cout << *it1++ << " ";
  }
  std::cout << std::endl;

  // ---------------------

  std::sort(vector1.begin(), vector1.end(), FuncCompare());
  for (auto& item : vector1) {
    std::cout << item << " ";
  }
  std::cout << std::endl;

  std::sort(vector1.begin(), vector1.end(), std::greater<int>());
  for (const auto& item : vector1) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
}

void FunctionalDemo::testMedium() {
  // 算术仿函数
  std::negate<int> n1;
  std::cout << n1(20) << std::endl;

  std::plus<int> n2;
  std::cout << n2(1, 99) << std::endl;

  std::minus<int> n3;
  std::cout << n3(99, 1) << std::endl;

  std::multiplies<int> n4;
  std::cout << n4(3, 8) << std::endl;

  std::divides<int> n5;
  std::cout << n5(8, 4) << std::endl;

  std::modulus<int> n6;
  std::cout << n6(4, 4) << std::endl;

  // 关系仿函数
  std::equal_to<int> r1;
  std::cout << r1(1, 1) << std::endl;

  std::not_equal_to<int> r2;
  std::cout << r2(2, 1) << std::endl;

  std::greater<int> r3;
  std::cout << r3(3, 1) << std::endl;

  std::greater_equal<int> r4;
  std::cout << r4(1, 1) << std::endl;

  std::less<int> r5;
  std::cout << r5(1, 3) << std::endl;

  std::less_equal<int> r6;
  std::cout << r6(1, 1) << std::endl;

  // 逻辑仿函数
  std::logical_and<int> b1;
  std::cout << b1(false, true) << std::endl;

  std::logical_or<int> b2;
  std::cout << b2(false, true) << std::endl;

  std::logical_not<int> b3;
  std::cout << b3(false) << std::endl;
}