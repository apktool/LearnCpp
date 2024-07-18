#include "basic/base_test.h"
#include "basic/ch_arena.h"
#include <gtest/gtest.h>

namespace basic {
struct Row {
  Row(const uint64_t id, std::string name, const uint16_t age): id(id), name(std::move(name)), age(age) {};

  uint64_t id;
  std::string name;
  uint16_t age;
};

TEST_F(BaseTest, Arena) {
  Arena arena;
  const Row* row = arena.CreateObject<Row>(1, "zhang", 18);
  std::cout << "id=" << row->id << ", name=" << row->name << ", age=" << row->age << std::endl;
}
}