#include "basic/ch_pointer.h"
#include <gtest/gtest.h>

namespace basic {
class BaseTest: public ::testing::Test {};

TEST_F(BaseTest, Pointer) {
  show_point();
}
}