#include <iostream>

/**
 * 全局命名空间(global namespace)
 * 嵌套命名空间
 * 内联命名空间
 * 未命名的命名空间(unnamed namespace)
 */

namespace A {
int i = 0;
namespace B {
int i = 1;  // 在 B 中隐藏了 A::i
int j = 1;
int f1() {
  int j = 2;  // j 是 f1 的局部变量，隐藏了 A::B::j，所以 A::B::j 并不会因为这里的赋值而改变
  return i;
}
}  // namespace B
int f2() {
  // return j; // ERROR, j 未被定义
  return 0;
}

int j = i;
};  // namespace A