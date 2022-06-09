#include "control/copy_cst.h"
#include "control/cst_demo.h"

namespace {
CstDemo GetCstDemo() {
  return CstDemo(99);
}

CstDemo&& MoveA(CstDemo& cst) {
  return std::move(cst);
}
}

int main(int argc, char* argv[]) {
  /*
   * class copy control
   */
  ClassLikeValue class_like_value1("Hello world");
  ClassLikeValue class_like_value2(class_like_value1);
  std::string str1 = class_like_value2.getStr();
  int i1 = class_like_value2.getI();
  std::cout << i1 << " " << str1 << std::endl;

  ClassLikePoint class_like_point1("hello world");
  ClassLikePoint class_like_point2(class_like_point1);
  std::string str2 = class_like_point2.getStr();
  int i2 = class_like_point2.getI();
  std::cout << i2 << " " << str2 << std::endl;

  ClassLikePoint class_like_point3(class_like_point1);
  std::cout << class_like_point3.getUse() << std::endl;

  /**
   * class move control
   */
  std::cout << "cst_demo" << std::endl;
  CstDemo cst_demo(99);

  std::cout << "----> cst1" << std::endl;
  CstDemo cst1 = cst_demo;
  std::cout << "----> cst2" << std::endl;
  CstDemo cst2(cst_demo);
  std::cout << "----> cst" << std::endl;
  cst1 = cst2;

  std::cout << "----> cst3" << std::endl;
  CstDemo cst3 = CstDemo(99);
  std::cout << "----> cst4" << std::endl;
  CstDemo cst4 = std::move(cst_demo);

  std::cout << "----> cst5" << std::endl;
  CstDemo cst5 = GetCstDemo();
  std::cout << "----> cst6" << std::endl;
  CstDemo&& cst6 = std::move(cst2);
  std::cout << "----> cst7" << std::endl;
  CstDemo&& cst7 = MoveA(cst5);

  std::cout << "----> cst" << std::endl;
  cst2 = CstDemo(99);
}