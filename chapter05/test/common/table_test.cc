//
// Created by li on 5/15/22.
//

#include "table_test.h"

namespace dt {
class TableTest : public testing::Test {
 public:
  TableTest() = default;
  MockTable mock_table_;

 protected:
  void SetUp() override {
    MockTable::Builder* builder = new MockTable::Builder();
    mock_table_ = builder->SetId(1)->SetName("db1")->Build();
  }
};

TEST_F(TableTest, DataBaseConstruct) {
  uint64_t id = mock_table_.id_;
  std::string name = mock_table_.name_;

  Table table;
  table.id = id;
  table.name = name;

  EXPECT_EQ(1, table.id);
}
}