#include "pointer/member_demo.h"
#include "union/union_demo.h"
#include "bitfield/bit_field.h"
#include "volatile/volatile_demo.h"

int main(int argc, char* argv[]) {
  /**
   * member point
   */
  MemberDemo member_demo(8);

  // 数据成员指针
  int MemberDemo::*pc = &MemberDemo::c;
  // pc = &MemberDemo::c
  member_demo.*pc = 9;

  // 成员函数指针
  int (MemberDemo::*pFun)(int) = &MemberDemo::Fun;
  // pFun = &MemberDemo::Fun;

  MemberDemo* p = &member_demo;
  int res = (p->*pFun)(5);
  std::cout << res << std::endl;

  /**
   * union
   */
  UnionDemo union_demo;
  union_demo.testUnion();

  /**
   * bit field
   */
  BitFieldDemo bit_field_demo;
  bit_field_demo.testBitField();

  /**
   * volatile
   */
  VolatileDemo volatile_demo;
  volatile_demo.testVolatile();
}