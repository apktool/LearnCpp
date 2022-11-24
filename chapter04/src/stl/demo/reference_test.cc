#include "reference_test.h"

namespace {
template <class T1, class T2>
void PrintIsSame() {
  std::cout << std::is_same<T1, T2>() << std::endl;
}
}  // namespace

void ReferenceTest::testBasic() {
  PrintIsSame<int, int>();
  PrintIsSame<int, int&>();
  PrintIsSame<int, int&&>();

  PrintIsSame<int, int>();
  PrintIsSame<int, std::remove_reference<int&>::type>();
  PrintIsSame<int, std::remove_reference<int&&>::type>();
}
