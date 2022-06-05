#include "control/copy_cst.h"

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
}